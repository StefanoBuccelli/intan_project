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
static const char *ng0 = "C:/Users/BuccelliLab/Documents/GitHub/intan_project/Hardware/Stimulation Controller/proj/cust_HP_filter_tb.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {4, 0};
static const char *ng4 = "raw_data_bin_r17_10001.txt";
static unsigned int ng5[] = {10U, 0U};
static int ng6[] = {0, 0};
static unsigned int ng7[] = {3991U, 0U};
static const char *ng8 = "output_read_1_r17.txt";
static const char *ng9 = "w";
static int ng10[] = {1, 0};
static int ng11[] = {10001, 0};
static int ng12[] = {5, 0};
static int ng13[] = {2, 0};
static unsigned int ng14[] = {2U, 0U};
static int ng15[] = {3, 0};
static unsigned int ng16[] = {4U, 0U};
static unsigned int ng17[] = {8U, 0U};
static unsigned int ng18[] = {16U, 0U};
static const char *ng19 = "%b\n";
static const char *ng20 = "Current value of i is %d";



static void Initial_45_0(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);

LAB4:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 7696);
    *((int *)t8) = t7;

LAB5:    t9 = (t0 + 7696);
    if (*((int *)t9) > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);

LAB15:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 4256);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB16;

LAB1:    return;
LAB6:    xsi_set_current_line(48, ng0);
    t10 = (t0 + 4256);
    xsi_process_wait(t10, 10000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(48, ng0);
    t12 = (t0 + 1928);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t11, 0, 8);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t14);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t15) == 0)
        goto LAB9;

LAB11:    t21 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t21) = 1;

LAB12:    t22 = (t11 + 4);
    t23 = (t14 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    *((unsigned int *)t11) = t25;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB14;

LAB13:    t30 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t30 & 1U);
    t31 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t31 & 1U);
    t32 = (t0 + 1928);
    xsi_vlogvar_assign_value(t32, t11, 0, 0, 1);
    t2 = (t0 + 7696);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB5;

LAB9:    *((unsigned int *)t11) = 1;
    goto LAB12;

LAB14:    t26 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t23);
    *((unsigned int *)t11) = (t26 | t27);
    t28 = *((unsigned int *)t22);
    t29 = *((unsigned int *)t23);
    *((unsigned int *)t22) = (t28 | t29);
    goto LAB13;

LAB16:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1928);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    memset(t11, 0, 8);
    t10 = (t9 + 4);
    t4 = *((unsigned int *)t10);
    t5 = (~(t4));
    t6 = *((unsigned int *)t9);
    t16 = (t6 & t5);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t10) == 0)
        goto LAB17;

LAB19:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;

LAB20:    t13 = (t11 + 4);
    t14 = (t9 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (~(t18));
    *((unsigned int *)t11) = t19;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB22;

LAB21:    t27 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t27 & 1U);
    t28 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t28 & 1U);
    t15 = (t0 + 1928);
    xsi_vlogvar_assign_value(t15, t11, 0, 0, 1);
    goto LAB15;

LAB17:    *((unsigned int *)t11) = 1;
    goto LAB20;

LAB22:    t20 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t14);
    *((unsigned int *)t11) = (t20 | t24);
    t25 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t25 | t26);
    goto LAB21;

LAB23:    goto LAB1;

}

static void Initial_54_1(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 3048);
    xsi_vlogfile_readmemb(ng4, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Initial_57_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(57, ng0);

LAB2:    xsi_set_current_line(58, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);
    xsi_set_current_line(59, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 7);
    xsi_set_current_line(60, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);
    xsi_set_current_line(63, ng0);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Initial_66_3(char *t0)
{
    char t4[8];
    char t18[8];
    char t28[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);

LAB4:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 5512);
    *((int *)t2) = 1;
    t3 = (t0 + 5224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(73, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng8, ng9);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng11)));
    t3 = ((char*)((ng12)));
    memset(t4, 0, 8);
    xsi_vlog_signed_multiply(t4, 32, t2, 32, t3, 32);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t0 + 7700);
    *((int *)t10) = t9;

LAB6:    t11 = (t0 + 7700);
    if (*((int *)t11) > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 5000);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB7:    xsi_set_current_line(76, ng0);
    t12 = (t0 + 5528);
    *((int *)t12) = 1;
    t13 = (t0 + 5224);
    *((char **)t13) = t12;
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(76, ng0);

