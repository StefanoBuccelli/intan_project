function safe_th=get_safe(threshold)
   % if negative put +, if positive put -
   if threshold>=0
       safe_th=round(threshold/0.195)*0.195-0.195/2;
   else
       safe_th=round(threshold/0.195)*0.195+0.195/2;
   end
end