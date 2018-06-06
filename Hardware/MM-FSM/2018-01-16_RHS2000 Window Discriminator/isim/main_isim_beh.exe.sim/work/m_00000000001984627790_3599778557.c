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
static const char *ng0 = "C:/Users/Max Murphy/Desktop/Preliminary intan/2018-01-16_RHS2000 Window Discriminator/RHS2000InterfaceXEM6010_release_170328/ddr2_state_machine.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {2, 0};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {4, 0};
static int ng7[] = {511, 0};
static int ng8[] = {31, 0};
static int ng9[] = {63, 0};
static int ng10[] = {32, 0};



static void Cont_79_0(char *t0)
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

LAB0:    t1 = (t0 + 8960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_minus(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 10648);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 63U;
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
    xsi_driver_vfirst_trans(t5, 0, 5);

LAB1:    return;
}

static void Cont_80_1(char *t0)
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

LAB0:    t1 = (t0 + 9208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 10712);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 15U;
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
    xsi_driver_vfirst_trans(t3, 0, 3);

LAB1:    return;
}

static void Always_82_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 9456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 10520);
    *((int *)t2) = 1;
    t3 = (t0 + 9488);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 3000U);
    t5 = *((char **)t4);
    t4 = (t0 + 7560);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    goto LAB2;

}

static void Always_83_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 9704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 10536);
    *((int *)t2) = 1;
    t3 = (t0 + 9736);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(83, ng0);
    t4 = (t0 + 3160U);
    t5 = *((char **)t4);
    t4 = (t0 + 7720);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    goto LAB2;

}

static void Always_84_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 9952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 10552);
    *((int *)t2) = 1;
    t3 = (t0 + 9984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(84, ng0);
    t4 = (t0 + 2840U);
    t5 = *((char **)t4);
    t4 = (t0 + 7880);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    goto LAB2;

}

static void Always_99_5(char *t0)
{
    char t16[8];
    char t24[8];
    char t38[8];
    char t54[8];
    char t62[8];
    char t93[8];
    char t108[8];
    char t109[8];
    char t113[8];
    char t121[8];
    char t161[8];
    char t162[8];
    char t173[8];
    char t189[8];
    char t197[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    int t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    char *t107;
    char *t110;
    char *t111;
    char *t112;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    int t145;
    int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;
    char *t160;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    char *t167;
    char *t168;
    char *t169;
    char *t170;
    char *t171;
    char *t172;
    char *t174;
    char *t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    char *t188;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    char *t196;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    char *t201;
    char *t202;
    char *t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    char *t211;
    char *t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    int t221;
    int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    char *t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    char *t235;
    char *t236;
    int t237;
    int t238;
    int t239;

LAB0:    t1 = (t0 + 10200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 10568);
    *((int *)t2) = 1;
    t3 = (t0 + 10232);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(99, ng0);

LAB5:    xsi_set_current_line(100, ng0);
    t4 = (t0 + 7880);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(107, ng0);

LAB10:    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6760);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6120);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 8040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = (t0 + 608);
    t6 = *((char **)t5);
    t15 = xsi_vlog_signed_case_compare(t4, 32, t6, 32);
    if (t15 == 1)
        goto LAB12;

LAB13:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t15 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t15 == 1)
        goto LAB14;

LAB15:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t15 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t15 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t15 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t15 == 1)
        goto LAB18;

LAB19:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t15 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t15 == 1)
        goto LAB20;

LAB21:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t15 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t15 == 1)
        goto LAB22;

LAB23:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t15 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t15 == 1)
        goto LAB24;

LAB25:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t15 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t15 == 1)
        goto LAB26;

LAB27:    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t15 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t15 == 1)
        goto LAB28;

LAB29:    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t15 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t15 == 1)
        goto LAB30;

LAB31:    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t15 = xsi_vlog_signed_case_compare(t4, 32, t3, 32);
    if (t15 == 1)
        goto LAB32;

LAB33:
LAB34:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(100, ng0);

LAB9:    xsi_set_current_line(101, ng0);
    t13 = (t0 + 608);
    t14 = *((char **)t13);
    t13 = (t0 + 8040);
    xsi_vlogvar_wait_assign_value(t13, t14, 0, 0, 32, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7080);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 30, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 30, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6440);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6600);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 30, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(116, ng0);