LAB10:    xsi_set_current_line(77, ng0);
    t14 = (t0 + 3528);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng10)));
    memset(t18, 0, 8);
    xsi_vlog_signed_equal(t18, 32, t16, 32, t17, 32);
    t19 = (t18 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t10 = ((char*)((ng13)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t5, 32, t10, 32);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t20 = (t8 & t7);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t10 = ((char*)((ng15)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t5, 32, t10, 32);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t20 = (t8 & t7);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t10 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t5, 32, t10, 32);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t20 = (t8 & t7);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t10 = ((char*)((ng12)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t5, 32, t10, 32);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t20 = (t8 & t7);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB27;

LAB28:
LAB29:
LAB25:
LAB21:
LAB17:
LAB13:    t2 = (t0 + 7700);
    t9 = *((int *)t2);
    *((int *)t2) = (t9 - 1);
    goto LAB6;

LAB11:    xsi_set_current_line(77, ng0);

LAB14:    xsi_set_current_line(78, ng0);
    t25 = (t0 + 3048);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t29 = (t0 + 3048);
    t30 = (t29 + 72U);
    t31 = *((char **)t30);
    t32 = (t0 + 3048);
    t33 = (t32 + 64U);
    t34 = *((char **)t33);
    t35 = (t0 + 3208);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    xsi_vlog_generic_get_array_select_value(t28, 16, t27, t31, t34, 2, 1, t37, 32, 1);
    t38 = (t0 + 2568);
    xsi_vlogvar_assign_value(t38, t28, 0, 0, 16);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t10 = ((char*)((ng10)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t10, 32);
    t11 = (t0 + 3528);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 32);
    goto LAB13;

LAB15:    xsi_set_current_line(82, ng0);

LAB18:    xsi_set_current_line(83, ng0);
    t12 = (t0 + 3048);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 3048);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t19 = (t0 + 3048);
    t25 = (t19 + 64U);
    t26 = *((char **)t25);
    t27 = (t0 + 3208);
    t29 = (t27 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_get_array_select_value(t18, 16, t14, t17, t26, 2, 1, t30, 32, 1);
    t31 = (t0 + 2568);
    xsi_vlogvar_assign_value(t31, t18, 0, 0, 16);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t10 = ((char*)((ng10)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t10, 32);
    t11 = (t0 + 3528);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 32);
    goto LAB17;

LAB19:    xsi_set_current_line(87, ng0);

LAB22:    xsi_set_current_line(88, ng0);
    t12 = (t0 + 3048);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 3048);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t19 = (t0 + 3048);
    t25 = (t19 + 64U);
    t26 = *((char **)t25);
    t27 = (t0 + 3208);
    t29 = (t27 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_get_array_select_value(t18, 16, t14, t17, t26, 2, 1, t30, 32, 1);
    t31 = (t0 + 2568);
    xsi_vlogvar_assign_value(t31, t18, 0, 0, 16);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t10 = ((char*)((ng10)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t10, 32);
    t11 = (t0 + 3528);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 32);
    goto LAB21;

LAB23:    xsi_set_current_line(92, ng0);

LAB26:    xsi_set_current_line(93, ng0);
    t12 = (t0 + 3048);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 3048);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t19 = (t0 + 3048);
    t25 = (t19 + 64U);
    t26 = *((char **)t25);
    t27 = (t0 + 3208);
    t29 = (t27 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_get_array_select_value(t18, 16, t14, t17, t26, 2, 1, t30, 32, 1);
    t31 = (t0 + 2568);
    xsi_vlogvar_assign_value(t31, t18, 0, 0, 16);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t10 = ((char*)((ng10)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t10, 32);
    t11 = (t0 + 3528);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 32);
    goto LAB25;

LAB27:    xsi_set_current_line(97, ng0);

LAB30:    xsi_set_current_line(98, ng0);
    t12 = (t0 + 3048);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 3048);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t19 = (t0 + 3048);
    t25 = (t19 + 64U);
    t26 = *((char **)t25);
    t27 = (t0 + 3208);
    t29 = (t27 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_get_array_select_value(t18, 16, t14, t17, t26, 2, 1, t30, 32, 1);
    t31 = (t0 + 2568);
    xsi_vlogvar_assign_value(t31, t18, 0, 0, 16);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t10 = (t0 + 1368U);
    t11 = *((char **)t10);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng19, 2, t0, (char)118, t11, 16);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng20, 2, t0, (char)119, t5, 32);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t10 = ((char*)((ng10)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t10, 32);
    t11 = (t0 + 3208);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 32);
    goto LAB29;

LAB31:    xsi_set_current_line(111, ng0);
    t3 = (t0 + 3368);
    t5 = (t3 + 56U);
    t10 = *((char **)t5);
    xsi_vlogfile_fclose(*((unsigned int *)t10));
    xsi_set_current_line(112, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000003376268531_2261778307_init()
{
	static char *pe[] = {(void *)Initial_45_0,(void *)Initial_54_1,(void *)Initial_57_2,(void *)Initial_66_3};
	xsi_register_didat("work_m_00000000003376268531_2261778307", "isim/CUST_HP_filter_tb_isim_beh.exe.sim/work/m_00000000003376268531_2261778307.didat");
	xsi_register_executes(pe);
}
