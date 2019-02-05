%% run simulink and save data in a smart way.
clear
clc
read_Intan_RHS2000_file('C:\Users\BuccelliLab\Desktop\Prova_intan\Test Recording MM awake 02 02 2019\R18-159_2019_02_01_1_190201_142406.rhs')
fs=frequency_parameters.amplifier_sample_rate;
DAC_0195_0=timeseries(board_dac_data(1,:),(1:1:length(board_dac_data(1,:)))./fs);

%%
window_discriminator_6
seconds_to_simulate=DAC_0195_0.TimeInfo.Length/30e3;
th_1=round(-40/0.195)*0.195; %uV
th_1_next=th_1+0.195;
safe_th_value=mean([th_1 th_1_next]);
set_param('window_discriminator_6/Dashboard/Edit17','Value',num2str(safe_th_value))
simOut = sim('window_discriminator_6','SimulationMode','accelerator',...
            'SaveState','on','StateSaveName','xout',...
            'SaveOutput','on','OutputSaveName','yout',...
 'SaveFormat', 'Dataset','StopTime', num2str(seconds_to_simulate));
close_system('window_discriminator_6')

% %% compare with actual running
% read_Intan_RHS2000_file('C:\Users\BuccelliLab\Desktop\Prova_intan\Test Recording MM awake 02 02 2019\R18-159_2019_02_01_0_190201_142018.rhs')