LAB35:    xsi_set_current_line(117, ng0);
    t5 = (t0 + 472);
    t7 = *((char **)t5);
    t5 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t5, t7, 0, 0, 6, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 3320U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t16, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t17 = (t11 ^ t12);
    t18 = (t10 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t6);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB39;

LAB36:    if (t21 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t16) = 1;

LAB39:    memset(t24, 0, 8);
    t13 = (t16 + 4);
    t25 = *((unsigned int *)t13);
    t26 = (~(t25));
    t27 = *((unsigned int *)t16);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t13) != 0)
        goto LAB42;

LAB43:    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB44;

LAB45:    memcpy(t62, t24, 8);

LAB46:    memset(t93, 0, 8);
    t94 = (t62 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t62);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t94) != 0)
        goto LAB60;

LAB61:    t101 = (t93 + 4);
    t102 = *((unsigned int *)t93);
    t103 = *((unsigned int *)t101);
    t104 = (t102 || t103);
    if (t104 > 0)
        goto LAB62;

LAB63:    memcpy(t121, t93, 8);

LAB64:    t153 = (t121 + 4);
    t154 = *((unsigned int *)t153);
    t155 = (~(t154));
    t156 = *((unsigned int *)t121);
    t157 = (t156 & t155);
    t158 = (t157 != 0);
    if (t158 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(123, ng0);

LAB81:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 8040);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB79:    goto LAB34;

LAB14:    xsi_set_current_line(128, ng0);

LAB82:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 1016);
    t5 = *((char **)t2);
    t2 = (t0 + 8040);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB34;

LAB16:    xsi_set_current_line(133, ng0);

LAB83:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 3800U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t16, 0, 8);
    t6 = (t5 + 4);
    t7 = (t2 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t17 = (t11 ^ t12);
    t18 = (t10 | t17);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB87;

LAB84:    if (t21 != 0)
        goto LAB86;

LAB85:    *((unsigned int *)t16) = 1;

LAB87:    t14 = (t16 + 4);
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t16);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB88;

LAB89:
LAB90:    goto LAB34;

LAB18:    xsi_set_current_line(142, ng0);

LAB92:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 3480U);
    t5 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t16 + 4);
    t6 = (t5 + 8);
    t7 = (t5 + 12);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t16) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t12 & 4294967295U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 4294967295U);
    t13 = (t0 + 6920);
    xsi_vlogvar_wait_assign_value(t13, t16, 0, 0, 32, 0LL);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6760);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 7400);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t16, 0, 8);
    t7 = (t5 + 4);
    t13 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t13);
    t17 = (t11 ^ t12);
    t18 = (t10 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t13);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB96;

LAB93:    if (t21 != 0)
        goto LAB95;

LAB94:    *((unsigned int *)t16) = 1;

LAB96:    t30 = (t16 + 4);
    t25 = *((unsigned int *)t30);
    t26 = (~(t25));
    t27 = *((unsigned int *)t16);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB97;

LAB98:    xsi_set_current_line(147, ng0);

LAB101:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 8040);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB99:    goto LAB34;

LAB20:    xsi_set_current_line(152, ng0);

LAB102:    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 7080);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 6600);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 30, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 7080);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    t7 = (t0 + 472);
    t13 = *((char **)t7);
    memset(t16, 0, 8);
    xsi_vlog_unsigned_multiply(t16, 32, t6, 32, t13, 32);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_add(t24, 32, t5, 30, t16, 32);
    t7 = (t0 + 7080);
    xsi_vlogvar_wait_assign_value(t7, t24, 0, 0, 30, 0LL);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6440);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 8040);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB34;

LAB22:    xsi_set_current_line(160, ng0);

LAB103:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 472);
    t5 = *((char **)t2);
    t2 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t2, t5, 0, 0, 6, 0LL);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 3320U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t16, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t17 = (t11 ^ t12);
    t18 = (t10 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t6);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB107;

LAB104:    if (t21 != 0)
        goto LAB106;

LAB105:    *((unsigned int *)t16) = 1;

