%% send data to txt

% load('D:\R18-42_2018_05_06_2\R18-42_2018_05_06_2_RawData\R18-42_2018_05_06_2_Raw_P1_Ch_022.mat')
% data_reduced_scaled=data(1e5:3e5);
% data_reduced =(data_reduced_scaled/0.195)+32768; % scale voltage levels

% load('data_reduced')
% load('D:\raw_data_r17.mat')
clear
load('C:\Users\BuccelliLab\Documents\GitHub\intan_project\debugging\sample_data\data_reduced_r17.mat')
fs=30e3;
data_reduced=data_reduced(1:10001);
data_reduced_scaled=data_reduced_scaled(1:10001);
data_hex=dec2hex(data_reduced,16);
hex_matrix=char(data_hex);

data_bin=dec2bin(data_reduced,16);
bin_matrix=char(data_bin);
cd('C:\Users\BuccelliLab\Documents\GitHub\intan_project\debugging\sample_data')

fileID = fopen('raw_data_bin_r17_10001.txt', 'w');
for i=1:length(bin_matrix)
    %     fprintf(fileID, '%s \n', hex_matrix(i,:));
    fprintf(fileID, '%s \n', bin_matrix(i,:));
end
 fclose(fileID);