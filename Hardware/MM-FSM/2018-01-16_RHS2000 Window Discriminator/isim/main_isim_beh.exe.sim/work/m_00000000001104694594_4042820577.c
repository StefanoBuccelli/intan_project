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
static const char *ng0 = "C:/Users/Max Murphy/Desktop/Preliminary intan/2018-01-16_RHS2000 Window Discriminator/RHS2000InterfaceXEM6010_release_170328/ADC_input.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};
static int ng5[] = {15, 0};
static int ng6[] = {2, 0};
static int ng7[] = {14, 0};
static int ng8[] = {3, 0};
static int ng9[] = {13, 0};
static int ng10[] = {4, 0};
static int ng11[] = {12, 0};
static int ng12[] = {5, 0};
static int ng13[] = {11, 0};
static int ng14[] = {6, 0};
static int ng15[] = {10, 0};
static int ng16[] = {7, 0};
static int ng17[] = {9, 0};
static int ng18[] = {8, 0};
static int ng19[] = {16, 0};



static void Always_39_0(char *t0)
{
    char t15[8];
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
    int t14;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 4056);
    *((int *)t2) = 1;
    t3 = (t0 + 3768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1456U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(43, ng0);

LAB10:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);

LAB11:    t2 = (t0 + 472);
    t4 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t3, 32, t4, 32);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = (t0 + 608);
    t4 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t3, 32, t4, 32);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = (t0 + 744);
    t4 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t3, 32, t4, 32);
    if (t13 == 1)
        goto LAB16;

LAB17:
LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(40, ng0);

LAB9:    xsi_set_current_line(41, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(46, ng0);

LAB19:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB18;

LAB14:    xsi_set_current_line(51, ng0);

LAB20:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1936U);
    t5 = *((char **)t2);

LAB21:    t2 = ((char*)((ng3)));
    t14 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t14 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng14)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng16)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng18)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng17)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng19)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB54;

LAB55:
LAB57:
LAB56:    xsi_set_current_line(155, ng0);

LAB108:    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);

LAB58:    goto LAB18;

LAB16:    xsi_set_current_line(163, ng0);

LAB109:    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng2)));
    t11 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    goto LAB18;

LAB22:    xsi_set_current_line(54, ng0);