LAB107:    memset(t24, 0, 8);
    t13 = (t16 + 4);
    t25 = *((unsigned int *)t13);
    t26 = (~(t25));
    t27 = *((unsigned int *)t16);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB108;

LAB109:    if (*((unsigned int *)t13) != 0)
        goto LAB110;

LAB111:    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB112;

LAB113:    memcpy(t62, t24, 8);

LAB114:    memset(t93, 0, 8);
    t94 = (t62 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t62);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB126;

LAB127:    if (*((unsigned int *)t94) != 0)
        goto LAB128;

LAB129:    t101 = (t93 + 4);
    t102 = *((unsigned int *)t93);
    t103 = *((unsigned int *)t101);
    t104 = (t102 || t103);
    if (t104 > 0)
        goto LAB130;

LAB131:    memcpy(t161, t93, 8);

LAB132:    memset(t162, 0, 8);
    t159 = (t161 + 4);
    t154 = *((unsigned int *)t159);
    t155 = (~(t154));
    t156 = *((unsigned int *)t161);
    t157 = (t156 & t155);
    t158 = (t157 & 1U);
    if (t158 != 0)
        goto LAB145;

LAB146:    if (*((unsigned int *)t159) != 0)
        goto LAB147;

LAB148:    t163 = (t162 + 4);
    t164 = *((unsigned int *)t162);
    t165 = *((unsigned int *)t163);
    t166 = (t164 || t165);
    if (t166 > 0)
        goto LAB149;

LAB150:    memcpy(t197, t162, 8);

LAB151:    t229 = (t197 + 4);
    t230 = *((unsigned int *)t229);
    t231 = (~(t230));
    t232 = *((unsigned int *)t197);
    t233 = (t232 & t231);
    t234 = (t233 != 0);
    if (t234 > 0)
        goto LAB163;

LAB164:    xsi_set_current_line(168, ng0);

LAB167:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t0 + 8040);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB165:    goto LAB34;

LAB24:    xsi_set_current_line(173, ng0);

LAB168:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 7240);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 6600);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 30, 0LL);
    xsi_set_current_line(175, ng0);
    t2 = (t0 + 7240);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    t7 = (t0 + 472);
    t13 = *((char **)t7);
    memset(t16, 0, 8);
    xsi_vlog_unsigned_multiply(t16, 32, t6, 32, t13, 32);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_add(t24, 32, t5, 30, t16, 32);
    t7 = (t0 + 7240);
    xsi_vlogvar_wait_assign_value(t7, t24, 0, 0, 30, 0LL);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6440);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6280);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t2 = (t0 + 8040);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB34;

LAB26:    xsi_set_current_line(181, ng0);

LAB169:    xsi_set_current_line(182, ng0);
    t2 = (t0 + 4280U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t6 = (t5 + 4);
    t7 = (t2 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t17 = (t11 ^ t12);
    t18 = (t10 | t17);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB173;

LAB170:    if (t21 != 0)
        goto LAB172;

LAB171:    *((unsigned int *)t16) = 1;

LAB173:    t14 = (t16 + 4);
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t16);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB174;

LAB175:
LAB176:    goto LAB34;

LAB28:    xsi_set_current_line(188, ng0);

LAB178:    xsi_set_current_line(189, ng0);
    t2 = (t0 + 4440U);
    t5 = *((char **)t2);
    t2 = (t0 + 5960);
    t6 = (t0 + 5960);
    t7 = (t6 + 72U);
    t13 = *((char **)t7);
    t14 = ((char*)((ng8)));
    t30 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t16, t24, t38, ((int*)(t13)), 2, t14, 32, 1, t30, 32, 1);
    t34 = (t16 + 4);
    t8 = *((unsigned int *)t34);
    t86 = (!(t8));
    t35 = (t24 + 4);
    t9 = *((unsigned int *)t35);
    t145 = (!(t9));
    t146 = (t86 && t145);
    t36 = (t38 + 4);
    t10 = *((unsigned int *)t36);
    t221 = (!(t10));
    t222 = (t146 && t221);
    if (t222 == 1)
        goto LAB179;

