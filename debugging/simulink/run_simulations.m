%% run simulink and save data in a smart way.
clear
clc
% read_Intan_RHS2000_file('C:\Users\BuccelliLab\Desktop\Prova_intan\Test Recording MM awake 02 02 2019\R18-159_2019_02_01_1_190201_142406.rhs')
read_Intan_RHS2000_file('C:\Users\BuccelliLab\Desktop\Prova_intan\Test Recording MM awake 02 02 2019\R18-159_2019_02_01_2_190201_143203.rhs')
fs=frequency_parameters.amplifier_sample_rate;
DAC_0195_0=timeseries(0.195*(board_dac_data(1,:)./312.5e-6),(1:1:length(board_dac_data(1,:)))./fs);

%%
window_discriminator_6
seconds_to_simulate=DAC_0195_0.TimeInfo.Length/30e3;
%th1
th_1=round(-40/0.195)*0.195; %uV
th_1_next=th_1+0.195;
safe_th1=mean([th_1 th_1_next]);
set_param('window_discriminator_6/Dashboard/Edit17','Value',num2str(safe_th1))
%th2
th_2=round(-149/0.195)*0.195; %uV
th_2_next=th_2+0.195;% if negative put +, if positive put -
safe_th2=mean([th_2 th_2_next]);
set_param('window_discriminator_6/Dashboard/Edit18','Value',num2str(safe_th2))
%th3
th_3=round(-25/0.195)*0.195; %uV
th_3_next=th_3+0.195;
safe_th3=mean([th_3 th_3_next]);
set_param('window_discriminator_6/Dashboard/Edit19','Value',num2str(safe_th3))
%th4
th_4=round(1300/0.195)*0.195; %uV
th_4_next=th_4-0.195;
safe_th4=mean([th_4 th_4_next]);
set_param('window_discriminator_6/Dashboard/Edit20','Value',num2str(safe_th4))
set_param('window_discriminator_6','SimulationCommand','Update')
simOut_2 = sim('window_discriminator_6','SimulationMode','accelerator',...
            'SaveState','on','StateSaveName','xout',...
            'SaveOutput','on','OutputSaveName','yout',...
 'SaveFormat', 'Dataset','StopTime', num2str(seconds_to_simulate));
close_system('window_discriminator_6')

%%
read_Intan_RHS2000_file('C:\Users\BuccelliLab\Desktop\Prova_intan\Test Recording MM awake 02 02 2019\R18-159_2019_02_01_3_190201_143840.rhs')
fs=frequency_parameters.amplifier_sample_rate;
DAC_0195_0=timeseries(0.195*(board_dac_data(1,:)./312.5e-6),(1:1:length(board_dac_data(1,:)))./fs);

%%
window_discriminator_6
seconds_to_simulate=DAC_0195_0.TimeInfo.Length/30e3;
%th1
th_1=round(-40/0.195)*0.195; %uV
th_1_next=th_1+0.195;
safe_th1=mean([th_1 th_1_next]);
set_param('window_discriminator_6/Dashboard/Edit17','Value',num2str(safe_th1))
%th2
th_2=round(-149/0.195)*0.195; %uV
th_2_next=th_2-0.195;
safe_th2=mean([th_2 th_2_next]);
set_param('window_discriminator_6/Dashboard/Edit18','Value',num2str(safe_th2))
%th3
th_3=round(-25/0.195)*0.195; %uV
th_3_next=th_3-0.195;
safe_th3=mean([th_3 th_3_next]);
set_param('window_discriminator_6/Dashboard/Edit19','Value',num2str(safe_th3))
%th4
th_4=round(13/0.195)*0.195; %uV
th_4_next=th_3+0.195;
safe_th4=mean([th_4 th_4_next]);
set_param('window_discriminator_6/Dashboard/Edit20','Value',num2str(safe_th4))
simOut_3 = sim('window_discriminator_6','SimulationMode','accelerator',...
            'SaveState','on','StateSaveName','xout',...
            'SaveOutput','on','OutputSaveName','yout',...
 'SaveFormat', 'Dataset','StopTime', num2str(seconds_to_simulate));
close_system('window_discriminator_6')
% %% compare with actual running
% read_Intan_RHS2000_file('C:\Users\BuccelliLab\Desktop\Prova_intan\Test Recording MM awake 02 02 2019\R18-159_2019_02_01_0_190201_142018.rhs')
