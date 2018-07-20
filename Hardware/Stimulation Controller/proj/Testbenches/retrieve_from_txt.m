function[retrieved_bin_matrix_scaled]=retrieve_from_txt(filename)
%% retrieve binary from output txt file
cd('C:\Users\BuccelliLab\Documents\GitHub\intan_project\Hardware\Stimulation Controller\proj')
fileID = fopen(filename, 'r');
retrieved_bin_vector= fscanf(fileID, '%s');
retrieved_bin_matrix= reshape(retrieved_bin_vector,16,[])';
fclose(fileID);

%% check how to obtain the binary form of the raw data as FPGA sees it
retrieved_bin_matrix_dec=bin2dec(retrieved_bin_matrix(5:end,:)); % from 5 which is the clock rate, not the sample rate
retrieved_bin_matrix_scaled=0.195 * (retrieved_bin_matrix_dec - 32768); % units = microvolts

% save('output_scaled','retrieved_bin_matrix_scaled')
end