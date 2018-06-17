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
static const char *ng0 = "C:/Users/Max Murphy/Desktop/Preliminary intan/RHD2000InterfaceXEM6010/ADC_input.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {2, 0};
static int ng6[] = {3, 0};
static int ng7[] = {4, 0};
static int ng8[] = {5, 0};
static int ng9[] = {6, 0};
static int ng10[] = {7, 0};
static int ng11[] = {8, 0};
static int ng12[] = {9, 0};
static int ng13[] = {10, 0};
static int ng14[] = {11, 0};
static int ng15[] = {12, 0};
static int ng16[] = {13, 0};
static int ng17[] = {14, 0};
static int ng18[] = {15, 0};
static int ng19[] = {16, 0};
static int ng20[] = {17, 0};
static int ng21[] = {18, 0};
static int ng22[] = {19, 0};
static int ng23[] = {20, 0};
static int ng24[] = {21, 0};
static int ng25[] = {22, 0};
static int ng26[] = {23, 0};
static int ng27[] = {24, 0};



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
    char *t19;
    char *t20;

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
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(46, ng0);

LAB19:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB18;

LAB14:    xsi_set_current_line(51, ng0);

LAB20:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1936U);
    t5 = *((char **)t2);

LAB21:    t2 = ((char*)((ng2)));
    t14 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t14 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng14)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng16)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng17)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng18)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng19)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng20)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng21)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng22)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB60;

LAB61:    t2 = ((char*)((ng23)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB62;

LAB63:    t2 = ((char*)((ng24)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB64;

LAB65:    t2 = ((char*)((ng25)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB66;

LAB67:    t2 = ((char*)((ng26)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB68;

LAB69:    t2 = ((char*)((ng27)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 32);
    if (t13 == 1)
        goto LAB70;

LAB71:
LAB73:
LAB72:    xsi_set_current_line(179, ng0);

LAB100:    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);

LAB74:    goto LAB18;

LAB16:    xsi_set_current_line(187, ng0);

LAB101:    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng1)));
    t11 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t11, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 1936U);
    t4 = *((char **)t2);

LAB102:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 32);
    if (t13 == 1)
        goto LAB103;

LAB104:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 32);
    if (t13 == 1)
        goto LAB105;

LAB106:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 32);
    if (t13 == 1)
        goto LAB107;

LAB108:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 32);
    if (t13 == 1)
        goto LAB109;

LAB110:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 32);
    if (t13 == 1)
        goto LAB111;

LAB112:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 32);
    if (t13 == 1)
        goto LAB113;

LAB114:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 32);
    if (t13 == 1)
        goto LAB115;

LAB116:    t2 = ((char*)((ng14)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 32);
    if (t13 == 1)
        goto LAB117;

LAB118:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 32);
    if (t13 == 1)
        goto LAB119;

