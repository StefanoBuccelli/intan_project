// MM 1/22/2018 - FSM DISCRIMINATOR - START
integer fsm_window_state;
localparam
		  fsm_idle   = 0,
		  fsm_track  = 1,
		  fsm_stim   = 2;

always @(posedge sample_CLK_out) begin
	if (reset) begin
		// MM 1/16/18 - FSM DISCRIMINATOR - START
		fsm_window_state <= fsm_idle;
		DAC_fsm_out <= 8'b0100_0000;
		DAC_fsm_counter <= 16'b0;
		// END
	end else begin					
		if (DAC_fsm_mode) begin
			case (fsm_window_state)
				
				fsm_idle: begin
					DAC_fsm_out <= 8'b0100_0000;
					if (DAC_advance) begin
						fsm_window_state <= fsm_track;
						DAC_fsm_counter <= DAC_fsm_counter + 1;
					end
				end
				
				fsm_track: begin
					DAC_fsm_out <= 8'b0010_0000;
					if (DAC_advance) begin
						if (DAC_fsm_counter==DAC_stop_max) begin
							fsm_window_state <= fsm_stim;
							DAC_fsm_counter <= 16'b0;
						end else begin
							fsm_window_state <= fsm_track;
							DAC_fsm_counter <= DAC_fsm_counter + 1;
						end
					end else begin
						fsm_window_state <= fsm_idle;
						DAC_fsm_counter <= 16'b0;
					end
				end 
					  
				fsm_stim: begin
					DAC_fsm_out <= 8'b0001_0000;
					fsm_window_state <= fsm_idle;
				end
				
				default: begin
					DAC_fsm_out <= 8'b0100_0000;
					fsm_window_state <= fsm_idle;
					DAC_fsm_counter <= 16'b0;
				end
			endcase
		end else begin
			fsm_window_state <= fsm_idle;
			DAC_fsm_counter <= 16'b0;
			DAC_fsm_out <= 8'b0000_0000;
		end
	end
end
// MM 1/22/2018 - FSM DISCRIMINATOR - END