LAB180:    xsi_set_current_line(190, ng0);
    t2 = (t0 + 4280U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t17 = (t11 ^ t12);
    t18 = (t10 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t6);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB184;

LAB181:    if (t21 != 0)
        goto LAB183;

LAB182:    *((unsigned int *)t16) = 1;

LAB184:    t13 = (t16 + 4);
    t25 = *((unsigned int *)t13);
    t26 = (~(t25));
    t27 = *((unsigned int *)t16);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB185;

LAB186:
LAB187:    goto LAB34;

LAB30:    xsi_set_current_line(196, ng0);

LAB189:    xsi_set_current_line(197, ng0);
    t2 = (t0 + 4440U);
    t5 = *((char **)t2);
    t2 = (t0 + 5960);
    t6 = (t0 + 5960);
    t7 = (t6 + 72U);
    t13 = *((char **)t7);
    t14 = ((char*)((ng9)));
    t30 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t16, t24, t38, ((int*)(t13)), 2, t14, 32, 1, t30, 32, 1);
    t34 = (t16 + 4);
    t8 = *((unsigned int *)t34);
    t86 = (!(t8));
    t35 = (t24 + 4);
    t9 = *((unsigned int *)t35);
    t145 = (!(t9));
    t146 = (t86 && t145);
    t36 = (t38 + 4);
    t10 = *((unsigned int *)t36);
    t221 = (!(t10));
    t222 = (t146 && t221);
    if (t222 == 1)
        goto LAB190;

LAB191:    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(199, ng0);
    t2 = (t0 + 7400);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_minus(t16, 32, t5, 6, t6, 32);
    t7 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t7, t16, 0, 0, 6, 0LL);
    xsi_set_current_line(200, ng0);
    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t2 = (t0 + 8040);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB34;

LAB32:    xsi_set_current_line(203, ng0);

LAB192:    xsi_set_current_line(204, ng0);
    t2 = (t0 + 7400);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t16, 0, 8);
    t13 = (t6 + 4);
    t14 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t7);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t13);
    t12 = *((unsigned int *)t14);
    t17 = (t11 ^ t12);
    t18 = (t10 | t17);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB196;

LAB193:    if (t21 != 0)
        goto LAB195;

LAB194:    *((unsigned int *)t16) = 1;

LAB196:    t34 = (t16 + 4);
    t25 = *((unsigned int *)t34);
    t26 = (~(t25));
    t27 = *((unsigned int *)t16);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB197;

LAB198:    xsi_set_current_line(206, ng0);

LAB201:    xsi_set_current_line(207, ng0);
    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t2 = (t0 + 8040);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB199:    goto LAB34;

LAB38:    t7 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB39;

LAB40:    *((unsigned int *)t24) = 1;
    goto LAB43;

LAB42:    t14 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB43;

LAB44:    t34 = (t0 + 7560);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng1)));
    memset(t38, 0, 8);
    t39 = (t36 + 4);
    t40 = (t37 + 4);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t39);
    t49 = *((unsigned int *)t40);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB50;

LAB47:    if (t50 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t38) = 1;

LAB50:    memset(t54, 0, 8);
    t55 = (t38 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t38);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t55) != 0)
        goto LAB53;

LAB54:    t63 = *((unsigned int *)t24);
    t64 = *((unsigned int *)t54);
    t65 = (t63 & t64);
    *((unsigned int *)t62) = t65;
    t66 = (t24 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB46;

LAB49:    t53 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB50;

LAB51:    *((unsigned int *)t54) = 1;
    goto LAB54;

LAB53:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB54;

LAB55:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t24 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t24);
    t79 = (~(t78));
    t80 = *((unsigned int *)t76);
    t81 = (~(t80));
    t82 = *((unsigned int *)t54);
    t83 = (~(t82));
    t84 = *((unsigned int *)t77);
    t85 = (~(t84));
    t15 = (t79 & t81);
    t86 = (t83 & t85);
    t87 = (~(t15));
    t88 = (~(t86));
    t89 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t89 & t87);
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t91 & t87);
    t92 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t92 & t88);
    goto LAB57;

LAB58:    *((unsigned int *)t93) = 1;
    goto LAB61;

LAB60:    t100 = (t93 + 4);
    *((unsigned int *)t93) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB61;

