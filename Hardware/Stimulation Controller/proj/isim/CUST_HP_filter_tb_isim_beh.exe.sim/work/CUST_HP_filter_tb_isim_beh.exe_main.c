/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002465751783_0326708239_init();
    work_m_00000000003376268531_2261778307_init();
    work_m_00000000003292780236_2073120511_init();


    xsi_register_tops("work_m_00000000003376268531_2261778307");
    xsi_register_tops("work_m_00000000003292780236_2073120511");


    return xsi_run_simulation(argc, argv);

}
