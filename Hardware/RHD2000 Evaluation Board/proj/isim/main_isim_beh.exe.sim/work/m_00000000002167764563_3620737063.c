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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Max Murphy/Desktop/Preliminary intan/RHD2000InterfaceXEM6010/variable_freq_clk_generator.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};



static void Cont_94_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 9688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 6288U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t3, 9, t2, 32);
    t5 = (t0 + 11392);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 511U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 8);
    t18 = (t0 + 11248);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_95_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 9936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 6448U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t3, 9, t2, 32);
    t5 = (t0 + 11456);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 511U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 8);
    t18 = (t0 + 11264);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_96_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 10184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 7408U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 255U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 255U);
    t12 = (t0 + 11520);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 255U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 7);
    t25 = (t0 + 11280);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_97_3(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 10432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 7248U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 255U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 255U);
    t12 = (t0 + 11584);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 255U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 7);
    t25 = (t0 + 11296);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_138_4(char *t0)
{
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    unsigned int t15;

LAB0:    t1 = (t0 + 10680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 11312);
    *((int *)t2) = 1;
    t3 = (t0 + 10712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(138, ng0);

LAB5:    xsi_set_current_line(139, ng0);
    t4 = (t0 + 6128U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(143, ng0);

LAB10:    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 8768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = (t0 + 744);
    t11 = *((char **)t5);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t11, 32);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB20;

LAB21:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB22;

LAB23:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB24;

LAB25:    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB26;

LAB27:    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB28;

LAB29:    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB30;

LAB31:    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB32;

LAB33:    t2 = (t0 + 2240);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB34;

LAB35:    t2 = (t0 + 2376);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB36;

LAB37:    t2 = (t0 + 2512);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB38;

LAB39:    t2 = (t0 + 2648);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB40;

LAB41:    t2 = (t0 + 2784);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB42;

LAB43:    t2 = (t0 + 2920);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB44;

LAB45:    t2 = (t0 + 3056);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB46;

LAB47:    t2 = (t0 + 3192);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB48;

LAB49:    t2 = (t0 + 3328);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB50;

LAB51:    t2 = (t0 + 3464);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB52;

LAB53:    t2 = (t0 + 3600);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB54;

LAB55:    t2 = (t0 + 3736);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB56;

LAB57:    t2 = (t0 + 3872);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB58;

LAB59:    t2 = (t0 + 4008);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB60;

LAB61:    t2 = (t0 + 4144);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB62;

LAB63:    t2 = (t0 + 4280);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB64;

LAB65:    t2 = (t0 + 4416);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB66;

LAB67:    t2 = (t0 + 4552);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB68;

LAB69:    t2 = (t0 + 4688);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB70;

LAB71:    t2 = (t0 + 4824);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB72;

LAB73:    t2 = (t0 + 4960);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB74;

LAB75:    t2 = (t0 + 5096);
    t3 = *((char **)t2);
    t13 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t13 == 1)
        goto LAB76;

LAB77:
LAB79:
LAB78:    xsi_set_current_line(355, ng0);

LAB124:    xsi_set_current_line(356, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(357, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(358, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB80:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(139, ng0);

LAB9:    xsi_set_current_line(140, ng0);
    t11 = (t0 + 744);
    t12 = *((char **)t11);
    t11 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 32, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(149, ng0);

LAB81:    xsi_set_current_line(150, ng0);
    t5 = ((char*)((ng2)));
    t12 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t12, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 6608U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(154, ng0);

LAB86:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB84:    goto LAB80;

LAB14:    xsi_set_current_line(159, ng0);

LAB87:    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(162, ng0);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB16:    xsi_set_current_line(165, ng0);

LAB88:    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB18:    xsi_set_current_line(171, ng0);

LAB89:    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(173, ng0);
    t2 = (t0 + 7568U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t11 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(174, ng0);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB20:    xsi_set_current_line(177, ng0);

LAB90:    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(179, ng0);
    t2 = (t0 + 7568U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t11 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB22:    xsi_set_current_line(183, ng0);

LAB91:    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(185, ng0);
    t2 = (t0 + 7568U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 2);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t11 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB24:    xsi_set_current_line(189, ng0);

LAB92:    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 7568U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 3);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t11 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(192, ng0);
    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB26:    xsi_set_current_line(195, ng0);

LAB93:    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 7568U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 4);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 4);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t11 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(198, ng0);
    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB28:    xsi_set_current_line(201, ng0);

LAB94:    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(203, ng0);
    t2 = (t0 + 7568U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 5);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 5);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t11 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(204, ng0);
    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB30:    xsi_set_current_line(207, ng0);

LAB95:    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 7568U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 6);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 6);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t11 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB32:    xsi_set_current_line(213, ng0);

LAB96:    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(215, ng0);
    t2 = (t0 + 7568U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 7);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t11 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 2240);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB34:    xsi_set_current_line(219, ng0);