LAB62:    t105 = (t0 + 3640U);
    t106 = *((char **)t105);
    t105 = (t0 + 472);
    t107 = *((char **)t105);
    t105 = ((char*)((ng4)));
    memset(t108, 0, 8);
    xsi_vlog_unsigned_divide(t108, 32, t107, 32, t105, 32);
    memset(t109, 0, 8);
    t110 = (t106 + 4);
    if (*((unsigned int *)t110) != 0)
        goto LAB66;

LAB65:    t111 = (t108 + 4);
    if (*((unsigned int *)t111) != 0)
        goto LAB66;

LAB69:    if (*((unsigned int *)t106) < *((unsigned int *)t108))
        goto LAB68;

LAB67:    *((unsigned int *)t109) = 1;

LAB68:    memset(t113, 0, 8);
    t114 = (t109 + 4);
    t115 = *((unsigned int *)t114);
    t116 = (~(t115));
    t117 = *((unsigned int *)t109);
    t118 = (t117 & t116);
    t119 = (t118 & 1U);
    if (t119 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t114) != 0)
        goto LAB72;

LAB73:    t122 = *((unsigned int *)t93);
    t123 = *((unsigned int *)t113);
    t124 = (t122 & t123);
    *((unsigned int *)t121) = t124;
    t125 = (t93 + 4);
    t126 = (t113 + 4);
    t127 = (t121 + 4);
    t128 = *((unsigned int *)t125);
    t129 = *((unsigned int *)t126);
    t130 = (t128 | t129);
    *((unsigned int *)t127) = t130;
    t131 = *((unsigned int *)t127);
    t132 = (t131 != 0);
    if (t132 == 1)
        goto LAB74;

LAB75:
LAB76:    goto LAB64;

LAB66:    t112 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t112) = 1;
    goto LAB68;

LAB70:    *((unsigned int *)t113) = 1;
    goto LAB73;

LAB72:    t120 = (t113 + 4);
    *((unsigned int *)t113) = 1;
    *((unsigned int *)t120) = 1;
    goto LAB73;

LAB74:    t133 = *((unsigned int *)t121);
    t134 = *((unsigned int *)t127);
    *((unsigned int *)t121) = (t133 | t134);
    t135 = (t93 + 4);
    t136 = (t113 + 4);
    t137 = *((unsigned int *)t93);
    t138 = (~(t137));
    t139 = *((unsigned int *)t135);
    t140 = (~(t139));
    t141 = *((unsigned int *)t113);
    t142 = (~(t141));
    t143 = *((unsigned int *)t136);
    t144 = (~(t143));
    t145 = (t138 & t140);
    t146 = (t142 & t144);
    t147 = (~(t145));
    t148 = (~(t146));
    t149 = *((unsigned int *)t127);
    *((unsigned int *)t127) = (t149 & t147);
    t150 = *((unsigned int *)t127);
    *((unsigned int *)t127) = (t150 & t148);
    t151 = *((unsigned int *)t121);
    *((unsigned int *)t121) = (t151 & t147);
    t152 = *((unsigned int *)t121);
    *((unsigned int *)t121) = (t152 & t148);
    goto LAB76;

LAB77:    xsi_set_current_line(121, ng0);

LAB80:    xsi_set_current_line(122, ng0);
    t159 = (t0 + 880);
    t160 = *((char **)t159);
    t159 = (t0 + 8040);
    xsi_vlogvar_wait_assign_value(t159, t160, 0, 0, 32, 0LL);
    goto LAB79;

LAB86:    t13 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB87;

LAB88:    xsi_set_current_line(134, ng0);

LAB91:    xsi_set_current_line(135, ng0);
    t30 = (t0 + 3480U);
    t34 = *((char **)t30);
    memset(t24, 0, 8);
    t30 = (t24 + 4);
    t35 = (t34 + 4);
    t31 = *((unsigned int *)t34);
    t32 = (t31 >> 0);
    *((unsigned int *)t24) = t32;
    t33 = *((unsigned int *)t35);
    t41 = (t33 >> 0);
    *((unsigned int *)t30) = t41;
    t42 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t42 & 4294967295U);
    t43 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t43 & 4294967295U);
    t36 = (t0 + 6920);
    xsi_vlogvar_wait_assign_value(t36, t24, 0, 0, 32, 0LL);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6760);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 7400);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_minus(t16, 32, t5, 6, t6, 32);
    t7 = (t0 + 7400);
    xsi_vlogvar_wait_assign_value(t7, t16, 0, 0, 6, 0LL);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t2 = (t0 + 8040);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB90;

