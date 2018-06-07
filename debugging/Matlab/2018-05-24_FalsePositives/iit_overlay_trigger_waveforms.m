function [idx,snips] = iit_overlay_trigger_waveforms(block,varargin)
%% IIT_OVERLAY_TRIGGER_WAVEFORMS    Overlay all trigger waveforms for FSM debug
%
%   idx = IIT_OVERLAY_TRIGGER_WAVEFORMS(block,'NAME',value,...);
%
%   --------
%    INPUTS
%   --------
%     block     :       Struct that corresponds to data from a pilot
%                       recording. Saved in 'sample_data' for R18-06. Has 3
%                       different data streams:
%
%                       -> 'raw' // raw waveform
%                       -> 'offline_filtdata' // filtered with long FIR
%                                                filter offline
%                       -> 'online_filtdata' // from Intan matlab script
%                                               designed to emulate the
%                                               hardware filter in the DAC
%
%                        Additionally, has binary (digital) streams of
%                        inputs that correspond to the state of the FSM at
%                        any given sample index.
%                       
%                        -> 'done' // FSM completed, trigger stimulation
%                                     after 7.5 ms
%
%                                   NOTE: BECAUSE THE BLANKING PERIOD IS
%                                   IMPOSED SEPARATELY, THIS IS NOT
%                                   RELIABLE AND SHOULD JUST BE THOUGHT OF
%                                   AS 'FSM-COMPLETE' AS OPPOSED TO 'STIM'.
%
%                        -> 'active' // FSM cycle is active but has not yet
%                                       completed.
%                        -> 'idle' // FSM cycle is idle (threshold has not
%                                       been crossed recently, or stim was
%                                       just delivered). 
%
%                        -> 'stim' // Times when stimulation was delivered
%
%                       Also contains a sparse indexing vector of
%                       offline-detected spike events, as well as a matrix
%                       where each row corresponds to a 30-sample snippet
%                       of highpass-filtered activity around the spike. 
%
%   varargin    :       (Optional) 'NAME', value input argument pairs.
%
%   --------
%    OUTPUT
%   --------
%      idx      :       Struct containing sample indices of various events
%                       of interest that were obtained in creating the
%                       overlayed figures.
%
%     snips     :       Struct containing snippets representing the period
%                       around the spike trigger and the stimulus waveform.
%
%   Plots overlayed "trigger" waveforms in order to debug whether or not
%   there was a large ("slow") artifact that completed the FSM, or whether
%   this is just a ripple artifact from offline filter that actually passed
%   the FSM correctly during online phase.
%
% By: Max Murphy    v1.0    05/22/2018  Original version (R2017a)

%% DEFAULTS
STREAM = {'raw'; ...
          'offline_filtdata'; ...
          'online_filtdata'; ...
          'dac'};
      
COL = {[0.6 0.6 0.6];...
       [0.6 0.6 0.6]; ...
       [0.2 0.2 0.2]; ...
       [0.0 0.0 0.0]};
DELAY = 7.5;    % (ms); delay between trigger and stimulation
STIM_LEN = 11;  % Length of bi-phasic, cathodal-leading stim pulse (indices)
SNIP_T = [-9 -6]; % (ms); [start stop] of snippets relative to STIM ts
X_LIM = SNIP_T;
Y_LIM = [-500 200];
N_SPK = 250;

T0 = 0;
T1 = 1;

T2 = 8;
T3 = 10;

L0 = -130;
L1 = -275;

L2 = 10;
L3 = 150;

SAMPLE_DELAY = 4;

%% PARSE VARARGIN
for iV = 1:2:numel(varargin)
   eval([upper(varargin{iV}) '=varargin{iV+1};']); 
end

t0 = (T0 - T3 - SAMPLE_DELAY) / block.fs * 1e3 - DELAY;
t1 = (T1 - T3 - SAMPLE_DELAY) / block.fs * 1e3 - DELAY;

t2 = (T2 - T3 - SAMPLE_DELAY) / block.fs * 1e3 - DELAY;
t3 = (-SAMPLE_DELAY) / block.fs * 1e3 - DELAY;

%% GET STIM SAMPLE INDEXES -> PUTATIVE TRIGGER INDEXES
i_diff = DELAY*1e-3*block.fs; % Sample index delay from trig to stim

i_stim = find(block.stim < 0);

i_stim_sel = [inf, diff(i_stim)];
i_stim = i_stim(i_stim_sel > STIM_LEN);

i_trig = i_stim - i_diff;
i_trig(i_trig < 1) = []; % Only want triggers with feasible sample index

i_enter = find(block.idle < 1);
i_enter_sel = [inf, diff(i_enter)];
i_enter = i_enter(i_enter_sel > 1);

%% OUTPUT INDEXING STRUCT
idx = struct;
idx.trig = i_trig;
idx.stim = i_stim;
idx.delay = i_diff;
idx.stim_dur = STIM_LEN;
idx.all_fsm_completions = find(block.done);
idx.all_fsm_entrances = i_enter;


%% MAKE PLOTS AND GET SNIPPETS
figure('Name','Trigger Candidate Overlays',...
       'Units','Normalized',...
       'Position',[0.1 0.1 0.8 0.8],...
       'Color','w');
   
snips = struct;
snips.t = SNIP_T(1):((1/block.fs)*1e3):SNIP_T(2);
n = numel(snips.t);
snips.idx = linspace(round(SNIP_T(1)*1e-3*block.fs),...
                     round(SNIP_T(2)*1e-3*block.fs),...
                     n);
snips.idx = round(snips.idx);

idx.stim = idx.stim((idx.stim + snips.idx(1)) > 0 & ...
                    (idx.stim + snips.idx(end)) <= numel(block.(STREAM{1})));

m = numel(idx.stim);


for ii = 1:numel(STREAM)
    subplot(1,numel(STREAM),ii);
    
    snips.(STREAM{ii}) = nan(m,n);
    for ik = 1:m
        isnip = snips.idx + idx.stim(ik);
        snips.(STREAM{ii})(ik,:) = block.(STREAM{ii})(isnip);
    end
    
    plot(snips.t,snips.(STREAM{ii})(randperm(m,N_SPK),:),...
            'Color',COL{ii},...
            'LineWidth',0.75);
        
    title(strrep(STREAM{ii},'_',' '),...
            'FontName','Arial','FontSize',16,'Color',COL{ii});
    xlabel('Time (ms)','FontName','Arial','FontSize',14);
    ylabel('Amplitude (\muV)','FontName','Arial','FontSize',14);
    set(gca,'XColor','k');
    set(gca,'YColor','k');
    set(gca,'FontName','Arial');
    set(gca,'FontSize',12);
    
    hold on;
    line([t0,t1],[L0,L0],'LineWidth',2,'Color','b');
    line([t0,t1],[L1,L1],'LineWidth',2,'Color','r');
    
    line([t2,t3],[L2,L2],'LineWidth',2,'Color','b');
    line([t2,t3],[L3,L3],'LineWidth',2,'Color','r');
    
    xlim(X_LIM);
    ylim(Y_LIM);
end
suptitle(['Sample Delay = ' num2str(SAMPLE_DELAY)]);

end