function [b,a] = iit_check_cpp_filter(fc,fs,varargin)
%% IIT_CHECK_CPP_FILTER  Quickly assess properties of simple IIR filter implementation.
%
%   [b,a] = IIT_CHECK_CPP_FILTER('NAME',value,...);
%
%   --------
%    INPUTS
%   --------
%      fc           :       Cutoff frequency.
%
%      fs           :       Sampling rate (typically 25 kHz or 30 kHz).
%
%   varargin        :       (Optional) 'NAME', value input argument pairs.
%
%                           -> 'TYPE' [def: 'lowpass'] // Can be: 
%                                'lowpass' / 'highpass'
%
%   --------
%    OUTPUT
%   --------
%       b           :       Numerator coefficients.
%
%       a           :       Denominator coefficients.
%
%   Uses FREQZ to get the digital filter characteristics obtained for a
%   single-pole butterworth filter estimated using the Intan UI.
%
% By: Max Murphy    v1.0    05/25/2018  Original version (R2017a)
%                   v1.1    06/18/2018  Fixing bad implementation.

%% DEFAULTS
TYPE = 'lowpass';
N = 2048;

N_POINT = 500;
F_OSC = 1000;

%% PARSE VARARGIN
for iV = 1:2:numel(varargin)
    eval([upper(varargin{iV}) '=varargin{iV+1};']);
end

%% CREATE SYNTHETIC OSCILLATION
n = (0:(N_POINT-1))/(fs);
input = cos(2*pi*F_OSC*n);

%% COMPUTE COEFFICIENTS
switch TYPE
    case 'highpass' % Works
        fprintf(1,'\nComputing coefficients for highpass filter...');
% To recreate:
%
%         void SignalProcessor::setHighpassFilter(double cutoffFreq, double sampleFreq)
%         {
%             aHpf = exp(-1.0 * TWO_PI * cutoffFreq / sampleFreq);
%             bHpf = 1.0 - aHpf;
%         }
%           ...
%           ...
%           ...
%         for (stream = 0; stream < numDataStreams; ++stream) {
%             for (channel = 0; channel < CHANNELS_PER_STREAM; ++channel) {
%                 if (channelVisible.at(stream).at(channel)) {
%                     for (t = 0; t < length; ++t) {
%                         temp = amplifierPostFilter[stream][channel][t];
%                         amplifierPostFilter[stream][channel][t] -= highpassFilterState[stream][channel];
%                         highpassFilterState[stream][channel] =
%                                 aHpf * highpassFilterState[stream][channel] + bHpf * temp;
%                     }
%                 }
%             }
%         }
%      
        a = exp(-1.0 * 2 * pi * fc / fs);
        b = 1 - a;
        
        state = zeros(1,numel(input)+1);
        
        output = input;
        for k = 1:N_POINT
           
           state(k+1) = a * state(k) + b * input(k);
           output(k) = input(k) - state(k);
           
        end
        
        [b_f,a_f] = ss2tf(a,b,-1,1);
        
        figure('Name','Sinusoid Attenuation - HPF',...
               'WindowStyle','docked');
        subplot(2,1,1);
        plot(n,input);
        title(sprintf('x[n] (f_{osc} = %d)',F_OSC));
        subplot(2,1,2);
        plot(n,output);
        title(sprintf('y[n] (f_{osc} = %d)',F_OSC));
        
        figure('Name','FreqZ - HPF',...
               'WindowStyle','docked');
        subplot(2,1,1);
        plot(n,input);
        title('x[n]');
        ylim([-1 1]);
        subplot(2,1,2);
        plot(n,output);
        title('y[n]');
        ylim([-1 1]);
        
        freqz(b_f,a_f,N,fs);
        ax = get(gcf,'Children');
        axes(ax(1));
        xlim([0 2*max(fc,F_OSC)]);
        title(sprintf('Highpass Butterworth Filter (f_c = %d)',fc));
        axes(ax(2));
        xlim([0 2*max(fc,F_OSC)]);
        
        
        
    case 'lowpass'
        fprintf(1,'\nComputing coefficients for lowpass filter...');
% To recreate:
%
%         void SignalProcessor::setLowpassFilter(double cutoffFreq, double sampleFreq)
%         {
%             aLpf = exp(-1.0 * TWO_PI * cutoffFreq / sampleFreq);
%             bLpf = aLpf;
%         }
%           ...
%           ...
%           ...
%         for (stream = 0; stream < numDataStreams; ++stream) {
%             for (channel = 0; channel < CHANNELS_PER_STREAM; ++channel) {
%                 if (channelVisible.at(stream).at(channel)) {
%                     for (t = 0; t < length; ++t) {
%                         temp = amplifierPostFilter[stream][channel][t];
%                         amplifierPostFilter[stream][channel][t] -= lowpassFilterState[stream][channel];
%                         lowpassFilterState[stream][channel] =
%                                 aLpf * lowpassFilterState[stream][channel] + bLpf * temp;
%                     }
%                 }
%             }
%         }

        a = exp(-1.0 * 2 * pi * fc / fs);
        b = 1 - a;
        
        state = zeros(1,numel(input)+1);
        
        output = input;
        for k = 1:N_POINT
           
           state(k+1) = a * state(k) + b * input(k);
           output(k) = state(k);
           
        end

        [b_f,a_f] = ss2tf(a,b,1,0);
        
        figure('Name','Sinusoid Attenuation - LPF',...
               'WindowStyle','docked');
        subplot(2,1,1);
        plot(n,input);
        title(sprintf('x[n] (f_{osc} = %d)',F_OSC));
        ylim([-1 1]);
        subplot(2,1,2);
        plot(n,output);
        title(sprintf('y[n] (f_{osc} = %d)',F_OSC));
        ylim([-1 1]);
        
        figure('Name', 'FreqZ - LPF',...
               'WindowStyle','docked');
        freqz(b_f,a_f,N,fs);
        ax = get(gcf,'Children');
        axes(ax(1));
        xlim([0 2*max(fc,F_OSC)]);
        title(sprintf('Lowpass Butterworth Filter (f_c = %d)',fc));
        axes(ax(2));
        xlim([0 2*max(fc,F_OSC)]);
        
    otherwise
        error('Invalid specification for TYPE (%s). Must be lowpass or highpass.',TYPE);
end
fprintf(1,'complete.\n');

end