LAB95:    t14 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB96;

LAB97:    xsi_set_current_line(145, ng0);

LAB100:    xsi_set_current_line(146, ng0);
    t34 = (t0 + 1288);
    t35 = *((char **)t34);
    t34 = (t0 + 8040);
    xsi_vlogvar_wait_assign_value(t34, t35, 0, 0, 32, 0LL);
    goto LAB99;

LAB106:    t7 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB107;

LAB108:    *((unsigned int *)t24) = 1;
    goto LAB111;

LAB110:    t14 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB111;

LAB112:    t34 = (t0 + 7720);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng1)));
    memset(t38, 0, 8);
    t39 = (t36 + 4);
    t40 = (t37 + 4);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t39);
    t49 = *((unsigned int *)t40);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB118;

LAB115:    if (t50 != 0)
        goto LAB117;

LAB116:    *((unsigned int *)t38) = 1;

LAB118:    memset(t54, 0, 8);
    t55 = (t38 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t38);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB119;

LAB120:    if (*((unsigned int *)t55) != 0)
        goto LAB121;

LAB122:    t63 = *((unsigned int *)t24);
    t64 = *((unsigned int *)t54);
    t65 = (t63 & t64);
    *((unsigned int *)t62) = t65;
    t66 = (t24 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB123;

LAB124:
LAB125:    goto LAB114;

LAB117:    t53 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB118;

LAB119:    *((unsigned int *)t54) = 1;
    goto LAB122;

LAB121:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB122;

LAB123:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t24 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t24);
    t79 = (~(t78));
    t80 = *((unsigned int *)t76);
    t81 = (~(t80));
    t82 = *((unsigned int *)t54);
    t83 = (~(t82));
    t84 = *((unsigned int *)t77);
    t85 = (~(t84));
    t15 = (t79 & t81);
    t86 = (t83 & t85);
    t87 = (~(t15));
    t88 = (~(t86));
    t89 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t89 & t87);
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t91 & t87);
    t92 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t92 & t88);
    goto LAB125;

LAB126:    *((unsigned int *)t93) = 1;
    goto LAB129;

LAB128:    t100 = (t93 + 4);
    *((unsigned int *)t93) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB129;

LAB130:    t105 = (t0 + 4120U);
    t106 = *((char **)t105);
    t105 = ((char*)((ng7)));
    t107 = (t0 + 472);
    t110 = *((char **)t107);
    t107 = ((char*)((ng4)));
    memset(t108, 0, 8);
    xsi_vlog_unsigned_divide(t108, 32, t110, 32, t107, 32);
    memset(t109, 0, 8);
    xsi_vlog_unsigned_minus(t109, 32, t105, 32, t108, 32);
    memset(t113, 0, 8);
    t111 = (t106 + 4);
    if (*((unsigned int *)t111) != 0)
        goto LAB134;

LAB133:    t112 = (t109 + 4);
    if (*((unsigned int *)t112) != 0)
        goto LAB134;

LAB137:    if (*((unsigned int *)t106) < *((unsigned int *)t109))
        goto LAB135;

LAB136:    memset(t121, 0, 8);
    t120 = (t113 + 4);
    t115 = *((unsigned int *)t120);
    t116 = (~(t115));
    t117 = *((unsigned int *)t113);
    t118 = (t117 & t116);
    t119 = (t118 & 1U);
    if (t119 != 0)
        goto LAB138;

LAB139:    if (*((unsigned int *)t120) != 0)
        goto LAB140;

