clear
clc
close all

% load original data
load('C:\Users\BuccelliLab\Documents\GitHub\intan_project\debugging\sample_data\data_reduced.mat')
raw_signal=data_reduced_scaled(1:10001);

% load filtered data by cust_HP_tb
retrieved_filtered_by_tb=retrieve_from_txt('output_read_1.txt');

% filter data by offline one-pole filter
offline_HP = HPF(raw_signal, 3e4, 300);


%% plot stuff
plot(raw_signal)
hold on
plot(retrieved_filtered_by_tb)
plot(offline_HP)
legend({'raw','filtered by tb','offline HP'})
xlabel('samples')