LAB97:    xsi_set_current_line(220, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(221, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(222, ng0);
    t2 = (t0 + 2376);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB36:    xsi_set_current_line(225, ng0);

LAB98:    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(227, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(228, ng0);
    t2 = (t0 + 2512);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB38:    xsi_set_current_line(231, ng0);

LAB99:    xsi_set_current_line(232, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(233, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(234, ng0);
    t2 = (t0 + 2648);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB40:    xsi_set_current_line(237, ng0);

LAB100:    xsi_set_current_line(238, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(239, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(240, ng0);
    t2 = (t0 + 2784);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB42:    xsi_set_current_line(243, ng0);

LAB101:    xsi_set_current_line(244, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(245, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(246, ng0);
    t2 = (t0 + 2920);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB44:    xsi_set_current_line(249, ng0);

LAB102:    xsi_set_current_line(250, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(251, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(252, ng0);
    t2 = (t0 + 3056);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB46:    xsi_set_current_line(255, ng0);

LAB103:    xsi_set_current_line(256, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(257, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(258, ng0);
    t2 = (t0 + 3192);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB48:    xsi_set_current_line(261, ng0);

LAB104:    xsi_set_current_line(262, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(263, ng0);
    t2 = (t0 + 7728U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t11 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(264, ng0);
    t2 = (t0 + 3328);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB50:    xsi_set_current_line(267, ng0);

LAB105:    xsi_set_current_line(268, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(269, ng0);
    t2 = (t0 + 7728U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t11 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(270, ng0);
    t2 = (t0 + 3464);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB52:    xsi_set_current_line(273, ng0);

LAB106:    xsi_set_current_line(274, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(275, ng0);
    t2 = (t0 + 7728U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 2);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t11 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(276, ng0);
    t2 = (t0 + 3600);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB54:    xsi_set_current_line(279, ng0);

LAB107:    xsi_set_current_line(280, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(281, ng0);
    t2 = (t0 + 7728U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 3);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t11 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(282, ng0);
    t2 = (t0 + 3736);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB56:    xsi_set_current_line(285, ng0);

LAB108:    xsi_set_current_line(286, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(287, ng0);
    t2 = (t0 + 7728U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 4);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 4);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t11 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(288, ng0);
    t2 = (t0 + 3872);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB58:    xsi_set_current_line(291, ng0);

LAB109:    xsi_set_current_line(292, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(293, ng0);
    t2 = (t0 + 7728U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 5);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 5);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t11 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(294, ng0);
    t2 = (t0 + 4008);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB60:    xsi_set_current_line(297, ng0);

LAB110:    xsi_set_current_line(298, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(299, ng0);
    t2 = (t0 + 7728U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 6);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 6);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t11 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(300, ng0);
    t2 = (t0 + 4144);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB62:    xsi_set_current_line(303, ng0);

LAB111:    xsi_set_current_line(304, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(305, ng0);
    t2 = (t0 + 7728U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 7);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t11 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(306, ng0);
    t2 = (t0 + 4280);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB64:    xsi_set_current_line(309, ng0);

LAB112:    xsi_set_current_line(310, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(311, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(312, ng0);
    t2 = (t0 + 4416);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB66:    xsi_set_current_line(315, ng0);

LAB113:    xsi_set_current_line(316, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(317, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(318, ng0);
    t2 = (t0 + 4552);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB68:    xsi_set_current_line(321, ng0);

LAB114:    xsi_set_current_line(322, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(323, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(324, ng0);
    t2 = (t0 + 4688);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB70:    xsi_set_current_line(327, ng0);

LAB115:    xsi_set_current_line(328, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(329, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(330, ng0);
    t2 = (t0 + 4824);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB72:    xsi_set_current_line(333, ng0);

LAB116:    xsi_set_current_line(334, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(335, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(336, ng0);
    t2 = (t0 + 4960);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB74:    xsi_set_current_line(339, ng0);

LAB117:    xsi_set_current_line(340, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(341, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(342, ng0);
    t2 = (t0 + 5096);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB80;

LAB76:    xsi_set_current_line(345, ng0);

LAB118:    xsi_set_current_line(346, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 8448);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(347, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(348, ng0);
    t2 = (t0 + 6608U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB119;

LAB120:    xsi_set_current_line(350, ng0);

LAB123:    xsi_set_current_line(351, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB121:    goto LAB80;

LAB82:    xsi_set_current_line(152, ng0);

LAB85:    xsi_set_current_line(153, ng0);
    t5 = (t0 + 880);
    t11 = *((char **)t5);
    t5 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t5, t11, 0, 0, 32, 0LL);
    goto LAB84;

LAB119:    xsi_set_current_line(348, ng0);

LAB122:    xsi_set_current_line(349, ng0);
    t5 = (t0 + 5096);
    t11 = *((char **)t5);
    t5 = (t0 + 8768);
    xsi_vlogvar_wait_assign_value(t5, t11, 0, 0, 32, 0LL);
    goto LAB121;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 10928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng3)));
    t3 = (t0 + 11648);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}


extern void work_m_00000000002167764563_3620737063_init()
{
	static char *pe[] = {(void *)Cont_94_0,(void *)Cont_95_1,(void *)Cont_96_2,(void *)Cont_97_3,(void *)Always_138_4,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000002167764563_3620737063", "isim/main_isim_beh.exe.sim/work/m_00000000002167764563_3620737063.didat");
	xsi_register_executes(pe);
}