LAB141:    t122 = *((unsigned int *)t93);
    t123 = *((unsigned int *)t121);
    t124 = (t122 & t123);
    *((unsigned int *)t161) = t124;
    t126 = (t93 + 4);
    t127 = (t121 + 4);
    t135 = (t161 + 4);
    t128 = *((unsigned int *)t126);
    t129 = *((unsigned int *)t127);
    t130 = (t128 | t129);
    *((unsigned int *)t135) = t130;
    t131 = *((unsigned int *)t135);
    t132 = (t131 != 0);
    if (t132 == 1)
        goto LAB142;

LAB143:
LAB144:    goto LAB132;

LAB134:    t114 = (t113 + 4);
    *((unsigned int *)t113) = 1;
    *((unsigned int *)t114) = 1;
    goto LAB136;

LAB135:    *((unsigned int *)t113) = 1;
    goto LAB136;

LAB138:    *((unsigned int *)t121) = 1;
    goto LAB141;

LAB140:    t125 = (t121 + 4);
    *((unsigned int *)t121) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB141;

LAB142:    t133 = *((unsigned int *)t161);
    t134 = *((unsigned int *)t135);
    *((unsigned int *)t161) = (t133 | t134);
    t136 = (t93 + 4);
    t153 = (t121 + 4);
    t137 = *((unsigned int *)t93);
    t138 = (~(t137));
    t139 = *((unsigned int *)t136);
    t140 = (~(t139));
    t141 = *((unsigned int *)t121);
    t142 = (~(t141));
    t143 = *((unsigned int *)t153);
    t144 = (~(t143));
    t145 = (t138 & t140);
    t146 = (t142 & t144);
    t147 = (~(t145));
    t148 = (~(t146));
    t149 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t149 & t147);
    t150 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t150 & t148);
    t151 = *((unsigned int *)t161);
    *((unsigned int *)t161) = (t151 & t147);
    t152 = *((unsigned int *)t161);
    *((unsigned int *)t161) = (t152 & t148);
    goto LAB144;

LAB145:    *((unsigned int *)t162) = 1;
    goto LAB148;

LAB147:    t160 = (t162 + 4);
    *((unsigned int *)t162) = 1;
    *((unsigned int *)t160) = 1;
    goto LAB148;

LAB149:    t167 = (t0 + 7080);
    t168 = (t167 + 56U);
    t169 = *((char **)t168);
    t170 = (t0 + 7240);
    t171 = (t170 + 56U);
    t172 = *((char **)t171);
    memset(t173, 0, 8);
    t174 = (t169 + 4);
    t175 = (t172 + 4);
    t176 = *((unsigned int *)t169);
    t177 = *((unsigned int *)t172);
    t178 = (t176 ^ t177);
    t179 = *((unsigned int *)t174);
    t180 = *((unsigned int *)t175);
    t181 = (t179 ^ t180);
    t182 = (t178 | t181);
    t183 = *((unsigned int *)t174);
    t184 = *((unsigned int *)t175);
    t185 = (t183 | t184);
    t186 = (~(t185));
    t187 = (t182 & t186);
    if (t187 != 0)
        goto LAB153;

LAB152:    if (t185 != 0)
        goto LAB154;

LAB155:    memset(t189, 0, 8);
    t190 = (t173 + 4);
    t191 = *((unsigned int *)t190);
    t192 = (~(t191));
    t193 = *((unsigned int *)t173);
    t194 = (t193 & t192);
    t195 = (t194 & 1U);
    if (t195 != 0)
        goto LAB156;

LAB157:    if (*((unsigned int *)t190) != 0)
        goto LAB158;

LAB159:    t198 = *((unsigned int *)t162);
    t199 = *((unsigned int *)t189);
    t200 = (t198 & t199);
    *((unsigned int *)t197) = t200;
    t201 = (t162 + 4);
    t202 = (t189 + 4);
    t203 = (t197 + 4);
    t204 = *((unsigned int *)t201);
    t205 = *((unsigned int *)t202);
    t206 = (t204 | t205);
    *((unsigned int *)t203) = t206;
    t207 = *((unsigned int *)t203);
    t208 = (t207 != 0);
    if (t208 == 1)
        goto LAB160;

LAB161:
LAB162:    goto LAB151;

LAB153:    *((unsigned int *)t173) = 1;
    goto LAB155;

LAB154:    t188 = (t173 + 4);
    *((unsigned int *)t173) = 1;
    *((unsigned int *)t188) = 1;
    goto LAB155;