LAB120:    t2 = ((char*)((ng16)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 32);
    if (t13 == 1)
        goto LAB121;

LAB122:    t2 = ((char*)((ng17)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 32);
    if (t13 == 1)
        goto LAB123;

LAB124:    t2 = ((char*)((ng18)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 32);
    if (t13 == 1)
        goto LAB125;

LAB126:    t2 = ((char*)((ng19)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 32);
    if (t13 == 1)
        goto LAB127;

LAB128:    t2 = ((char*)((ng20)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 32);
    if (t13 == 1)
        goto LAB129;

LAB130:    t2 = ((char*)((ng21)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 32);
    if (t13 == 1)
        goto LAB131;

LAB132:    t2 = ((char*)((ng22)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 32);
    if (t13 == 1)
        goto LAB133;

LAB134:
LAB135:    goto LAB18;

LAB22:    xsi_set_current_line(54, ng0);

LAB75:    xsi_set_current_line(55, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB74;

LAB24:    xsi_set_current_line(59, ng0);

LAB76:    xsi_set_current_line(60, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB74;

LAB26:    xsi_set_current_line(64, ng0);

LAB77:    xsi_set_current_line(65, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB74;

LAB28:    xsi_set_current_line(69, ng0);

LAB78:    xsi_set_current_line(70, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB74;

LAB30:    xsi_set_current_line(74, ng0);

LAB79:    xsi_set_current_line(75, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB74;

LAB32:    xsi_set_current_line(79, ng0);

LAB80:    xsi_set_current_line(80, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB74;

LAB34:    xsi_set_current_line(84, ng0);

LAB81:    xsi_set_current_line(85, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB74;

LAB36:    xsi_set_current_line(89, ng0);

LAB82:    xsi_set_current_line(90, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB74;

LAB38:    xsi_set_current_line(94, ng0);

LAB83:    xsi_set_current_line(95, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB74;

LAB40:    xsi_set_current_line(99, ng0);

LAB84:    xsi_set_current_line(100, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB74;

LAB42:    xsi_set_current_line(104, ng0);

LAB85:    xsi_set_current_line(105, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB74;

LAB44:    xsi_set_current_line(109, ng0);

LAB86:    xsi_set_current_line(110, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB74;

LAB46:    xsi_set_current_line(114, ng0);

LAB87:    xsi_set_current_line(115, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB74;

LAB48:    xsi_set_current_line(119, ng0);

LAB88:    xsi_set_current_line(120, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB74;

LAB50:    xsi_set_current_line(124, ng0);

LAB89:    xsi_set_current_line(125, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB74;

LAB52:    xsi_set_current_line(129, ng0);

LAB90:    xsi_set_current_line(130, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB74;

LAB54:    xsi_set_current_line(134, ng0);

LAB91:    xsi_set_current_line(135, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB74;

LAB56:    xsi_set_current_line(139, ng0);

LAB92:    xsi_set_current_line(140, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB74;

LAB58:    xsi_set_current_line(144, ng0);

LAB93:    xsi_set_current_line(145, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB74;

LAB60:    xsi_set_current_line(149, ng0);

LAB94:    xsi_set_current_line(150, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB74;

LAB62:    xsi_set_current_line(154, ng0);

LAB95:    xsi_set_current_line(155, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB74;

LAB64:    xsi_set_current_line(159, ng0);

LAB96:    xsi_set_current_line(160, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB74;

LAB66:    xsi_set_current_line(164, ng0);

LAB97:    xsi_set_current_line(165, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB74;

LAB68:    xsi_set_current_line(169, ng0);

LAB98:    xsi_set_current_line(170, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB74;

LAB70:    xsi_set_current_line(174, ng0);

LAB99:    xsi_set_current_line(175, ng0);
    t4 = ((char*)((ng3)));
    t11 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB74;

LAB103:    xsi_set_current_line(191, ng0);

LAB136:    xsi_set_current_line(192, ng0);
    t11 = (t0 + 2096U);
    t12 = *((char **)t11);
    t11 = (t0 + 2816);
    t16 = (t0 + 2816);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng18)));
    xsi_vlog_generic_convert_bit_index(t15, t18, 2, t19, 32, 1);
    t20 = (t15 + 4);
    t6 = *((unsigned int *)t20);
    t14 = (!(t6));
    if (t14 == 1)
        goto LAB137;

LAB138:    goto LAB135;

LAB105:    xsi_set_current_line(195, ng0);

LAB139:    xsi_set_current_line(196, ng0);
    t11 = (t0 + 2096U);
    t12 = *((char **)t11);
    t11 = (t0 + 2816);
    t16 = (t0 + 2816);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng17)));
    xsi_vlog_generic_convert_bit_index(t15, t18, 2, t19, 32, 1);
    t20 = (t15 + 4);
    t6 = *((unsigned int *)t20);
    t14 = (!(t6));
    if (t14 == 1)
        goto LAB140;

LAB141:    goto LAB135;

LAB107:    xsi_set_current_line(199, ng0);

LAB142:    xsi_set_current_line(200, ng0);
    t11 = (t0 + 2096U);
    t12 = *((char **)t11);
    t11 = (t0 + 2816);
    t16 = (t0 + 2816);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng16)));
    xsi_vlog_generic_convert_bit_index(t15, t18, 2, t19, 32, 1);
    t20 = (t15 + 4);
    t6 = *((unsigned int *)t20);
    t14 = (!(t6));
    if (t14 == 1)
        goto LAB143;

LAB144:    goto LAB135;

LAB109:    xsi_set_current_line(203, ng0);

LAB145:    xsi_set_current_line(204, ng0);
    t11 = (t0 + 2096U);
    t12 = *((char **)t11);
    t11 = (t0 + 2816);
    t16 = (t0 + 2816);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t15, t18, 2, t19, 32, 1);
    t20 = (t15 + 4);
    t6 = *((unsigned int *)t20);
    t14 = (!(t6));
    if (t14 == 1)
        goto LAB146;

LAB147:    goto LAB135;

LAB111:    xsi_set_current_line(207, ng0);

LAB148:    xsi_set_current_line(208, ng0);
    t11 = (t0 + 2096U);
    t12 = *((char **)t11);
    t11 = (t0 + 2816);
    t16 = (t0 + 2816);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng14)));
    xsi_vlog_generic_convert_bit_index(t15, t18, 2, t19, 32, 1);
    t20 = (t15 + 4);
    t6 = *((unsigned int *)t20);
    t14 = (!(t6));
    if (t14 == 1)
        goto LAB149;

LAB150:    goto LAB135;

LAB113:    xsi_set_current_line(211, ng0);

LAB151:    xsi_set_current_line(212, ng0);
    t11 = (t0 + 2096U);
    t12 = *((char **)t11);
    t11 = (t0 + 2816);
    t16 = (t0 + 2816);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng13)));
    xsi_vlog_generic_convert_bit_index(t15, t18, 2, t19, 32, 1);
    t20 = (t15 + 4);
    t6 = *((unsigned int *)t20);
    t14 = (!(t6));
    if (t14 == 1)
        goto LAB152;

LAB153:    goto LAB135;

LAB115:    xsi_set_current_line(215, ng0);

LAB154:    xsi_set_current_line(216, ng0);
    t11 = (t0 + 2096U);
    t12 = *((char **)t11);
    t11 = (t0 + 2816);
    t16 = (t0 + 2816);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t15, t18, 2, t19, 32, 1);
    t20 = (t15 + 4);
    t6 = *((unsigned int *)t20);
    t14 = (!(t6));
    if (t14 == 1)
        goto LAB155;

LAB156:    goto LAB135;

LAB117:    xsi_set_current_line(219, ng0);

LAB157:    xsi_set_current_line(220, ng0);
    t11 = (t0 + 2096U);
    t12 = *((char **)t11);
    t11 = (t0 + 2816);
    t16 = (t0 + 2816);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t15, t18, 2, t19, 32, 1);
    t20 = (t15 + 4);
    t6 = *((unsigned int *)t20);
    t14 = (!(t6));
    if (t14 == 1)
        goto LAB158;

LAB159:    goto LAB135;

LAB119:    xsi_set_current_line(223, ng0);

LAB160:    xsi_set_current_line(224, ng0);
    t11 = (t0 + 2096U);
    t12 = *((char **)t11);
    t11 = (t0 + 2816);
    t16 = (t0 + 2816);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t15, t18, 2, t19, 32, 1);
    t20 = (t15 + 4);
    t6 = *((unsigned int *)t20);
    t14 = (!(t6));
    if (t14 == 1)
        goto LAB161;

LAB162:    goto LAB135;

LAB121:    xsi_set_current_line(227, ng0);

LAB163:    xsi_set_current_line(228, ng0);
    t11 = (t0 + 2096U);
    t12 = *((char **)t11);
    t11 = (t0 + 2816);
    t16 = (t0 + 2816);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t15, t18, 2, t19, 32, 1);
    t20 = (t15 + 4);
    t6 = *((unsigned int *)t20);
    t14 = (!(t6));
    if (t14 == 1)
        goto LAB164;

LAB165:    goto LAB135;

LAB123:    xsi_set_current_line(231, ng0);

LAB166:    xsi_set_current_line(232, ng0);
    t11 = (t0 + 2096U);
    t12 = *((char **)t11);
    t11 = (t0 + 2816);
    t16 = (t0 + 2816);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t15, t18, 2, t19, 32, 1);
    t20 = (t15 + 4);
    t6 = *((unsigned int *)t20);
    t14 = (!(t6));
    if (t14 == 1)
        goto LAB167;

LAB168:    goto LAB135;

LAB125:    xsi_set_current_line(235, ng0);

LAB169:    xsi_set_current_line(236, ng0);
    t11 = (t0 + 2096U);
    t12 = *((char **)t11);
    t11 = (t0 + 2816);
    t16 = (t0 + 2816);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t15, t18, 2, t19, 32, 1);
    t20 = (t15 + 4);
    t6 = *((unsigned int *)t20);
    t14 = (!(t6));
    if (t14 == 1)
        goto LAB170;

LAB171:    goto LAB135;

LAB127:    xsi_set_current_line(239, ng0);

LAB172:    xsi_set_current_line(240, ng0);
    t11 = (t0 + 2096U);
    t12 = *((char **)t11);
    t11 = (t0 + 2816);
    t16 = (t0 + 2816);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t15, t18, 2, t19, 32, 1);
    t20 = (t15 + 4);
    t6 = *((unsigned int *)t20);
    t14 = (!(t6));
    if (t14 == 1)
        goto LAB173;

LAB174:    goto LAB135;

LAB129:    xsi_set_current_line(243, ng0);

LAB175:    xsi_set_current_line(244, ng0);
    t11 = (t0 + 2096U);
    t12 = *((char **)t11);
    t11 = (t0 + 2816);
    t16 = (t0 + 2816);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t15, t18, 2, t19, 32, 1);
    t20 = (t15 + 4);
    t6 = *((unsigned int *)t20);
    t14 = (!(t6));
    if (t14 == 1)
        goto LAB176;

LAB177:    goto LAB135;

LAB131:    xsi_set_current_line(247, ng0);

LAB178:    xsi_set_current_line(248, ng0);
    t11 = (t0 + 2096U);
    t12 = *((char **)t11);
    t11 = (t0 + 2816);
    t16 = (t0 + 2816);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t15, t18, 2, t19, 32, 1);
    t20 = (t15 + 4);
    t6 = *((unsigned int *)t20);
    t14 = (!(t6));
    if (t14 == 1)
        goto LAB179;

LAB180:    goto LAB135;

LAB133:    xsi_set_current_line(251, ng0);

LAB181:    xsi_set_current_line(252, ng0);
    t11 = (t0 + 2096U);
    t12 = *((char **)t11);
    t11 = (t0 + 2816);
    t16 = (t0 + 2816);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t15, t18, 2, t19, 32, 1);
    t20 = (t15 + 4);
    t6 = *((unsigned int *)t20);
    t14 = (!(t6));
    if (t14 == 1)
        goto LAB182;

LAB183:    goto LAB135;

LAB137:    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB138;

LAB140:    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB141;

LAB143:    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB144;

LAB146:    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB147;

LAB149:    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB150;

LAB152:    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB153;

LAB155:    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB156;

LAB158:    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB159;

LAB161:    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB162;

LAB164:    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB165;

LAB167:    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB168;

LAB170:    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB171;

LAB173:    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB174;

LAB176:    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB177;

LAB179:    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB180;

LAB182:    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB183;

}


extern void work_m_00000000003499738201_2688126872_init()
{
	static char *pe[] = {(void *)Always_39_0};
	xsi_register_didat("work_m_00000000003499738201_2688126872", "isim/main_isim_beh.exe.sim/work/m_00000000003499738201_2688126872.didat");
	xsi_register_executes(pe);
}