LAB59:    xsi_set_current_line(55, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB58;

LAB24:    xsi_set_current_line(59, ng0);

LAB60:    xsi_set_current_line(60, ng0);
    t4 = ((char*)((ng2)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2096U);
    t4 = *((char **)t2);
    t2 = (t0 + 2816);
    t11 = (t0 + 2816);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t6 = *((unsigned int *)t18);
    t13 = (!(t6));
    if (t13 == 1)
        goto LAB61;

LAB62:    goto LAB58;

LAB26:    xsi_set_current_line(65, ng0);

LAB63:    xsi_set_current_line(66, ng0);
    t4 = ((char*)((ng2)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2096U);
    t4 = *((char **)t2);
    t2 = (t0 + 2816);
    t11 = (t0 + 2816);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t6 = *((unsigned int *)t18);
    t13 = (!(t6));
    if (t13 == 1)
        goto LAB64;

LAB65:    goto LAB58;

LAB28:    xsi_set_current_line(71, ng0);

LAB66:    xsi_set_current_line(72, ng0);
    t4 = ((char*)((ng2)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2096U);
    t4 = *((char **)t2);
    t2 = (t0 + 2816);
    t11 = (t0 + 2816);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t6 = *((unsigned int *)t18);
    t13 = (!(t6));
    if (t13 == 1)
        goto LAB67;

LAB68:    goto LAB58;

LAB30:    xsi_set_current_line(77, ng0);

LAB69:    xsi_set_current_line(78, ng0);
    t4 = ((char*)((ng2)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2096U);
    t4 = *((char **)t2);
    t2 = (t0 + 2816);
    t11 = (t0 + 2816);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t6 = *((unsigned int *)t18);
    t13 = (!(t6));
    if (t13 == 1)
        goto LAB70;

LAB71:    goto LAB58;

LAB32:    xsi_set_current_line(83, ng0);

LAB72:    xsi_set_current_line(84, ng0);
    t4 = ((char*)((ng2)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2096U);
    t4 = *((char **)t2);
    t2 = (t0 + 2816);
    t11 = (t0 + 2816);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng13)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t6 = *((unsigned int *)t18);
    t13 = (!(t6));
    if (t13 == 1)
        goto LAB73;

LAB74:    goto LAB58;

LAB34:    xsi_set_current_line(89, ng0);

LAB75:    xsi_set_current_line(90, ng0);
    t4 = ((char*)((ng2)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2096U);
    t4 = *((char **)t2);
    t2 = (t0 + 2816);
    t11 = (t0 + 2816);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t6 = *((unsigned int *)t18);
    t13 = (!(t6));
    if (t13 == 1)
        goto LAB76;

LAB77:    goto LAB58;

LAB36:    xsi_set_current_line(95, ng0);

LAB78:    xsi_set_current_line(96, ng0);
    t4 = ((char*)((ng2)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2096U);
    t4 = *((char **)t2);
    t2 = (t0 + 2816);
    t11 = (t0 + 2816);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng17)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t6 = *((unsigned int *)t18);
    t13 = (!(t6));
    if (t13 == 1)
        goto LAB79;

LAB80:    goto LAB58;

LAB38:    xsi_set_current_line(101, ng0);

LAB81:    xsi_set_current_line(102, ng0);
    t4 = ((char*)((ng2)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2096U);
    t4 = *((char **)t2);
    t2 = (t0 + 2816);
    t11 = (t0 + 2816);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng18)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t6 = *((unsigned int *)t18);
    t13 = (!(t6));
    if (t13 == 1)
        goto LAB82;

LAB83:    goto LAB58;

LAB40:    xsi_set_current_line(107, ng0);

LAB84:    xsi_set_current_line(108, ng0);
    t4 = ((char*)((ng2)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2096U);
    t4 = *((char **)t2);
    t2 = (t0 + 2816);
    t11 = (t0 + 2816);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng16)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t6 = *((unsigned int *)t18);
    t13 = (!(t6));
    if (t13 == 1)
        goto LAB85;

LAB86:    goto LAB58;

LAB42:    xsi_set_current_line(113, ng0);

LAB87:    xsi_set_current_line(114, ng0);
    t4 = ((char*)((ng2)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 2096U);
    t4 = *((char **)t2);
    t2 = (t0 + 2816);
    t11 = (t0 + 2816);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng14)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t6 = *((unsigned int *)t18);
    t13 = (!(t6));
    if (t13 == 1)
        goto LAB88;

LAB89:    goto LAB58;

LAB44:    xsi_set_current_line(119, ng0);

LAB90:    xsi_set_current_line(120, ng0);
    t4 = ((char*)((ng2)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2096U);
    t4 = *((char **)t2);
    t2 = (t0 + 2816);
    t11 = (t0 + 2816);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t6 = *((unsigned int *)t18);
    t13 = (!(t6));
    if (t13 == 1)
        goto LAB91;

LAB92:    goto LAB58;

LAB46:    xsi_set_current_line(125, ng0);

LAB93:    xsi_set_current_line(126, ng0);
    t4 = ((char*)((ng2)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2096U);
    t4 = *((char **)t2);
    t2 = (t0 + 2816);
    t11 = (t0 + 2816);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t6 = *((unsigned int *)t18);
    t13 = (!(t6));
    if (t13 == 1)
        goto LAB94;

LAB95:    goto LAB58;

LAB48:    xsi_set_current_line(131, ng0);

LAB96:    xsi_set_current_line(132, ng0);
    t4 = ((char*)((ng2)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 2096U);
    t4 = *((char **)t2);
    t2 = (t0 + 2816);
    t11 = (t0 + 2816);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t6 = *((unsigned int *)t18);
    t13 = (!(t6));
    if (t13 == 1)
        goto LAB97;

LAB98:    goto LAB58;

LAB50:    xsi_set_current_line(137, ng0);

LAB99:    xsi_set_current_line(138, ng0);
    t4 = ((char*)((ng2)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 2096U);
    t4 = *((char **)t2);
    t2 = (t0 + 2816);
    t11 = (t0 + 2816);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t6 = *((unsigned int *)t18);
    t13 = (!(t6));
    if (t13 == 1)
        goto LAB100;

LAB101:    goto LAB58;

LAB52:    xsi_set_current_line(143, ng0);

LAB102:    xsi_set_current_line(144, ng0);
    t4 = ((char*)((ng2)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 2096U);
    t4 = *((char **)t2);
    t2 = (t0 + 2816);
    t11 = (t0 + 2816);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t6 = *((unsigned int *)t18);
    t13 = (!(t6));
    if (t13 == 1)
        goto LAB103;

LAB104:    goto LAB58;

LAB54:    xsi_set_current_line(149, ng0);

LAB105:    xsi_set_current_line(150, ng0);
    t4 = ((char*)((ng2)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 2096U);
    t4 = *((char **)t2);
    t2 = (t0 + 2816);
    t11 = (t0 + 2816);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t6 = *((unsigned int *)t18);
    t13 = (!(t6));
    if (t13 == 1)
        goto LAB106;

LAB107:    goto LAB58;

LAB61:    xsi_vlogvar_wait_assign_value(t2, t4, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB62;

LAB64:    xsi_vlogvar_wait_assign_value(t2, t4, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB65;

LAB67:    xsi_vlogvar_wait_assign_value(t2, t4, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB68;

LAB70:    xsi_vlogvar_wait_assign_value(t2, t4, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB71;

LAB73:    xsi_vlogvar_wait_assign_value(t2, t4, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB74;

LAB76:    xsi_vlogvar_wait_assign_value(t2, t4, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB77;

LAB79:    xsi_vlogvar_wait_assign_value(t2, t4, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB80;

LAB82:    xsi_vlogvar_wait_assign_value(t2, t4, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB83;

LAB85:    xsi_vlogvar_wait_assign_value(t2, t4, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB86;

LAB88:    xsi_vlogvar_wait_assign_value(t2, t4, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB89;

LAB91:    xsi_vlogvar_wait_assign_value(t2, t4, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB92;

LAB94:    xsi_vlogvar_wait_assign_value(t2, t4, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB95;

LAB97:    xsi_vlogvar_wait_assign_value(t2, t4, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB98;

LAB100:    xsi_vlogvar_wait_assign_value(t2, t4, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB101;

LAB103:    xsi_vlogvar_wait_assign_value(t2, t4, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB104;

LAB106:    xsi_vlogvar_wait_assign_value(t2, t4, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB107;

}


extern void work_m_00000000001104694594_4042820577_init()
{
	static char *pe[] = {(void *)Always_39_0};
	xsi_register_didat("work_m_00000000001104694594_4042820577", "isim/main_isim_beh.exe.sim/work/m_00000000001104694594_4042820577.didat");
	xsi_register_executes(pe);
}