LAB156:    *((unsigned int *)t189) = 1;
    goto LAB159;

LAB158:    t196 = (t189 + 4);
    *((unsigned int *)t189) = 1;
    *((unsigned int *)t196) = 1;
    goto LAB159;

LAB160:    t209 = *((unsigned int *)t197);
    t210 = *((unsigned int *)t203);
    *((unsigned int *)t197) = (t209 | t210);
    t211 = (t162 + 4);
    t212 = (t189 + 4);
    t213 = *((unsigned int *)t162);
    t214 = (~(t213));
    t215 = *((unsigned int *)t211);
    t216 = (~(t215));
    t217 = *((unsigned int *)t189);
    t218 = (~(t217));
    t219 = *((unsigned int *)t212);
    t220 = (~(t219));
    t221 = (t214 & t216);
    t222 = (t218 & t220);
    t223 = (~(t221));
    t224 = (~(t222));
    t225 = *((unsigned int *)t203);
    *((unsigned int *)t203) = (t225 & t223);
    t226 = *((unsigned int *)t203);
    *((unsigned int *)t203) = (t226 & t224);
    t227 = *((unsigned int *)t197);
    *((unsigned int *)t197) = (t227 & t223);
    t228 = *((unsigned int *)t197);
    *((unsigned int *)t197) = (t228 & t224);
    goto LAB162;

LAB163:    xsi_set_current_line(166, ng0);

LAB166:    xsi_set_current_line(167, ng0);
    t235 = (t0 + 1424);
    t236 = *((char **)t235);
    t235 = (t0 + 8040);
    xsi_vlogvar_wait_assign_value(t235, t236, 0, 0, 32, 0LL);
    goto LAB165;

LAB172:    t13 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB173;

LAB174:    xsi_set_current_line(182, ng0);

LAB177:    xsi_set_current_line(183, ng0);
    t30 = ((char*)((ng5)));
    t34 = (t0 + 6120);
    xsi_vlogvar_wait_assign_value(t34, t30, 0, 0, 1, 0LL);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t2 = (t0 + 8040);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB176;

LAB179:    t11 = *((unsigned int *)t38);
    t237 = (t11 + 0);
    t12 = *((unsigned int *)t16);
    t17 = *((unsigned int *)t24);
    t238 = (t12 - t17);
    t239 = (t238 + 1);
    xsi_vlogvar_wait_assign_value(t2, t5, t237, *((unsigned int *)t24), t239, 0LL);
    goto LAB180;

LAB183:    t7 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB184;

LAB185:    xsi_set_current_line(190, ng0);

LAB188:    xsi_set_current_line(191, ng0);
    t14 = ((char*)((ng5)));
    t30 = (t0 + 6120);
    xsi_vlogvar_wait_assign_value(t30, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(192, ng0);
    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t2 = (t0 + 8040);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB187;

LAB190:    t11 = *((unsigned int *)t38);
    t237 = (t11 + 0);
    t12 = *((unsigned int *)t16);
    t17 = *((unsigned int *)t24);
    t238 = (t12 - t17);
    t239 = (t238 + 1);
    xsi_vlogvar_wait_assign_value(t2, t5, t237, *((unsigned int *)t24), t239, 0LL);
    goto LAB191;

LAB195:    t30 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB196;

LAB197:    xsi_set_current_line(204, ng0);

LAB200:    xsi_set_current_line(205, ng0);
    t35 = (t0 + 608);
    t36 = *((char **)t35);
    t35 = (t0 + 8040);
    xsi_vlogvar_wait_assign_value(t35, t36, 0, 0, 32, 0LL);
    goto LAB199;

}


extern void work_m_00000000001984627790_3599778557_init()
{
	static char *pe[] = {(void *)Cont_79_0,(void *)Cont_80_1,(void *)Always_82_2,(void *)Always_83_3,(void *)Always_84_4,(void *)Always_99_5};
	xsi_register_didat("work_m_00000000001984627790_3599778557", "isim/main_isim_beh.exe.sim/work/m_00000000001984627790_3599778557.didat");
	xsi_register_executes(pe);
}
