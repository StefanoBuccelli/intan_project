clear
clc
close all

% load original data
% load('C:\Users\BuccelliLab\Documents\GitHub\intan_project\debugging\sample_data\data_reduced_r17.mat')
load('C:\Users\BuccelliLab\Documents\GitHub\intan_project\debugging\sample_data\data_reduced_r18.mat')
raw_signal=data_reduced_scaled;
% raw_signal=data_reduced_scaled(1:10001);
% analog_scaled=analog_scaled(1:10001);

% load filtered data by cust_HP_tb
retrieved_filtered_by_tb=retrieve_from_txt('output_read_1_r18.txt');

% filter data by offline one-pole filter
offline_HP = HPF(raw_signal, 3e4, 300);


%% plot stuff
plot(raw_signal)
hold on
% plot([(1:30)'; retrieved_filtered_by_tb])
plot(retrieved_filtered_by_tb)

plot(offline_HP)
plot(analog_scaled*1e3)
legend({'raw','filtered by tb','offline HP','online analog'})
xlabel('samples')

% plot(analog_scaled(2:end).*offline_HP(1:end-1))
% plot(retrieved_filtered_by_tb'./offline_HP)