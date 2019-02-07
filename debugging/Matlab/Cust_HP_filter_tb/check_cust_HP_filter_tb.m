%% this script is to test the output of the cust_HP_filter_tb

clear
clc

% Change the current folder to the folder of this m-file.
if(~isdeployed)
  cd(fileparts(which(mfilename)));
end
cd ..\..\sample_data
% load('D:\R18-42_2018_05_06_2\R18-42_2018_05_06_2_RawData\R18-42_2018_05_06_2_Raw_P1_Ch_022.mat')
% data_reduced_scaled=data(1e5:3e5);
% data_reduced =(data_reduced_scaled/0.195)+32768; % scale voltage levels

load('data_reduced')
fs=30e3;
data_hex=dec2hex(data_reduced,16);
hex_matrix=char(data_hex);

data_bin=dec2bin(data_reduced,16);
bin_matrix=char(data_bin);
fileID = fopen('raw_data_bin.txt', 'w');
 for i=1:length(bin_matrix)
%     fprintf(fileID, '%s \n', hex_matrix(i,:));
    fprintf(fileID, '%s \n', bin_matrix(i,:));
 end
 fclose(fileID);
 
 
 %% retrieve binary from txt file
fileID = fopen('raw_data_bin.txt', 'r');
retrieved_bin_vector= fscanf(fileID, '%s');
retrieved_bin_matrix= reshape(retrieved_bin_vector,16,[])';
fclose(fileID);

%% check how to obtain the binary form of the raw data as FPGA sees it
retrieved_bin_matrix_dec=bin2dec(retrieved_bin_matrix);
retrieved_bin_matrix_scaled=0.195 * (retrieved_bin_matrix_dec - 32768); % units = microvolts

%% compare to check that everything was good
% figure
% plot(data_reduced_scaled)
% hold on
% plot(retrieved_bin_matrix_scaled)
% legend({'original','reconstructed'})
% title('check that all conversions are good')

 %% retrieve binary from output txt file
cd('..\..\Hardware\Stimulation Controller\proj')
fileID = fopen('output.txt', 'r');
retrieved_bin_vector= fscanf(fileID, '%s');
retrieved_bin_matrix= reshape(retrieved_bin_vector,16,[])';
fclose(fileID);

%% check how to obtain the binary form of the raw data as FPGA sees it
retrieved_bin_matrix_dec=bin2dec(retrieved_bin_matrix(5:end,:)); % from 5 which is the clock rate, not the sample rate
retrieved_bin_matrix_scaled=0.195 * (retrieved_bin_matrix_dec - 32768); % units = microvolts

%% compare to check that everything was good
num_samples=length(retrieved_bin_matrix_dec);
time_s=(1:num_samples)/fs;
figure
plot(time_s,data_reduced_scaled(1:num_samples))
hold on
plot(time_s,retrieved_bin_matrix_scaled)
xlabel('Time [s]')
legend({'original','filtered HP @ 300Hz'})
title('check results of the filter')












 
 