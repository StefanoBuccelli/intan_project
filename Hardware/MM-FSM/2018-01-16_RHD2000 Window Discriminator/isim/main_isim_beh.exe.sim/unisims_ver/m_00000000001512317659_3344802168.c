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
static int ng0[] = {0, 0};
static int ng1[] = {2, 0};
static int ng2[] = {4, 0};
static int ng3[] = {8, 0};
static int ng4[] = {16, 0};
static int ng5[] = {32, 0};
static const char *ng6 = "Attribute Syntax Error : The Attribute CLKFXDV_DIVIDE on DCM_CLKGEN instance %m is set to %d.  Legal values for this attribute are 2, 4, 8, 16, or 32.";
static int ng7[] = {1, 0};
static int ng8[] = {1313820229, 0};
static int ng9[] = {256, 0};
static const char *ng10 = "Attribute Syntax Error : The attribute CLKFX_DIVIDE on DCM_CLKGEN instance %m is set to %d.  Legal values for this attribute are 1 ... 256.";
static const char *ng11 = "Attribute Syntax Error : The attribute CLKFX_DIVIDE on DCM_CLKGEN instance %m is set to %d.  Legal values for this attribute are 1 ... 4 in spread spectrum mode.";
static const char *ng12 = "Attribute Syntax Error : The ratio of  CLKFX_MULTIPLY / CLKFX_DIVIDE is %f on DCM_CLKGEN instance %m.  It is over the value %f of attribute CLKFX_MD_MAX.";
static const char *ng13 = "Attribute Syntax Error : The attribute CLKFX_MULTIPLY on DCM_CLKGEN instance %m is set to %d.  Legal values for this attribute are 2 ... 256.";
static const char *ng14 = "Attribute Syntax Error : The attribute CLKFX_MULTIPLY on DCM_CLKGEN instance %m is set to %d.  Legal values for this attribute are 2 ... 32 in spread spectrum mode.";
static int ng15[] = {1313820229, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng16[] = {1380270404, 0, 1214206800, 0, 1598572871, 0, 1314145618, 0, 17221, 0};
static int ng17[] = {1380270404, 0, 1465865040, 0, 1381977167, 0, 1162761285, 0, 67, 0};
static int ng18[] = {1264536880, 0, 1598835022, 0, 1229210959, 0, 86, 0, 0, 0};
static int ng19[] = {3, 0};
static int ng20[] = {1264536881, 0, 1598835022, 0, 1229210959, 0, 86, 0, 0, 0};
static int ng21[] = {1264536882, 0, 1598835022, 0, 1229210959, 0, 86, 0, 0, 0};
static int ng22[] = {5, 0};
static const char *ng23 = "Attribute Syntax Error : The Attribute SPREAD_SPECTRUM on DCM_CLKGEN instance %m is set to %s.  Legal values for this attribute are NONE, CENTER_HIGH_SPREAD, CENTER_LOW_SPREAD, VIDEO_LINK_M0, VIDEO_LINK_M1, or VIDEO_LINK_M2.";
static int ng24[] = {1095521093, 0, 70, 0};
static int ng25[] = {1414681925, 0, 0, 0};
static const char *ng26 = "Attribute Syntax Error : The Attribute STARTUP_WAIT on DCM_CLKGEN instance %m is set to %s.  Legal values for this attribute are TRUE or FALSE.";
static const char *ng27 = "Simulator Resolution Error : Simulator resolution is set to a value greater than 1 ps.";
static const char *ng28 = "In order to simulate the DCM_CLKGEN, the simulator resolution must be set to 1ps.";
static unsigned int ng29[] = {0U, 0U};
static const char *ng30 = "Input Error : RST on DCM_CLKGEN instance %m at time %t must be asserted for 3 CLKIN clock cycles.";
static unsigned int ng31[] = {1U, 1U};
static int ng32[] = {0, 0, 0, 0};
static int ng33[] = {14, 0};
static int ng34[] = {2, 0, 0, 0};
static int ng35[] = {1, 0, 0, 0};
static int ng36[] = {500, 0, 0, 0};
static int ng37[] = {500, 0};
static int ng38[] = {1024, 0};
static int ng39[] = {9, 0};
static int ng40[] = {10, 0};
static const char *ng41 = "Warning : PROGDATA over 10 bit limit on X_DCMCLK_GEN on instance %m at time %t.";
static unsigned int ng42[] = {3U, 0U};
static unsigned int ng43[] = {1U, 0U};
static const char *ng44 = "Error : The CLKFX MULTIPLIER and DIVIDER are programed to %d and %d on DCM_CLKGEN instance %m. The ratio of  CLKFX MULTIPLIER / CLKFX DIVIDER is %f.  It is over the value %f set by attribute CLKFX_MD_MAX.";



static void Initial_187_0(char *t0)
{
    char t15[8];
    char t34[8];
    char t35[8];
    char t50[8];
    char t51[8];
    char t59[8];
    char t93[16];
    char t99[8];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    int t6;
    char *t7;
    int t8;
    char *t9;
    int t10;
    char *t11;
    int t12;
    char *t13;
    char *t14;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    double t94;
    double t95;
    double t96;
    double t97;
    double t98;

LAB0:    t1 = (t0 + 22176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:
LAB4:    t2 = ((char*)((ng0)));
    t3 = (t0 + 13416);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = (t0 + 744);
    t3 = *((char **)t2);

LAB5:    t2 = ((char*)((ng1)));
    t4 = xsi_vlog_signed_case_compare(t3, 32, t2, 32);
    if (t4 == 1)
        goto LAB6;

LAB7:    t5 = ((char*)((ng2)));
    t6 = xsi_vlog_signed_case_compare(t3, 32, t5, 32);
    if (t6 == 1)
        goto LAB8;

LAB9:    t7 = ((char*)((ng3)));
    t8 = xsi_vlog_signed_case_compare(t3, 32, t7, 32);
    if (t8 == 1)
        goto LAB10;

LAB11:    t9 = ((char*)((ng4)));
    t10 = xsi_vlog_signed_case_compare(t3, 32, t9, 32);
    if (t10 == 1)
        goto LAB12;

LAB13:    t11 = ((char*)((ng5)));
    t12 = xsi_vlog_signed_case_compare(t3, 32, t11, 32);
    if (t12 == 1)
        goto LAB14;

LAB15:
LAB17:
LAB16:
LAB19:    t13 = (t0 + 744);
    t14 = *((char **)t13);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)119, t14, 32);
    t2 = ((char*)((ng7)));
    t5 = (t0 + 13416);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);

LAB18:    t2 = (t0 + 472);
    t5 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t15, 0, 8);
    t7 = (t5 + 4);
    t9 = (t2 + 4);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t2);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t9);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t9);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB23;

LAB20:    if (t25 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t15) = 1;

LAB23:    t13 = (t15 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t15);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB24;

LAB25:
LAB46:    t2 = (t0 + 880);
    t5 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t15, 0, 8);
    xsi_vlog_signed_less(t15, 32, t5, 32, t2, 32);
    memset(t34, 0, 8);
    t7 = (t15 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (~(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t7) != 0)
        goto LAB49;

LAB50:    t11 = (t34 + 4);
    t21 = *((unsigned int *)t34);
    t22 = (!(t21));
    t23 = *((unsigned int *)t11);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB51;

LAB52:    memcpy(t51, t34, 8);

LAB53:    t58 = (t51 + 4);
    t66 = *((unsigned int *)t58);
    t67 = (~(t66));
    t68 = *((unsigned int *)t51);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB61;

LAB62:
LAB63:
LAB26:    t2 = (t0 + 1016);
    t5 = *((char **)t2);
    t2 = (t0 + 880);
    t7 = *((char **)t2);
    xsi_vlog_signed_divide(t93, 64, t5, 32, t7, 32);
    t94 = xsi_vlog_convert_to_real(t93, 32, 1);
    t2 = (t0 + 14856);
    xsi_vlogvar_assign_value_double(t2, t94, 0);
    t2 = (t0 + 1152);
    t5 = *((char **)t2);
    t94 = *((double *)t5);
    t16 = (t94 > 0.00000000000000000);
    *((unsigned int *)t15) = t16;
    t2 = (t15 + 4);
    *((unsigned int *)t2) = 0U;
    memset(t34, 0, 8);
    t7 = (t15 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    t19 = *((unsigned int *)t15);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t7) != 0)
        goto LAB67;

LAB68:    t11 = (t34 + 4);
    t22 = *((unsigned int *)t34);
    t23 = *((unsigned int *)t11);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB69;

LAB70:    memcpy(t51, t34, 8);

LAB71:    t65 = (t51 + 4);
    t71 = *((unsigned int *)t65);
    t72 = (~(t71));
    t75 = *((unsigned int *)t51);
    t76 = (t75 & t72);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB79;

LAB80:
LAB81:    t2 = (t0 + 472);
    t5 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t15, 0, 8);
    t7 = (t5 + 4);
    t9 = (t2 + 4);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t2);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t9);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t9);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB86;

LAB83:    if (t25 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t15) = 1;

LAB86:    t13 = (t15 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t15);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB87;

LAB88:
LAB109:    t2 = (t0 + 1016);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_signed_less(t15, 32, t5, 32, t2, 32);
    memset(t34, 0, 8);
    t7 = (t15 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (~(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t7) != 0)
        goto LAB112;

LAB113:    t11 = (t34 + 4);
    t21 = *((unsigned int *)t34);
    t22 = (!(t21));
    t23 = *((unsigned int *)t11);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB114;

LAB115:    memcpy(t51, t34, 8);

LAB116:    t58 = (t51 + 4);
    t66 = *((unsigned int *)t58);
    t67 = (~(t66));
    t68 = *((unsigned int *)t51);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB124;

LAB125:
LAB126:
LAB89:    t2 = (t0 + 472);
    t5 = *((char **)t2);

LAB128:    t2 = ((char*)((ng15)));
    t4 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 144);
    if (t4 == 1)
        goto LAB129;

LAB130:    t2 = ((char*)((ng16)));
    t4 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 144);
    if (t4 == 1)
        goto LAB131;

LAB132:    t2 = ((char*)((ng17)));
    t4 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 144);
    if (t4 == 1)
        goto LAB133;

LAB134:    t2 = ((char*)((ng18)));
    t4 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 144);
    if (t4 == 1)
        goto LAB135;

LAB136:    t2 = ((char*)((ng20)));
    t4 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 144);
    if (t4 == 1)
        goto LAB137;

LAB138:    t2 = ((char*)((ng21)));
    t4 = xsi_vlog_unsigned_case_compare(t5, 32, t2, 144);
    if (t4 == 1)
        goto LAB139;

LAB140:
LAB142:
LAB141:
LAB144:    t2 = (t0 + 472);
    t7 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng23, 2, t0, (char)118, t7, 32);

LAB143:    t2 = (t0 + 608);
    t7 = *((char **)t2);

LAB145:    t2 = ((char*)((ng24)));
    t4 = xsi_vlog_unsigned_case_compare(t7, 40, t2, 40);
    if (t4 == 1)
        goto LAB146;

LAB147:    t9 = ((char*)((ng25)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 40, t9, 40);
    if (t6 == 1)
        goto LAB148;

LAB149:
LAB151:
LAB150:
LAB153:    t11 = (t0 + 608);
    t13 = *((char **)t11);
    xsi_vlogfile_write(1, 0, 0, ng26, 2, t0, (char)118, t13, 40);
    t2 = ((char*)((ng7)));
    t9 = (t0 + 13416);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 1);

LAB152:    t2 = (t0 + 21984);
    xsi_process_wait(t2, 1LL);
    *((char **)t1) = &&LAB154;

LAB1:    return;
LAB6:    goto LAB18;

LAB8:    goto LAB18;

LAB10:    goto LAB18;

LAB12:    goto LAB18;

LAB14:    goto LAB18;

LAB22:    t11 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB23;

LAB24:
LAB27:    t14 = (t0 + 880);
    t33 = *((char **)t14);
    t14 = ((char*)((ng7)));
    memset(t34, 0, 8);
    xsi_vlog_signed_less(t34, 32, t33, 32, t14, 32);
    memset(t35, 0, 8);
    t36 = (t34 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t34);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t36) != 0)
        goto LAB30;

LAB31:    t43 = (t35 + 4);
    t44 = *((unsigned int *)t35);
    t45 = (!(t44));
    t46 = *((unsigned int *)t43);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB32;

LAB33:    memcpy(t59, t35, 8);

LAB34:    t85 = (t59 + 4);
    t86 = *((unsigned int *)t85);
    t87 = (~(t86));
    t88 = *((unsigned int *)t59);
    t89 = (t88 & t87);
    t90 = (t89 != 0);
    if (t90 > 0)
        goto LAB42;

LAB43:
LAB44:    goto LAB26;

LAB28:    *((unsigned int *)t35) = 1;
    goto LAB31;

LAB30:    t42 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB31;

LAB32:    t48 = (t0 + 880);
    t49 = *((char **)t48);
    t48 = ((char*)((ng9)));
    memset(t50, 0, 8);
    xsi_vlog_signed_greater(t50, 32, t49, 32, t48, 32);
    memset(t51, 0, 8);
    t52 = (t50 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t50);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t52) != 0)
        goto LAB37;

LAB38:    t60 = *((unsigned int *)t35);
    t61 = *((unsigned int *)t51);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = (t35 + 4);
    t64 = (t51 + 4);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB34;

LAB35:    *((unsigned int *)t51) = 1;
    goto LAB38;

LAB37:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB38;

LAB39:    t71 = *((unsigned int *)t59);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t59) = (t71 | t72);
    t73 = (t35 + 4);
    t74 = (t51 + 4);
    t75 = *((unsigned int *)t73);
    t76 = (~(t75));
    t77 = *((unsigned int *)t35);
    t4 = (t77 & t76);
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t51);
    t6 = (t80 & t79);
    t81 = (~(t4));
    t82 = (~(t6));
    t83 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t83 & t81);
    t84 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t84 & t82);
    goto LAB41;

LAB42:
LAB45:    t91 = (t0 + 880);
    t92 = *((char **)t91);
    xsi_vlogfile_write(1, 0, 0, ng10, 2, t0, (char)119, t92, 32);
    t2 = ((char*)((ng7)));
    t5 = (t0 + 13416);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB44;

LAB47:    *((unsigned int *)t34) = 1;
    goto LAB50;

LAB49:    t9 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB50;

LAB51:    t13 = (t0 + 880);
    t14 = *((char **)t13);
    t13 = ((char*)((ng2)));
    memset(t35, 0, 8);
    xsi_vlog_signed_greater(t35, 32, t14, 32, t13, 32);
    memset(t50, 0, 8);
    t33 = (t35 + 4);
    t25 = *((unsigned int *)t33);
    t26 = (~(t25));
    t27 = *((unsigned int *)t35);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t33) != 0)
        goto LAB56;

LAB57:    t30 = *((unsigned int *)t34);
    t31 = *((unsigned int *)t50);
    t32 = (t30 | t31);
    *((unsigned int *)t51) = t32;
    t42 = (t34 + 4);
    t43 = (t50 + 4);
    t48 = (t51 + 4);
    t37 = *((unsigned int *)t42);
    t38 = *((unsigned int *)t43);
    t39 = (t37 | t38);
    *((unsigned int *)t48) = t39;
    t40 = *((unsigned int *)t48);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB58;

LAB59:
LAB60:    goto LAB53;

LAB54:    *((unsigned int *)t50) = 1;
    goto LAB57;

LAB56:    t36 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB57;

LAB58:    t44 = *((unsigned int *)t51);
    t45 = *((unsigned int *)t48);
    *((unsigned int *)t51) = (t44 | t45);
    t49 = (t34 + 4);
    t52 = (t50 + 4);
    t46 = *((unsigned int *)t49);
    t47 = (~(t46));
    t53 = *((unsigned int *)t34);
    t4 = (t53 & t47);
    t54 = *((unsigned int *)t52);
    t55 = (~(t54));
    t56 = *((unsigned int *)t50);
    t6 = (t56 & t55);
    t57 = (~(t4));
    t60 = (~(t6));
    t61 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t61 & t57);
    t62 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t62 & t60);
    goto LAB60;

LAB61:
LAB64:    t63 = (t0 + 880);
    t64 = *((char **)t63);
    xsi_vlogfile_write(1, 0, 0, ng11, 2, t0, (char)119, t64, 32);
    t2 = ((char*)((ng7)));
    t5 = (t0 + 13416);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB63;

LAB65:    *((unsigned int *)t34) = 1;
    goto LAB68;

LAB67:    t9 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB68;

LAB69:    t13 = (t0 + 14856);
    t14 = (t13 + 56U);
    t33 = *((char **)t14);
    t95 = *((double *)t33);
    t36 = (t0 + 1152);
    t42 = *((char **)t36);
    t96 = *((double *)t42);
    t25 = (t95 > t96);
    *((unsigned int *)t35) = t25;
    t36 = (t35 + 4);
    *((unsigned int *)t36) = 0U;
    memset(t50, 0, 8);
    t43 = (t35 + 4);
    t26 = *((unsigned int *)t43);
    t27 = (~(t26));
    t28 = *((unsigned int *)t35);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t43) != 0)
        goto LAB74;

LAB75:    t31 = *((unsigned int *)t34);
    t32 = *((unsigned int *)t50);
    t37 = (t31 & t32);
    *((unsigned int *)t51) = t37;
    t49 = (t34 + 4);
    t52 = (t50 + 4);
    t58 = (t51 + 4);
    t38 = *((unsigned int *)t49);
    t39 = *((unsigned int *)t52);
    t40 = (t38 | t39);
    *((unsigned int *)t58) = t40;
    t41 = *((unsigned int *)t58);
    t44 = (t41 != 0);
    if (t44 == 1)
        goto LAB76;

LAB77:
LAB78:    goto LAB71;

LAB72:    *((unsigned int *)t50) = 1;
    goto LAB75;

LAB74:    t48 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB75;

LAB76:    t45 = *((unsigned int *)t51);
    t46 = *((unsigned int *)t58);
    *((unsigned int *)t51) = (t45 | t46);
    t63 = (t34 + 4);
    t64 = (t50 + 4);
    t47 = *((unsigned int *)t34);
    t53 = (~(t47));
    t54 = *((unsigned int *)t63);
    t55 = (~(t54));
    t56 = *((unsigned int *)t50);
    t57 = (~(t56));
    t60 = *((unsigned int *)t64);
    t61 = (~(t60));
    t4 = (t53 & t55);
    t6 = (t57 & t61);
    t62 = (~(t4));
    t66 = (~(t6));
    t67 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t67 & t62);
    t68 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t68 & t66);
    t69 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t69 & t62);
    t70 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t70 & t66);
    goto LAB78;

LAB79:
LAB82:    t73 = (t0 + 14856);
    t74 = (t73 + 56U);
    t85 = *((char **)t74);
    t97 = *((double *)t85);
    *((double *)t59) = t97;
    t91 = (t0 + 1152);
    t92 = *((char **)t91);
    t98 = *((double *)t92);
    *((double *)t99) = t98;
    xsi_vlogfile_write(1, 0, 0, ng12, 3, t0, (char)114, t59, 64, (char)114, t99, 64);
    t2 = ((char*)((ng7)));
    t5 = (t0 + 13416);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB81;

LAB85:    t11 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB86;

LAB87:
LAB90:    t14 = (t0 + 1016);
    t33 = *((char **)t14);
    t14 = ((char*)((ng1)));
    memset(t34, 0, 8);
    xsi_vlog_signed_less(t34, 32, t33, 32, t14, 32);
    memset(t35, 0, 8);
    t36 = (t34 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t34);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t36) != 0)
        goto LAB93;

LAB94:    t43 = (t35 + 4);
    t44 = *((unsigned int *)t35);
    t45 = (!(t44));
    t46 = *((unsigned int *)t43);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB95;

LAB96:    memcpy(t59, t35, 8);

LAB97:    t85 = (t59 + 4);
    t86 = *((unsigned int *)t85);
    t87 = (~(t86));
    t88 = *((unsigned int *)t59);
    t89 = (t88 & t87);
    t90 = (t89 != 0);
    if (t90 > 0)
        goto LAB105;

LAB106:
LAB107:    goto LAB89;

LAB91:    *((unsigned int *)t35) = 1;
    goto LAB94;

LAB93:    t42 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB94;

LAB95:    t48 = (t0 + 1016);
    t49 = *((char **)t48);
    t48 = ((char*)((ng9)));
    memset(t50, 0, 8);
    xsi_vlog_signed_greater(t50, 32, t49, 32, t48, 32);
    memset(t51, 0, 8);
    t52 = (t50 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t50);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t52) != 0)
        goto LAB100;

LAB101:    t60 = *((unsigned int *)t35);
    t61 = *((unsigned int *)t51);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = (t35 + 4);
    t64 = (t51 + 4);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB102;

LAB103:
LAB104:    goto LAB97;

LAB98:    *((unsigned int *)t51) = 1;
    goto LAB101;

LAB100:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB101;

LAB102:    t71 = *((unsigned int *)t59);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t59) = (t71 | t72);
    t73 = (t35 + 4);
    t74 = (t51 + 4);
    t75 = *((unsigned int *)t73);
    t76 = (~(t75));
    t77 = *((unsigned int *)t35);
    t4 = (t77 & t76);
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t51);
    t6 = (t80 & t79);
    t81 = (~(t4));
    t82 = (~(t6));
    t83 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t83 & t81);
    t84 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t84 & t82);
    goto LAB104;

LAB105:
LAB108:    t91 = (t0 + 1016);
    t92 = *((char **)t91);
    xsi_vlogfile_write(1, 0, 0, ng13, 2, t0, (char)119, t92, 32);
    t2 = ((char*)((ng7)));
    t5 = (t0 + 13416);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB107;

LAB110:    *((unsigned int *)t34) = 1;
    goto LAB113;

LAB112:    t9 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB113;

LAB114:    t13 = (t0 + 1016);
    t14 = *((char **)t13);
    t13 = ((char*)((ng5)));
    memset(t35, 0, 8);
    xsi_vlog_signed_greater(t35, 32, t14, 32, t13, 32);
    memset(t50, 0, 8);
    t33 = (t35 + 4);
    t25 = *((unsigned int *)t33);
    t26 = (~(t25));
    t27 = *((unsigned int *)t35);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB117;

LAB118:    if (*((unsigned int *)t33) != 0)
        goto LAB119;

LAB120:    t30 = *((unsigned int *)t34);
    t31 = *((unsigned int *)t50);
    t32 = (t30 | t31);
    *((unsigned int *)t51) = t32;
    t42 = (t34 + 4);
    t43 = (t50 + 4);
    t48 = (t51 + 4);
    t37 = *((unsigned int *)t42);
    t38 = *((unsigned int *)t43);
    t39 = (t37 | t38);
    *((unsigned int *)t48) = t39;
    t40 = *((unsigned int *)t48);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB121;

LAB122:
LAB123:    goto LAB116;

LAB117:    *((unsigned int *)t50) = 1;
    goto LAB120;

LAB119:    t36 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB120;

LAB121:    t44 = *((unsigned int *)t51);
    t45 = *((unsigned int *)t48);
    *((unsigned int *)t51) = (t44 | t45);
    t49 = (t34 + 4);
    t52 = (t50 + 4);
    t46 = *((unsigned int *)t49);
    t47 = (~(t46));
    t53 = *((unsigned int *)t34);
    t4 = (t53 & t47);
    t54 = *((unsigned int *)t52);
    t55 = (~(t54));
    t56 = *((unsigned int *)t50);
    t6 = (t56 & t55);
    t57 = (~(t4));
    t60 = (~(t6));
    t61 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t61 & t57);
    t62 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t62 & t60);
    goto LAB123;

LAB124:
LAB127:    t63 = (t0 + 1016);
    t64 = *((char **)t63);
    xsi_vlogfile_write(1, 0, 0, ng14, 2, t0, (char)119, t64, 32);
    t2 = ((char*)((ng7)));
    t5 = (t0 + 13416);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB126;

LAB129:    t7 = ((char*)((ng0)));
    t9 = (t0 + 15656);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    goto LAB143;

LAB131:    t7 = ((char*)((ng7)));
    t9 = (t0 + 15656);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    goto LAB143;

LAB133:    t7 = ((char*)((ng1)));
    t9 = (t0 + 15656);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    goto LAB143;

LAB135:    t7 = ((char*)((ng19)));
    t9 = (t0 + 15656);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    goto LAB143;

LAB137:    t7 = ((char*)((ng2)));
    t9 = (t0 + 15656);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    goto LAB143;

LAB139:    t7 = ((char*)((ng22)));
    t9 = (t0 + 15656);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    goto LAB143;

LAB146:    goto LAB152;

LAB148:    goto LAB152;

LAB154:    t94 = xsi_vlog_realtime(1.0000000000000000, 1.0000000000000000);
    t2 = ((char*)((ng0)));
    t95 = xsi_vlog_convert_to_real(t2, 32, 1);
    t16 = (t94 == t95);
    *((unsigned int *)t15) = t16;
    t9 = (t15 + 4);
    *((unsigned int *)t9) = 0U;
    t11 = (t15 + 4);
    t17 = *((unsigned int *)t11);
    t18 = (~(t17));
    t19 = *((unsigned int *)t15);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB155;

LAB156:
LAB157:    t2 = (t0 + 13416);
    t9 = (t2 + 56U);
    t11 = *((char **)t9);
    t13 = ((char*)((ng7)));
    memset(t15, 0, 8);
    t14 = (t11 + 4);
    t33 = (t13 + 4);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t13);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t33);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t33);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB162;

LAB159:    if (t25 != 0)
        goto LAB161;

LAB160:    *((unsigned int *)t15) = 1;

LAB162:    t42 = (t15 + 4);
    t28 = *((unsigned int *)t42);
    t29 = (~(t28));
    t30 = *((unsigned int *)t15);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB163;

LAB164:
LAB165:    goto LAB1;

LAB155:
LAB158:    xsi_vlogfile_write(1, 0, 0, ng27, 1, t0);
    xsi_vlogfile_write(1, 0, 0, ng28, 1, t0);
    t2 = ((char*)((ng7)));
    t9 = (t0 + 13416);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 1);
    goto LAB157;

LAB161:    t36 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB162;

LAB163:
LAB166:    t43 = (t0 + 21984);
    xsi_process_wait(t43, 1LL);
    *((char **)t1) = &&LAB167;
    goto LAB1;

LAB167:    xsi_vlog_finish(1);
    goto LAB165;

}

static void Cont_270_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 22424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 10056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 34704);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
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
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 33408);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_271_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 22672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 10216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 34768);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
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
    xsi_driver_vfirst_trans(t5, 1, 1);
    t18 = (t0 + 33424);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_272_3(char *t0)
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
    char *t16;

LAB0:    t1 = (t0 + 22920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3096U);
    t3 = *((char **)t2);
    t2 = (t0 + 34832);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 33440);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_273_4(char *t0)
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
    char *t16;

LAB0:    t1 = (t0 + 23168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3256U);
    t3 = *((char **)t2);
    t2 = (t0 + 34896);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 33456);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_274_5(char *t0)
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
    char *t16;

LAB0:    t1 = (t0 + 23416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3416U);
    t3 = *((char **)t2);
    t2 = (t0 + 34960);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 33472);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_275_6(char *t0)
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
    char *t16;

LAB0:    t1 = (t0 + 23664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3736U);
    t3 = *((char **)t2);
    t2 = (t0 + 35024);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 33488);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_276_7(char *t0)
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
    char *t16;

LAB0:    t1 = (t0 + 23912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3576U);
    t3 = *((char **)t2);
    t2 = (t0 + 35088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 33504);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_277_8(char *t0)
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
    char *t16;

LAB0:    t1 = (t0 + 24160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3896U);
    t3 = *((char **)t2);
    t2 = (t0 + 35152);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 33520);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_278_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 24408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 35216);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
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
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 33536);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_279_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 24656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 9256);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 35280);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
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
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 33552);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_281_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 24904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 33568);
    *((int *)t2) = 1;
    t3 = (t0 + 24936);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 5656U);
    t5 = *((char **)t4);
    t4 = (t0 + 8936);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 100LL);
    goto LAB2;

}

static void Always_284_12(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 25152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 33584);
    *((int *)t2) = 1;
    t3 = (t0 + 25184);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 4536U);
    t5 = *((char **)t4);
    t4 = (t0 + 9256);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 100LL);
    goto LAB2;

}

static void Cont_288_13(char *t0)
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
    char *t16;

LAB0:    t1 = (t0 + 25400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4056U);
    t3 = *((char **)t2);
    t2 = (t0 + 35344);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 33600);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_289_14(char *t0)
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
    char *t16;

LAB0:    t1 = (t0 + 25648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4216U);
    t3 = *((char **)t2);
    t2 = (t0 + 35408);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 33616);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_290_15(char *t0)
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
    char *t16;

LAB0:    t1 = (t0 + 25896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4376U);
    t3 = *((char **)t2);
    t2 = (t0 + 35472);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 33632);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Initial_292_16(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;

LAB0:
LAB2:    t1 = (t0 + 744);
    t2 = *((char **)t1);
    t1 = ((char*)((ng7)));
    memset(t3, 0, 8);
    xsi_vlog_signed_minus(t3, 32, t2, 32, t1, 32);
    t4 = (t0 + 20296);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    t1 = (t0 + 744);
    t2 = *((char **)t1);
    t1 = ((char*)((ng1)));
    memset(t3, 0, 8);
    xsi_vlog_signed_divide(t3, 32, t2, 32, t1, 32);
    t4 = (t0 + 20456);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    t1 = ((char*)((ng29)));
    t2 = (t0 + 10856);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 10);
    t1 = (t0 + 13896);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = ((char*)((ng7)));
    memset(t3, 0, 8);
    xsi_vlog_signed_minus(t3, 32, t4, 32, t5, 32);
    t6 = (t0 + 11016);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 8);
    t1 = (t0 + 14216);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = ((char*)((ng7)));
    memset(t3, 0, 8);
    xsi_vlog_signed_minus(t3, 32, t4, 32, t5, 32);
    t6 = (t0 + 11176);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 8);

LAB1:    return;
}

static void Cont_305_17(char *t0)
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
    char *t16;

LAB0:    t1 = (t0 + 26392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5496U);
    t3 = *((char **)t2);
    t2 = (t0 + 35536);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 33648);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_307_18(char *t0)
{
    char t6[8];
    char t19[8];
    char t48[8];
    char t61[8];
    char t92[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    unsigned int t98;
    int t99;

LAB0:    t1 = (t0 + 26640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 33664);
    *((int *)t2) = 1;
    t3 = (t0 + 26672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 5496U);
    t5 = *((char **)t4);
    t4 = (t0 + 8296);
    t7 = (t0 + 8296);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng0)));
    xsi_vlog_generic_convert_bit_index(t6, t9, 2, t10, 32, 1);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (!(t12));
    if (t13 == 1)
        goto LAB6;

LAB7:    t2 = (t0 + 8296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t14 = (t12 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t7);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t5) = t18;
    t8 = (t0 + 5496U);
    t9 = *((char **)t8);
    t20 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t9);
    t22 = (t20 & t21);
    *((unsigned int *)t19) = t22;
    t8 = (t6 + 4);
    t10 = (t9 + 4);
    t11 = (t19 + 4);
    t23 = *((unsigned int *)t8);
    t24 = *((unsigned int *)t10);
    t25 = (t23 | t24);
    *((unsigned int *)t11) = t25;
    t26 = *((unsigned int *)t11);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB8;

LAB9:
LAB10:    t47 = (t0 + 8296);
    t49 = (t0 + 8296);
    t50 = (t49 + 72U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t48, t51, 2, t52, 32, 1);
    t53 = (t48 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (!(t54));
    if (t55 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 8296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t14 = (t12 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t7);
    t17 = (t16 >> 1);
    t18 = (t17 & 1);
    *((unsigned int *)t5) = t18;
    t8 = (t0 + 8296);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t19, 0, 8);
    t11 = (t19 + 4);
    t30 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = (t20 >> 0);
    t22 = (t21 & 1);
    *((unsigned int *)t19) = t22;
    t23 = *((unsigned int *)t30);
    t24 = (t23 >> 0);
    t25 = (t24 & 1);
    *((unsigned int *)t11) = t25;
    t26 = *((unsigned int *)t6);
    t27 = *((unsigned int *)t19);
    t28 = (t26 & t27);
    *((unsigned int *)t48) = t28;
    t31 = (t6 + 4);
    t47 = (t19 + 4);
    t49 = (t48 + 4);
    t29 = *((unsigned int *)t31);
    t32 = *((unsigned int *)t47);
    t33 = (t29 | t32);
    *((unsigned int *)t49) = t33;
    t34 = *((unsigned int *)t49);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB13;

LAB14:
LAB15:    t52 = (t0 + 5496U);
    t53 = *((char **)t52);
    t62 = *((unsigned int *)t48);
    t63 = *((unsigned int *)t53);
    t64 = (t62 & t63);
    *((unsigned int *)t61) = t64;
    t52 = (t48 + 4);
    t65 = (t53 + 4);
    t66 = (t61 + 4);
    t67 = *((unsigned int *)t52);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB16;

LAB17:
LAB18:    t91 = (t0 + 8296);
    t93 = (t0 + 8296);
    t94 = (t93 + 72U);
    t95 = *((char **)t94);
    t96 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t92, t95, 2, t96, 32, 1);
    t97 = (t92 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (!(t98));
    if (t99 == 1)
        goto LAB19;

LAB20:    goto LAB2;

LAB6:    xsi_vlogvar_wait_assign_value(t4, t5, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB7;

LAB8:    t28 = *((unsigned int *)t19);
    t29 = *((unsigned int *)t11);
    *((unsigned int *)t19) = (t28 | t29);
    t30 = (t6 + 4);
    t31 = (t9 + 4);
    t32 = *((unsigned int *)t6);
    t33 = (~(t32));
    t34 = *((unsigned int *)t30);
    t35 = (~(t34));
    t36 = *((unsigned int *)t9);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (~(t38));
    t13 = (t33 & t35);
    t40 = (t37 & t39);
    t41 = (~(t13));
    t42 = (~(t40));
    t43 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t43 & t41);
    t44 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t44 & t42);
    t45 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t45 & t41);
    t46 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t46 & t42);
    goto LAB10;

LAB11:    xsi_vlogvar_wait_assign_value(t47, t19, 0, *((unsigned int *)t48), 1, 0LL);
    goto LAB12;

LAB13:    t36 = *((unsigned int *)t48);
    t37 = *((unsigned int *)t49);
    *((unsigned int *)t48) = (t36 | t37);
    t50 = (t6 + 4);
    t51 = (t19 + 4);
    t38 = *((unsigned int *)t6);
    t39 = (~(t38));
    t41 = *((unsigned int *)t50);
    t42 = (~(t41));
    t43 = *((unsigned int *)t19);
    t44 = (~(t43));
    t45 = *((unsigned int *)t51);
    t46 = (~(t45));
    t13 = (t39 & t42);
    t40 = (t44 & t46);
    t54 = (~(t13));
    t56 = (~(t40));
    t57 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t57 & t54);
    t58 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t58 & t56);
    t59 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t59 & t54);
    t60 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t60 & t56);
    goto LAB15;

LAB16:    t72 = *((unsigned int *)t61);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t61) = (t72 | t73);
    t74 = (t48 + 4);
    t75 = (t53 + 4);
    t76 = *((unsigned int *)t48);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t53);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t55 = (t77 & t79);
    t84 = (t81 & t83);
    t85 = (~(t55));
    t86 = (~(t84));
    t87 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t87 & t85);
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t89 & t85);
    t90 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t90 & t86);
    goto LAB18;

LAB19:    xsi_vlogvar_wait_assign_value(t91, t61, 0, *((unsigned int *)t92), 1, 0LL);
    goto LAB20;

}

static void Always_313_19(char *t0)
{
    char t6[8];
    char t30[8];
    char t38[8];
    char t54[8];
    char t62[8];
    char t103[8];
    char t111[8];
    char t116[8];
    char t151[8];
    char t156[8];
    char t189[8];
    char t213[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
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
    int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    int t140;
    int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t149;
    char *t150;
    char *t152;
    char *t153;
    char *t154;
    char *t155;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    char *t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    char *t170;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    int t180;
    int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    char *t188;
    char *t190;
    char *t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    char *t204;
    char *t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    char *t211;
    char *t212;

LAB0:    t1 = (t0 + 26888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 33680);
    *((int *)t2) = 1;
    t3 = (t0 + 26920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 5496U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    t2 = (t0 + 5496U);
    t3 = *((char **)t2);
    t2 = (t0 + 7976);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    t2 = (t0 + 7976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng0)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB16;

LAB13:    if (t18 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t6) = 1;

LAB16:    memset(t30, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t22) != 0)
        goto LAB19;

LAB20:    t29 = (t30 + 4);
    t31 = *((unsigned int *)t30);
    t32 = *((unsigned int *)t29);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB21;

LAB22:    memcpy(t62, t30, 8);

LAB23:    t94 = (t62 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t62);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB35;

LAB36:
LAB37:    t2 = (t0 + 7976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8136);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    t28 = ((char*)((ng0)));
    t29 = (t0 + 20616);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 1LL);
    goto LAB12;

LAB15:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t30) = 1;
    goto LAB20;

LAB19:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB20;

LAB21:    t34 = (t0 + 8136);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng7)));
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
        goto LAB27;

LAB24:    if (t50 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t38) = 1;

LAB27:    memset(t54, 0, 8);
    t55 = (t38 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t38);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t55) != 0)
        goto LAB30;

LAB31:    t63 = *((unsigned int *)t30);
    t64 = *((unsigned int *)t54);
    t65 = (t63 & t64);
    *((unsigned int *)t62) = t65;
    t66 = (t30 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB32;

LAB33:
LAB34:    goto LAB23;

LAB26:    t53 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB27;

LAB28:    *((unsigned int *)t54) = 1;
    goto LAB31;

LAB30:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB31;

LAB32:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t30 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t30);
    t79 = (~(t78));
    t80 = *((unsigned int *)t76);
    t81 = (~(t80));
    t82 = *((unsigned int *)t54);
    t83 = (~(t82));
    t84 = *((unsigned int *)t77);
    t85 = (~(t84));
    t86 = (t79 & t81);
    t87 = (t83 & t85);
    t88 = (~(t86));
    t89 = (~(t87));
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t91 & t89);
    t92 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t92 & t88);
    t93 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t93 & t89);
    goto LAB34;

LAB35:
LAB38:    t100 = (t0 + 8296);
    t101 = (t100 + 56U);
    t102 = *((char **)t101);
    t104 = (t0 + 8296);
    t105 = (t104 + 72U);
    t106 = *((char **)t105);
    t107 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t103, 32, t102, t106, 2, t107, 32, 1);
    t108 = (t0 + 8296);
    t109 = (t108 + 56U);
    t110 = *((char **)t109);
    t112 = (t0 + 8296);
    t113 = (t112 + 72U);
    t114 = *((char **)t113);
    t115 = ((char*)((ng7)));
    xsi_vlog_generic_get_index_select_value(t111, 32, t110, t114, 2, t115, 32, 1);
    t117 = *((unsigned int *)t103);
    t118 = *((unsigned int *)t111);
    t119 = (t117 & t118);
    *((unsigned int *)t116) = t119;
    t120 = (t103 + 4);
    t121 = (t111 + 4);
    t122 = (t116 + 4);
    t123 = *((unsigned int *)t120);
    t124 = *((unsigned int *)t121);
    t125 = (t123 | t124);
    *((unsigned int *)t122) = t125;
    t126 = *((unsigned int *)t122);
    t127 = (t126 != 0);
    if (t127 == 1)
        goto LAB39;

LAB40:
LAB41:    t148 = (t0 + 8296);
    t149 = (t148 + 56U);
    t150 = *((char **)t149);
    t152 = (t0 + 8296);
    t153 = (t152 + 72U);
    t154 = *((char **)t153);
    t155 = ((char*)((ng0)));
    xsi_vlog_generic_get_index_select_value(t151, 32, t150, t154, 2, t155, 32, 1);
    t157 = *((unsigned int *)t116);
    t158 = *((unsigned int *)t151);
    t159 = (t157 & t158);
    *((unsigned int *)t156) = t159;
    t160 = (t116 + 4);
    t161 = (t151 + 4);
    t162 = (t156 + 4);
    t163 = *((unsigned int *)t160);
    t164 = *((unsigned int *)t161);
    t165 = (t163 | t164);
    *((unsigned int *)t162) = t165;
    t166 = *((unsigned int *)t162);
    t167 = (t166 != 0);
    if (t167 == 1)
        goto LAB42;

LAB43:
LAB44:    t188 = ((char*)((ng0)));
    memset(t189, 0, 8);
    t190 = (t156 + 4);
    t191 = (t188 + 4);
    t192 = *((unsigned int *)t156);
    t193 = *((unsigned int *)t188);
    t194 = (t192 ^ t193);
    t195 = *((unsigned int *)t190);
    t196 = *((unsigned int *)t191);
    t197 = (t195 ^ t196);
    t198 = (t194 | t197);
    t199 = *((unsigned int *)t190);
    t200 = *((unsigned int *)t191);
    t201 = (t199 | t200);
    t202 = (~(t201));
    t203 = (t198 & t202);
    if (t203 != 0)
        goto LAB48;

LAB45:    if (t201 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t189) = 1;

LAB48:    t205 = (t189 + 4);
    t206 = *((unsigned int *)t205);
    t207 = (~(t206));
    t208 = *((unsigned int *)t189);
    t209 = (t208 & t207);
    t210 = (t209 != 0);
    if (t210 > 0)
        goto LAB49;

LAB50:
LAB51:    goto LAB37;

LAB39:    t128 = *((unsigned int *)t116);
    t129 = *((unsigned int *)t122);
    *((unsigned int *)t116) = (t128 | t129);
    t130 = (t103 + 4);
    t131 = (t111 + 4);
    t132 = *((unsigned int *)t103);
    t133 = (~(t132));
    t134 = *((unsigned int *)t130);
    t135 = (~(t134));
    t136 = *((unsigned int *)t111);
    t137 = (~(t136));
    t138 = *((unsigned int *)t131);
    t139 = (~(t138));
    t140 = (t133 & t135);
    t141 = (t137 & t139);
    t142 = (~(t140));
    t143 = (~(t141));
    t144 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t144 & t142);
    t145 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t145 & t143);
    t146 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t146 & t142);
    t147 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t147 & t143);
    goto LAB41;

LAB42:    t168 = *((unsigned int *)t156);
    t169 = *((unsigned int *)t162);
    *((unsigned int *)t156) = (t168 | t169);
    t170 = (t116 + 4);
    t171 = (t151 + 4);
    t172 = *((unsigned int *)t116);
    t173 = (~(t172));
    t174 = *((unsigned int *)t170);
    t175 = (~(t174));
    t176 = *((unsigned int *)t151);
    t177 = (~(t176));
    t178 = *((unsigned int *)t171);
    t179 = (~(t178));
    t180 = (t173 & t175);
    t181 = (t177 & t179);
    t182 = (~(t180));
    t183 = (~(t181));
    t184 = *((unsigned int *)t162);
    *((unsigned int *)t162) = (t184 & t182);
    t185 = *((unsigned int *)t162);
    *((unsigned int *)t162) = (t185 & t183);
    t186 = *((unsigned int *)t156);
    *((unsigned int *)t156) = (t186 & t182);
    t187 = *((unsigned int *)t156);
    *((unsigned int *)t156) = (t187 & t183);
    goto LAB44;

LAB47:    t204 = (t189 + 4);
    *((unsigned int *)t189) = 1;
    *((unsigned int *)t204) = 1;
    goto LAB48;

LAB49:
LAB52:    t211 = ((char*)((ng7)));
    t212 = (t0 + 20616);
    xsi_vlogvar_assign_value(t212, t211, 0, 0, 1);
    t2 = xsi_vlog_time(t213, 1.0000000000000000, 1.0000000000000000);
    xsi_vlogfile_write(1, 0, 0, ng30, 2, t0, (char)118, t213, 64);
    goto LAB51;

}

static void Cont_330_20(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 27136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 20616);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t41, 8);

LAB20:    t40 = (t0 + 35600);
    t42 = (t40 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 1U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t40, 0, 0);
    t54 = (t0 + 33696);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng31)));
    goto LAB13;

LAB14:    t40 = (t0 + 6136U);
    t41 = *((char **)t40);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t35, 1, t41, 1);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}

static void Always_337_21(char *t0)
{
    char t6[8];
    char t31[16];
    char t50[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    char *t47;
    unsigned int t48;
    char *t49;

LAB0:    t1 = (t0 + 27384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 33712);
    *((int *)t2) = 1;
    t3 = (t0 + 27416);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 5496U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:
LAB21:    t2 = (t0 + 4856U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB25;

LAB22:    if (t18 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t6) = 1;

LAB25:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB26;

LAB27:
LAB28:
LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:
LAB12:    t28 = (t0 + 11976);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t31, t30, 8);
    t32 = (t31 + 8);
    memset(t32, 0, 8);
    t35 = *((unsigned int *)t30);
    t36 = (t35 & 2147483648U);
    t33 = t36;
    t37 = (t30 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (t38 & 2147483648U);
    t34 = t39;
    t40 = (t36 != 0);
    if (t40 == 1)
        goto LAB13;

LAB14:    t44 = (t39 != 0);
    if (t44 == 1)
        goto LAB15;

LAB16:    t49 = (t0 + 15176);
    xsi_vlogvar_wait_assign_value(t49, t31, 0, 0, 64, 0LL);
    t2 = (t0 + 11976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t31, t4, 8);
    t5 = (t31 + 8);
    memset(t5, 0, 8);
    t11 = *((unsigned int *)t4);
    t12 = (t11 & 2147483648U);
    t9 = t12;
    t7 = (t4 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 & 2147483648U);
    t10 = t14;
    t15 = (t12 != 0);
    if (t15 == 1)
        goto LAB17;

LAB18:    t18 = (t14 != 0);
    if (t18 == 1)
        goto LAB19;

LAB20:    t28 = (t0 + 15336);
    xsi_vlogvar_wait_assign_value(t28, t31, 0, 0, 64, 0LL);
    t2 = ((char*)((ng32)));
    t3 = (t0 + 15016);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 13576);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB11;

LAB13:    t41 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t41 | 0U);
    t42 = (t31 + 8);
    t43 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t43 | 4294967295U);
    goto LAB14;

LAB15:    t45 = (t31 + 4);
    t46 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t46 | 0U);
    t47 = (t31 + 12);
    t48 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t48 | 4294967295U);
    goto LAB16;

LAB17:    t16 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t16 | 0U);
    t8 = (t31 + 8);
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 | 4294967295U);
    goto LAB18;

LAB19:    t21 = (t31 + 4);
    t19 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t19 | 0U);
    t22 = (t31 + 12);
    t20 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t20 | 4294967295U);
    goto LAB20;

LAB24:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB25;

LAB26:
LAB29:    t21 = xsi_vlog_time(t31, 1.0000000000000000, 1.0000000000000000);
    t22 = (t0 + 15016);
    xsi_vlogvar_wait_assign_value(t22, t31, 0, 0, 64, 0LL);
    t2 = (t0 + 15016);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng32)));
    xsi_vlog_unsigned_not_equal(t31, 64, t4, 64, t5, 32);
    t7 = (t31 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t31);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB30;

LAB31:
LAB32:    goto LAB28;

LAB30:
LAB33:    t8 = (t0 + 15176);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    t28 = (t0 + 15336);
    xsi_vlogvar_wait_assign_value(t28, t22, 0, 0, 64, 0LL);
    t2 = xsi_vlog_time(t31, 1.0000000000000000, 1.0000000000000000);
    t3 = (t0 + 15016);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    xsi_vlog_unsigned_minus(t50, 64, t31, 64, t5, 64);
    t7 = (t0 + 15176);
    xsi_vlogvar_wait_assign_value(t7, t50, 0, 0, 64, 0LL);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 13576);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB32;

}

static void Always_355_22(char *t0)
{
    char t6[8];
    char t30[8];
    char t56[8];
    char t58[16];
    char t59[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t57;
    char *t60;
    char *t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    int t73;
    int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;

LAB0:    t1 = (t0 + 27632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 33728);
    *((int *)t2) = 1;
    t3 = (t0 + 27664);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 5496U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:
LAB13:    t2 = (t0 + 9736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng0)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:
LAB20:
LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:
LAB12:    t28 = ((char*)((ng0)));
    t29 = (t0 + 12136);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 32, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 9736);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB11;

LAB16:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB17;

LAB18:
LAB21:    t28 = (t0 + 4856U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng0)));
    memset(t30, 0, 8);
    t31 = (t29 + 4);
    t32 = (t28 + 4);
    t33 = *((unsigned int *)t29);
    t34 = *((unsigned int *)t28);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB25;

LAB22:    if (t42 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t30) = 1;

LAB25:    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB26;

LAB27:
LAB34:    t2 = (t0 + 15176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15336);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_unsigned_equal(t58, 64, t4, 64, t8, 64);
    memset(t6, 0, 8);
    t21 = (t58 + 4);
    t9 = *((unsigned int *)t21);
    t10 = (~(t9));
    t11 = *((unsigned int *)t58);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t21) != 0)
        goto LAB37;

LAB38:    t28 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t28);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB39;

LAB40:    memcpy(t59, t6, 8);

LAB41:    t81 = (t59 + 4);
    t82 = *((unsigned int *)t81);
    t83 = (~(t82));
    t84 = *((unsigned int *)t59);
    t85 = (t84 & t83);
    t86 = (t85 != 0);
    if (t86 > 0)
        goto LAB53;

LAB54:
LAB55:
LAB28:    goto LAB20;

LAB24:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB25;

LAB26:
LAB29:    t52 = (t0 + 12136);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng7)));
    memset(t56, 0, 8);
    xsi_vlog_signed_add(t56, 32, t54, 32, t55, 32);
    t57 = (t0 + 12136);
    xsi_vlogvar_wait_assign_value(t57, t56, 0, 0, 32, 0LL);
    t2 = (t0 + 12136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng33)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB30;

LAB31:
LAB32:    goto LAB28;

LAB30:
LAB33:    t8 = ((char*)((ng7)));
    t21 = (t0 + 9736);
    xsi_vlogvar_wait_assign_value(t21, t8, 0, 0, 1, 0LL);
    goto LAB32;

LAB35:    *((unsigned int *)t6) = 1;
    goto LAB38;

LAB37:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB38;

LAB39:    t29 = (t0 + 13576);
    t31 = (t29 + 56U);
    t32 = *((char **)t31);
    t45 = ((char*)((ng7)));
    memset(t30, 0, 8);
    t46 = (t32 + 4);
    t52 = (t45 + 4);
    t17 = *((unsigned int *)t32);
    t18 = *((unsigned int *)t45);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t46);
    t23 = *((unsigned int *)t52);
    t24 = (t20 ^ t23);
    t25 = (t19 | t24);
    t26 = *((unsigned int *)t46);
    t27 = *((unsigned int *)t52);
    t33 = (t26 | t27);
    t34 = (~(t33));
    t35 = (t25 & t34);
    if (t35 != 0)
        goto LAB45;

LAB42:    if (t33 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t30) = 1;

LAB45:    memset(t56, 0, 8);
    t54 = (t30 + 4);
    t36 = *((unsigned int *)t54);
    t37 = (~(t36));
    t38 = *((unsigned int *)t30);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t54) != 0)
        goto LAB48;

LAB49:    t41 = *((unsigned int *)t6);
    t42 = *((unsigned int *)t56);
    t43 = (t41 & t42);
    *((unsigned int *)t59) = t43;
    t57 = (t6 + 4);
    t60 = (t56 + 4);
    t61 = (t59 + 4);
    t44 = *((unsigned int *)t57);
    t47 = *((unsigned int *)t60);
    t48 = (t44 | t47);
    *((unsigned int *)t61) = t48;
    t49 = *((unsigned int *)t61);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB41;

LAB44:    t53 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB45;

LAB46:    *((unsigned int *)t56) = 1;
    goto LAB49;

LAB48:    t55 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB49;

LAB50:    t51 = *((unsigned int *)t59);
    t62 = *((unsigned int *)t61);
    *((unsigned int *)t59) = (t51 | t62);
    t63 = (t6 + 4);
    t64 = (t56 + 4);
    t65 = *((unsigned int *)t6);
    t66 = (~(t65));
    t67 = *((unsigned int *)t63);
    t68 = (~(t67));
    t69 = *((unsigned int *)t56);
    t70 = (~(t69));
    t71 = *((unsigned int *)t64);
    t72 = (~(t71));
    t73 = (t66 & t68);
    t74 = (t70 & t72);
    t75 = (~(t73));
    t76 = (~(t74));
    t77 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t77 & t75);
    t78 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t78 & t76);
    t79 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t79 & t75);
    t80 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t80 & t76);
    goto LAB52;

LAB53:    t87 = ((char*)((ng7)));
    t88 = (t0 + 9736);
    xsi_vlogvar_wait_assign_value(t88, t87, 0, 0, 1, 0LL);
    goto LAB55;

}

static void Always_380_23(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    double t30;
    double t31;

LAB0:    t1 = (t0 + 27880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 33744);
    *((int *)t2) = 1;
    t3 = (t0 + 27912);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 5816U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:    t2 = (t0 + 13096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB16;

LAB13:    if (t18 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t6) = 1;

LAB16:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB17;

LAB18:
LAB20:    t2 = (t0 + 9736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8616);
    t7 = (t0 + 15496);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    t30 = xsi_vlog_convert_to_real(t21, 64, 2);
    t31 = (t30 < 0.00000000000000000);
    if (t31 == 1)
        goto LAB21;

LAB22:    t30 = (t30 + 0.50000000000000000);
    t30 = ((int64)(t30));

LAB23:    t30 = (t30 * 1.0000000000000000);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, t30);
    t2 = (t0 + 9736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8776);
    t7 = (t0 + 15496);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    t30 = xsi_vlog_convert_to_real(t21, 64, 2);
    t31 = (t30 < 0.00000000000000000);
    if (t31 == 1)
        goto LAB24;

LAB25:    t30 = (t30 + 0.50000000000000000);
    t30 = ((int64)(t30));

LAB26:    t30 = (t30 * 1.0000000000000000);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, t30);
    t2 = (t0 + 9736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9576);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 1LL);
    t2 = (t0 + 9736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9416);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 2LL);

LAB19:
LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:
LAB12:    t28 = ((char*)((ng0)));
    t29 = (t0 + 8616);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 8776);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 9576);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 9416);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB11;

LAB15:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB16;

LAB17:    t28 = ((char*)((ng0)));
    t29 = (t0 + 8776);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB19;

LAB21:    t30 = 0.00000000000000000;
    goto LAB23;

LAB24:    t30 = 0.00000000000000000;
    goto LAB26;

}

static void Cont_398_24(char *t0)
{
    char t5[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;

LAB0:    t1 = (t0 + 28128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8616);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 10056);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t5, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t9) == 0)
        goto LAB4;

LAB6:    t15 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t15) = 1;

LAB7:    t16 = (t5 + 4);
    t17 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = (~(t18));
    *((unsigned int *)t5) = t19;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB9;

LAB8:    t24 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t24 & 1U);
    t25 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t25 & 1U);
    t27 = *((unsigned int *)t4);
    t28 = *((unsigned int *)t5);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t4 + 4);
    t31 = (t5 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB10;

LAB11:
LAB12:    t58 = (t0 + 35664);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    memset(t62, 0, 8);
    t63 = 1U;
    t64 = t63;
    t65 = (t26 + 4);
    t66 = *((unsigned int *)t26);
    t63 = (t63 & t66);
    t67 = *((unsigned int *)t65);
    t64 = (t64 & t67);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t69 | t63);
    t70 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t70 | t64);
    xsi_driver_vfirst_trans(t58, 0, 0);
    t71 = (t0 + 33760);
    *((int *)t71) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB9:    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t17);
    *((unsigned int *)t5) = (t20 | t21);
    t22 = *((unsigned int *)t16);
    t23 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t22 | t23);
    goto LAB8;

LAB10:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t4 + 4);
    t41 = (t5 + 4);
    t42 = *((unsigned int *)t4);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t5);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB12;

}

static void Cont_400_25(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t9[8];
    char t25[8];
    char t26[8];
    char t34[8];
    char t66[8];
    char t83[8];
    char t84[8];
    char t100[8];
    char t101[8];
    char t109[8];
    char t141[8];
    char t157[8];
    char t173[8];
    char t181[8];
    char t213[8];
    char t221[8];
    char t263[8];
    char t284[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    int t133;
    int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    char *t154;
    char *t155;
    char *t156;
    char *t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    char *t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    char *t180;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    char *t185;
    char *t186;
    char *t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    char *t195;
    char *t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    int t205;
    int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    char *t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    char *t220;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    char *t225;
    char *t226;
    char *t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    char *t235;
    char *t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    char *t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    char *t255;
    char *t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    char *t260;
    char *t261;
    char *t262;
    char *t264;
    char *t265;
    char *t266;
    char *t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    char *t273;
    char *t274;
    char *t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t285;
    unsigned int t286;
    unsigned int t287;
    char *t288;
    char *t289;
    char *t290;
    unsigned int t291;
    unsigned int t292;
    unsigned int t293;
    unsigned int t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    char *t298;
    char *t299;
    unsigned int t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    int t308;
    int t309;
    unsigned int t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    unsigned int t316;
    unsigned int t317;
    unsigned int t318;
    unsigned int t319;
    char *t320;
    char *t321;
    char *t322;
    char *t323;
    char *t324;
    char *t325;
    unsigned int t326;
    unsigned int t327;
    char *t328;
    unsigned int t329;
    unsigned int t330;
    char *t331;
    unsigned int t332;
    unsigned int t333;
    char *t334;

LAB0:    t1 = (t0 + 28376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 15656);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng0)));
    memset(t8, 0, 8);
    xsi_vlog_signed_greatereq(t8, 32, t6, 32, t7, 32);
    memset(t9, 0, 8);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t10) != 0)
        goto LAB6;

LAB7:    t17 = (t9 + 4);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t17);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB8;

LAB9:    memcpy(t34, t9, 8);

LAB10:    memset(t66, 0, 8);
    t67 = (t34 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t34);
    t71 = (t70 & t69);
    t72 = (t71 & 1U);
    if (t72 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t67) != 0)
        goto LAB20;

LAB21:    t74 = (t66 + 4);
    t75 = *((unsigned int *)t66);
    t76 = (!(t75));
    t77 = *((unsigned int *)t74);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB22;

LAB23:    memcpy(t221, t66, 8);

LAB24:    memset(t4, 0, 8);
    t249 = (t221 + 4);
    t250 = *((unsigned int *)t249);
    t251 = (~(t250));
    t252 = *((unsigned int *)t221);
    t253 = (t252 & t251);
    t254 = (t253 & 1U);
    if (t254 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t249) != 0)
        goto LAB66;

LAB67:    t256 = (t4 + 4);
    t257 = *((unsigned int *)t4);
    t258 = *((unsigned int *)t256);
    t259 = (t257 || t258);
    if (t259 > 0)
        goto LAB68;

LAB69:    t316 = *((unsigned int *)t4);
    t317 = (~(t316));
    t318 = *((unsigned int *)t256);
    t319 = (t317 || t318);
    if (t319 > 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t256) > 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t4) > 0)
        goto LAB74;

LAB75:    memcpy(t3, t320, 8);

LAB76:    t321 = (t0 + 35728);
    t322 = (t321 + 56U);
    t323 = *((char **)t322);
    t324 = (t323 + 56U);
    t325 = *((char **)t324);
    memset(t325, 0, 8);
    t326 = 1U;
    t327 = t326;
    t328 = (t3 + 4);
    t329 = *((unsigned int *)t3);
    t326 = (t326 & t329);
    t330 = *((unsigned int *)t328);
    t327 = (t327 & t330);
    t331 = (t325 + 4);
    t332 = *((unsigned int *)t325);
    *((unsigned int *)t325) = (t332 | t326);
    t333 = *((unsigned int *)t331);
    *((unsigned int *)t331) = (t333 | t327);
    xsi_driver_vfirst_trans(t321, 0, 0);
    t334 = (t0 + 33776);
    *((int *)t334) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB6:    t16 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB7;

LAB8:    t21 = (t0 + 15656);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng1)));
    memset(t25, 0, 8);
    xsi_vlog_signed_leq(t25, 32, t23, 32, t24, 32);
    memset(t26, 0, 8);
    t27 = (t25 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t25);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t27) != 0)
        goto LAB13;

LAB14:    t35 = *((unsigned int *)t9);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t9 + 4);
    t39 = (t26 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t26) = 1;
    goto LAB14;

LAB13:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB14;

LAB15:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t9 + 4);
    t49 = (t26 + 4);
    t50 = *((unsigned int *)t9);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB17;

LAB18:    *((unsigned int *)t66) = 1;
    goto LAB21;

LAB20:    t73 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB21;

LAB22:    t79 = (t0 + 15656);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    t82 = ((char*)((ng19)));
    memset(t83, 0, 8);
    xsi_vlog_signed_greatereq(t83, 32, t81, 32, t82, 32);
    memset(t84, 0, 8);
    t85 = (t83 + 4);
    t86 = *((unsigned int *)t85);
    t87 = (~(t86));
    t88 = *((unsigned int *)t83);
    t89 = (t88 & t87);
    t90 = (t89 & 1U);
    if (t90 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t85) != 0)
        goto LAB27;

LAB28:    t92 = (t84 + 4);
    t93 = *((unsigned int *)t84);
    t94 = *((unsigned int *)t92);
    t95 = (t93 || t94);
    if (t95 > 0)
        goto LAB29;

LAB30:    memcpy(t109, t84, 8);

LAB31:    memset(t141, 0, 8);
    t142 = (t109 + 4);
    t143 = *((unsigned int *)t142);
    t144 = (~(t143));
    t145 = *((unsigned int *)t109);
    t146 = (t145 & t144);
    t147 = (t146 & 1U);
    if (t147 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t142) != 0)
        goto LAB41;

LAB42:    t149 = (t141 + 4);
    t150 = *((unsigned int *)t141);
    t151 = *((unsigned int *)t149);
    t152 = (t150 || t151);
    if (t152 > 0)
        goto LAB43;

LAB44:    memcpy(t181, t141, 8);

LAB45:    memset(t213, 0, 8);
    t214 = (t181 + 4);
    t215 = *((unsigned int *)t214);
    t216 = (~(t215));
    t217 = *((unsigned int *)t181);
    t218 = (t217 & t216);
    t219 = (t218 & 1U);
    if (t219 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t214) != 0)
        goto LAB59;

LAB60:    t222 = *((unsigned int *)t66);
    t223 = *((unsigned int *)t213);
    t224 = (t222 | t223);
    *((unsigned int *)t221) = t224;
    t225 = (t66 + 4);
    t226 = (t213 + 4);
    t227 = (t221 + 4);
    t228 = *((unsigned int *)t225);
    t229 = *((unsigned int *)t226);
    t230 = (t228 | t229);
    *((unsigned int *)t227) = t230;
    t231 = *((unsigned int *)t227);
    t232 = (t231 != 0);
    if (t232 == 1)
        goto LAB61;

LAB62:
LAB63:    goto LAB24;

LAB25:    *((unsigned int *)t84) = 1;
    goto LAB28;

LAB27:    t91 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB28;

LAB29:    t96 = (t0 + 15656);
    t97 = (t96 + 56U);
    t98 = *((char **)t97);
    t99 = ((char*)((ng22)));
    memset(t100, 0, 8);
    xsi_vlog_signed_leq(t100, 32, t98, 32, t99, 32);
    memset(t101, 0, 8);
    t102 = (t100 + 4);
    t103 = *((unsigned int *)t102);
    t104 = (~(t103));
    t105 = *((unsigned int *)t100);
    t106 = (t105 & t104);
    t107 = (t106 & 1U);
    if (t107 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t102) != 0)
        goto LAB34;

LAB35:    t110 = *((unsigned int *)t84);
    t111 = *((unsigned int *)t101);
    t112 = (t110 & t111);
    *((unsigned int *)t109) = t112;
    t113 = (t84 + 4);
    t114 = (t101 + 4);
    t115 = (t109 + 4);
    t116 = *((unsigned int *)t113);
    t117 = *((unsigned int *)t114);
    t118 = (t116 | t117);
    *((unsigned int *)t115) = t118;
    t119 = *((unsigned int *)t115);
    t120 = (t119 != 0);
    if (t120 == 1)
        goto LAB36;

LAB37:
LAB38:    goto LAB31;

LAB32:    *((unsigned int *)t101) = 1;
    goto LAB35;

LAB34:    t108 = (t101 + 4);
    *((unsigned int *)t101) = 1;
    *((unsigned int *)t108) = 1;
    goto LAB35;

LAB36:    t121 = *((unsigned int *)t109);
    t122 = *((unsigned int *)t115);
    *((unsigned int *)t109) = (t121 | t122);
    t123 = (t84 + 4);
    t124 = (t101 + 4);
    t125 = *((unsigned int *)t84);
    t126 = (~(t125));
    t127 = *((unsigned int *)t123);
    t128 = (~(t127));
    t129 = *((unsigned int *)t101);
    t130 = (~(t129));
    t131 = *((unsigned int *)t124);
    t132 = (~(t131));
    t133 = (t126 & t128);
    t134 = (t130 & t132);
    t135 = (~(t133));
    t136 = (~(t134));
    t137 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t137 & t135);
    t138 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t138 & t136);
    t139 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t139 & t135);
    t140 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t140 & t136);
    goto LAB38;

LAB39:    *((unsigned int *)t141) = 1;
    goto LAB42;

LAB41:    t148 = (t141 + 4);
    *((unsigned int *)t141) = 1;
    *((unsigned int *)t148) = 1;
    goto LAB42;

LAB43:    t153 = (t0 + 17896);
    t154 = (t153 + 56U);
    t155 = *((char **)t154);
    t156 = ((char*)((ng0)));
    memset(t157, 0, 8);
    t158 = (t155 + 4);
    t159 = (t156 + 4);
    t160 = *((unsigned int *)t155);
    t161 = *((unsigned int *)t156);
    t162 = (t160 ^ t161);
    t163 = *((unsigned int *)t158);
    t164 = *((unsigned int *)t159);
    t165 = (t163 ^ t164);
    t166 = (t162 | t165);
    t167 = *((unsigned int *)t158);
    t168 = *((unsigned int *)t159);
    t169 = (t167 | t168);
    t170 = (~(t169));
    t171 = (t166 & t170);
    if (t171 != 0)
        goto LAB49;

LAB46:    if (t169 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t157) = 1;

LAB49:    memset(t173, 0, 8);
    t174 = (t157 + 4);
    t175 = *((unsigned int *)t174);
    t176 = (~(t175));
    t177 = *((unsigned int *)t157);
    t178 = (t177 & t176);
    t179 = (t178 & 1U);
    if (t179 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t174) != 0)
        goto LAB52;

LAB53:    t182 = *((unsigned int *)t141);
    t183 = *((unsigned int *)t173);
    t184 = (t182 & t183);
    *((unsigned int *)t181) = t184;
    t185 = (t141 + 4);
    t186 = (t173 + 4);
    t187 = (t181 + 4);
    t188 = *((unsigned int *)t185);
    t189 = *((unsigned int *)t186);
    t190 = (t188 | t189);
    *((unsigned int *)t187) = t190;
    t191 = *((unsigned int *)t187);
    t192 = (t191 != 0);
    if (t192 == 1)
        goto LAB54;

LAB55:
LAB56:    goto LAB45;

LAB48:    t172 = (t157 + 4);
    *((unsigned int *)t157) = 1;
    *((unsigned int *)t172) = 1;
    goto LAB49;

LAB50:    *((unsigned int *)t173) = 1;
    goto LAB53;

LAB52:    t180 = (t173 + 4);
    *((unsigned int *)t173) = 1;
    *((unsigned int *)t180) = 1;
    goto LAB53;

LAB54:    t193 = *((unsigned int *)t181);
    t194 = *((unsigned int *)t187);
    *((unsigned int *)t181) = (t193 | t194);
    t195 = (t141 + 4);
    t196 = (t173 + 4);
    t197 = *((unsigned int *)t141);
    t198 = (~(t197));
    t199 = *((unsigned int *)t195);
    t200 = (~(t199));
    t201 = *((unsigned int *)t173);
    t202 = (~(t201));
    t203 = *((unsigned int *)t196);
    t204 = (~(t203));
    t205 = (t198 & t200);
    t206 = (t202 & t204);
    t207 = (~(t205));
    t208 = (~(t206));
    t209 = *((unsigned int *)t187);
    *((unsigned int *)t187) = (t209 & t207);
    t210 = *((unsigned int *)t187);
    *((unsigned int *)t187) = (t210 & t208);
    t211 = *((unsigned int *)t181);
    *((unsigned int *)t181) = (t211 & t207);
    t212 = *((unsigned int *)t181);
    *((unsigned int *)t181) = (t212 & t208);
    goto LAB56;

LAB57:    *((unsigned int *)t213) = 1;
    goto LAB60;

LAB59:    t220 = (t213 + 4);
    *((unsigned int *)t213) = 1;
    *((unsigned int *)t220) = 1;
    goto LAB60;

LAB61:    t233 = *((unsigned int *)t221);
    t234 = *((unsigned int *)t227);
    *((unsigned int *)t221) = (t233 | t234);
    t235 = (t66 + 4);
    t236 = (t213 + 4);
    t237 = *((unsigned int *)t235);
    t238 = (~(t237));
    t239 = *((unsigned int *)t66);
    t240 = (t239 & t238);
    t241 = *((unsigned int *)t236);
    t242 = (~(t241));
    t243 = *((unsigned int *)t213);
    t244 = (t243 & t242);
    t245 = (~(t240));
    t246 = (~(t244));
    t247 = *((unsigned int *)t227);
    *((unsigned int *)t227) = (t247 & t245);
    t248 = *((unsigned int *)t227);
    *((unsigned int *)t227) = (t248 & t246);
    goto LAB63;

LAB64:    *((unsigned int *)t4) = 1;
    goto LAB67;

LAB66:    t255 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t255) = 1;
    goto LAB67;

LAB68:    t260 = (t0 + 8776);
    t261 = (t260 + 56U);
    t262 = *((char **)t261);
    t264 = (t0 + 10056);
    t265 = (t264 + 56U);
    t266 = *((char **)t265);
    memset(t263, 0, 8);
    t267 = (t266 + 4);
    t268 = *((unsigned int *)t267);
    t269 = (~(t268));
    t270 = *((unsigned int *)t266);
    t271 = (t270 & t269);
    t272 = (t271 & 1U);
    if (t272 != 0)
        goto LAB80;

LAB78:    if (*((unsigned int *)t267) == 0)
        goto LAB77;

LAB79:    t273 = (t263 + 4);
    *((unsigned int *)t263) = 1;
    *((unsigned int *)t273) = 1;

LAB80:    t274 = (t263 + 4);
    t275 = (t266 + 4);
    t276 = *((unsigned int *)t266);
    t277 = (~(t276));
    *((unsigned int *)t263) = t277;
    *((unsigned int *)t274) = 0;
    if (*((unsigned int *)t275) != 0)
        goto LAB82;

LAB81:    t282 = *((unsigned int *)t263);
    *((unsigned int *)t263) = (t282 & 4294967295U);
    t283 = *((unsigned int *)t274);
    *((unsigned int *)t274) = (t283 & 4294967295U);
    t285 = *((unsigned int *)t262);
    t286 = *((unsigned int *)t263);
    t287 = (t285 & t286);
    *((unsigned int *)t284) = t287;
    t288 = (t262 + 4);
    t289 = (t263 + 4);
    t290 = (t284 + 4);
    t291 = *((unsigned int *)t288);
    t292 = *((unsigned int *)t289);
    t293 = (t291 | t292);
    *((unsigned int *)t290) = t293;
    t294 = *((unsigned int *)t290);
    t295 = (t294 != 0);
    if (t295 == 1)
        goto LAB83;

LAB84:
LAB85:    goto LAB69;

LAB70:    t320 = ((char*)((ng0)));
    goto LAB71;

LAB72:    xsi_vlog_unsigned_bit_combine(t3, 32, t284, 32, t320, 32);
    goto LAB76;

LAB74:    memcpy(t3, t284, 8);
    goto LAB76;

LAB77:    *((unsigned int *)t263) = 1;
    goto LAB80;

LAB82:    t278 = *((unsigned int *)t263);
    t279 = *((unsigned int *)t275);
    *((unsigned int *)t263) = (t278 | t279);
    t280 = *((unsigned int *)t274);
    t281 = *((unsigned int *)t275);
    *((unsigned int *)t274) = (t280 | t281);
    goto LAB81;

LAB83:    t296 = *((unsigned int *)t284);
    t297 = *((unsigned int *)t290);
    *((unsigned int *)t284) = (t296 | t297);
    t298 = (t262 + 4);
    t299 = (t263 + 4);
    t300 = *((unsigned int *)t262);
    t301 = (~(t300));
    t302 = *((unsigned int *)t298);
    t303 = (~(t302));
    t304 = *((unsigned int *)t263);
    t305 = (~(t304));
    t306 = *((unsigned int *)t299);
    t307 = (~(t306));
    t308 = (t301 & t303);
    t309 = (t305 & t307);
    t310 = (~(t308));
    t311 = (~(t309));
    t312 = *((unsigned int *)t290);
    *((unsigned int *)t290) = (t312 & t310);
    t313 = *((unsigned int *)t290);
    *((unsigned int *)t290) = (t313 & t311);
    t314 = *((unsigned int *)t284);
    *((unsigned int *)t284) = (t314 & t310);
    t315 = *((unsigned int *)t284);
    *((unsigned int *)t284) = (t315 & t311);
    goto LAB85;

}

static void Always_406_26(char *t0)
{
    char t8[16];
    char t10[16];
    char t12[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t11;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    double t41;
    double t42;

LAB0:    t1 = (t0 + 28624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 33792);
    *((int *)t2) = 1;
    t3 = (t0 + 28656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 15176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng34)));
    xsi_vlog_unsigned_divide(t8, 64, t6, 64, t7, 32);
    t9 = ((char*)((ng35)));
    xsi_vlog_unsigned_minus(t10, 64, t8, 64, t9, 32);
    t11 = (t0 + 15496);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 64);
    t2 = (t0 + 9736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t12, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t7);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t7);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB9;

LAB6:    if (t22 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t12) = 1;

LAB9:    t11 = (t12 + 4);
    t25 = *((unsigned int *)t11);
    t26 = (~(t25));
    t27 = *((unsigned int *)t12);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t9 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB10:
LAB13:    t30 = (t0 + 15176);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t0 + 14216);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_unsigned_multiply(t8, 64, t32, 64, t35, 32);
    t36 = (t0 + 13896);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlog_unsigned_divide(t10, 64, t8, 64, t38, 32);
    t39 = (t0 + 18376);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 32);
    t2 = (t0 + 18056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng0)));
    memset(t12, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t7);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t7);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB17;

LAB14:    if (t22 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t12) = 1;

LAB17:    t11 = (t12 + 4);
    t25 = *((unsigned int *)t11);
    t26 = (~(t25));
    t27 = *((unsigned int *)t12);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB18;

LAB19:
LAB20:    t2 = (t0 + 18376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t12, 0, 8);
    xsi_vlog_signed_divide(t12, 32, t4, 32, t5, 32);
    t6 = (t0 + 18696);
    xsi_vlogvar_assign_value(t6, t12, 0, 0, 32);
    t2 = (t0 + 18696);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t12, 0, 8);
    xsi_vlog_signed_minus(t12, 32, t4, 32, t5, 32);
    t6 = (t0 + 18856);
    xsi_vlogvar_assign_value(t6, t12, 0, 0, 32);
    t2 = (t0 + 18376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 18696);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t12, 0, 8);
    xsi_vlog_signed_minus(t12, 32, t4, 32, t7, 32);
    t9 = (t0 + 19976);
    xsi_vlogvar_assign_value(t9, t12, 0, 0, 32);
    t2 = (t0 + 15176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng34)));
    xsi_vlog_unsigned_multiply(t8, 64, t4, 64, t5, 32);
    t6 = ((char*)((ng36)));
    xsi_vlog_unsigned_divide(t10, 64, t8, 64, t6, 32);
    t7 = (t0 + 11336);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    t2 = (t0 + 18376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t12, 0, 8);
    xsi_vlog_signed_multiply(t12, 32, t4, 32, t5, 32);
    t6 = ((char*)((ng37)));
    memset(t40, 0, 8);
    xsi_vlog_signed_divide(t40, 32, t12, 32, t6, 32);
    t7 = (t0 + 11496);
    xsi_vlogvar_assign_value(t7, t40, 0, 0, 32);
    t2 = (t0 + 13896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng38)));
    memset(t12, 0, 8);
    xsi_vlog_signed_multiply(t12, 32, t4, 32, t5, 32);
    t6 = (t0 + 14216);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memset(t40, 0, 8);
    xsi_vlog_signed_divide(t40, 32, t12, 32, t9, 32);
    t11 = (t0 + 15816);
    xsi_vlogvar_assign_value(t11, t40, 0, 0, 32);
    t2 = (t0 + 15816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t12, 0, 8);
    xsi_vlog_signed_divide(t12, 32, t4, 32, t5, 32);
    t6 = (t0 + 15976);
    xsi_vlogvar_assign_value(t6, t12, 0, 0, 32);
    t2 = (t0 + 15816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15976);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t12, 0, 8);
    xsi_vlog_signed_minus(t12, 32, t4, 32, t7, 32);
    t9 = (t0 + 16136);
    xsi_vlogvar_assign_value(t9, t12, 0, 0, 32);
    t2 = (t0 + 15976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t12, 0, 8);
    xsi_vlog_signed_divide(t12, 32, t4, 32, t5, 32);
    t6 = (t0 + 16296);
    xsi_vlogvar_assign_value(t6, t12, 0, 0, 32);
    t2 = (t0 + 15976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 16296);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t12, 0, 8);
    xsi_vlog_signed_minus(t12, 32, t4, 32, t7, 32);
    t9 = (t0 + 16456);
    xsi_vlogvar_assign_value(t9, t12, 0, 0, 32);
    t2 = (t0 + 16136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t12, 0, 8);
    xsi_vlog_signed_divide(t12, 32, t4, 32, t5, 32);
    t6 = (t0 + 16616);
    xsi_vlogvar_assign_value(t6, t12, 0, 0, 32);
    t2 = (t0 + 15976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 16616);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t12, 0, 8);
    xsi_vlog_signed_add(t12, 32, t4, 32, t7, 32);
    t9 = (t0 + 16776);
    xsi_vlogvar_assign_value(t9, t12, 0, 0, 32);
    t2 = (t0 + 15656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t12, 0, 8);
    xsi_vlog_signed_equal(t12, 32, t4, 32, t5, 32);
    t6 = (t12 + 4);
    t13 = *((unsigned int *)t6);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB21;

LAB22:    t2 = (t0 + 15656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t12, 0, 8);
    xsi_vlog_signed_equal(t12, 32, t4, 32, t5, 32);
    t6 = (t12 + 4);
    t13 = *((unsigned int *)t6);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB37;

LAB38:    t2 = (t0 + 15656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng19)));
    memset(t12, 0, 8);
    xsi_vlog_signed_equal(t12, 32, t4, 32, t5, 32);
    t6 = (t12 + 4);
    t13 = *((unsigned int *)t6);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB53;

LAB54:    t2 = (t0 + 15656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t12, 0, 8);
    xsi_vlog_signed_equal(t12, 32, t4, 32, t5, 32);
    t6 = (t12 + 4);
    t13 = *((unsigned int *)t6);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB56;

LAB57:    t2 = (t0 + 15656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng22)));
    memset(t12, 0, 8);
    xsi_vlog_signed_equal(t12, 32, t4, 32, t5, 32);
    t6 = (t12 + 4);
    t13 = *((unsigned int *)t6);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB59;

LAB60:
LAB61:
LAB58:
LAB55:
LAB39:
LAB23:    goto LAB12;

LAB16:    t9 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB17;

LAB18:    t30 = (t0 + 18376);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t0 + 18536);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 32);
    goto LAB20;

LAB21:
LAB24:    t7 = (t0 + 14216);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    t30 = ((char*)((ng7)));
    memset(t40, 0, 8);
    xsi_vlog_signed_equal(t40, 32, t11, 32, t30, 32);
    t31 = (t40 + 4);
    t18 = *((unsigned int *)t31);
    t19 = (~(t18));
    t20 = *((unsigned int *)t40);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB25;

LAB26:    t2 = (t0 + 14216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t12, 0, 8);
    xsi_vlog_signed_equal(t12, 32, t4, 32, t5, 32);
    t6 = (t12 + 4);
    t13 = *((unsigned int *)t6);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB28;

LAB29:    t2 = (t0 + 14216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng19)));
    memset(t12, 0, 8);
    xsi_vlog_signed_equal(t12, 32, t4, 32, t5, 32);
    t6 = (t12 + 4);
    t13 = *((unsigned int *)t6);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB31;

LAB32:    t2 = (t0 + 14216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t12, 0, 8);
    xsi_vlog_signed_equal(t12, 32, t4, 32, t5, 32);
    t6 = (t12 + 4);
    t13 = *((unsigned int *)t6);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB34;

LAB35:
LAB36:
LAB33:
LAB30:
LAB27:    goto LAB23;

LAB25:    t32 = (t0 + 15816);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t41 = xsi_vlog_convert_to_real(t34, 32, 1);
    t42 = (200.00000000000000 / t41);
    t35 = (t0 + 17256);
    xsi_vlogvar_assign_value_double(t35, t42, 0);
    goto LAB27;

LAB28:    t7 = (t0 + 15816);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    t41 = xsi_vlog_convert_to_real(t11, 32, 1);
    t42 = (125.00000000000000 / t41);
    t30 = (t0 + 17256);
    xsi_vlogvar_assign_value_double(t30, t42, 0);
    goto LAB30;

LAB31:    t7 = (t0 + 15816);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    t41 = xsi_vlog_convert_to_real(t11, 32, 1);
    t42 = (100.00000000000000 / t41);
    t30 = (t0 + 17256);
    xsi_vlogvar_assign_value_double(t30, t42, 0);
    goto LAB33;

LAB34:    t7 = (t0 + 15816);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    t41 = xsi_vlog_convert_to_real(t11, 32, 1);
    t42 = (75.000000000000000 / t41);
    t30 = (t0 + 17256);
    xsi_vlogvar_assign_value_double(t30, t42, 0);
    goto LAB36;

LAB37:
LAB40:    t7 = (t0 + 14216);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    t30 = ((char*)((ng7)));
    memset(t40, 0, 8);
    xsi_vlog_signed_equal(t40, 32, t11, 32, t30, 32);
    t31 = (t40 + 4);
    t18 = *((unsigned int *)t31);
    t19 = (~(t18));
    t20 = *((unsigned int *)t40);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB41;

LAB42:    t2 = (t0 + 14216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t12, 0, 8);
    xsi_vlog_signed_equal(t12, 32, t4, 32, t5, 32);
    t6 = (t12 + 4);
    t13 = *((unsigned int *)t6);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB44;

LAB45:    t2 = (t0 + 14216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng19)));
    memset(t12, 0, 8);
    xsi_vlog_signed_equal(t12, 32, t4, 32, t5, 32);
    t6 = (t12 + 4);
    t13 = *((unsigned int *)t6);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB47;

LAB48:    t2 = (t0 + 14216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t12, 0, 8);
    xsi_vlog_signed_equal(t12, 32, t4, 32, t5, 32);
    t6 = (t12 + 4);
    t13 = *((unsigned int *)t6);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB50;

LAB51:
LAB52:
LAB49:
LAB46:
LAB43:    goto LAB39;

LAB41:    t32 = (t0 + 15816);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t41 = xsi_vlog_convert_to_real(t34, 32, 1);
    t42 = (125.00000000000000 / t41);
    t35 = (t0 + 17256);
    xsi_vlogvar_assign_value_double(t35, t42, 0);
    goto LAB43;

LAB44:    t7 = (t0 + 15816);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    t41 = xsi_vlog_convert_to_real(t11, 32, 1);
    t42 = (75.000000000000000 / t41);
    t30 = (t0 + 17256);
    xsi_vlogvar_assign_value_double(t30, t42, 0);
    goto LAB46;

LAB47:    t7 = (t0 + 15816);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    t41 = xsi_vlog_convert_to_real(t11, 32, 1);
    t42 = (65.000000000000000 / t41);
    t30 = (t0 + 17256);
    xsi_vlogvar_assign_value_double(t30, t42, 0);
    goto LAB49;

LAB50:    t7 = (t0 + 15816);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    t41 = xsi_vlog_convert_to_real(t11, 32, 1);
    t42 = (60.000000000000000 / t41);
    t30 = (t0 + 17256);
    xsi_vlogvar_assign_value_double(t30, t42, 0);
    goto LAB52;

LAB53:    t7 = (t0 + 13896);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    t41 = xsi_vlog_convert_to_real(t11, 32, 1);
    t42 = (5.4000000000000004 / t41);
    t30 = (t0 + 17256);
    xsi_vlogvar_assign_value_double(t30, t42, 0);
    goto LAB55;

LAB56:    t7 = (t0 + 13896);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    t41 = xsi_vlog_convert_to_real(t11, 32, 1);
    t42 = (1.1000000000000001 / t41);
    t30 = (t0 + 17256);
    xsi_vlogvar_assign_value_double(t30, t42, 0);
    goto LAB58;

LAB59:    t7 = (t0 + 13896);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    t41 = xsi_vlog_convert_to_real(t11, 32, 1);
    t42 = (0.29999999999999999 / t41);
    t30 = (t0 + 17256);
    xsi_vlogvar_assign_value_double(t30, t42, 0);
    goto LAB61;

}

static void Always_454_27(char *t0)
{
    char t6[8];
    char t31[8];
    char t39[8];
    char t55[8];
    char t63[8];
    char t103[8];
    char t110[8];
    char t114[8];
    char t117[8];
    char t118[8];
    char t121[8];
    char t146[8];
    char t154[8];
    char t196[8];
    char t199[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    double t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
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
    unsigned int t53;
    char *t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t111;
    char *t112;
    char *t113;
    char *t115;
    char *t116;
    char *t119;
    char *t120;
    char *t122;
    char *t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    int t138;
    int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    char *t159;
    char *t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    char *t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    char *t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    char *t188;
    char *t189;
    char *t190;
    char *t191;
    char *t192;
    char *t193;
    double t194;
    double t195;
    char *t197;

LAB0:    t1 = (t0 + 28872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 33808);
    *((int *)t2) = 1;
    t3 = (t0 + 28904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 5816U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:    t2 = (t0 + 9576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB16;

LAB13:    if (t18 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t6) = 1;

LAB16:    memset(t31, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t22) != 0)
        goto LAB19;

LAB20:    t29 = (t31 + 4);
    t32 = *((unsigned int *)t31);
    t33 = *((unsigned int *)t29);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB21;

LAB22:    memcpy(t63, t31, 8);

LAB23:    t95 = (t63 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t63);
    t99 = (t98 & t97);
    t100 = (t99 != 0);
    if (t100 > 0)
        goto LAB35;

LAB36:    t2 = (t0 + 18216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB42;

LAB39:    if (t18 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t6) = 1;

LAB42:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB43;

LAB44:
LAB47:    t2 = (t0 + 9576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB51;

LAB48:    if (t18 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t6) = 1;

LAB51:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB52;

LAB53:
LAB54:
LAB45:
LAB37:
LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:
LAB12:    t28 = ((char*)((ng0)));
    t29 = (t0 + 16936);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 32);
    t2 = ((char*)((ng32)));
    t30 = xsi_vlog_convert_to_real(t2, 32, 1);
    t3 = (t0 + 17416);
    xsi_vlogvar_assign_value_double(t3, t30, 0);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 19016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 19176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    t2 = ((char*)((ng32)));
    t30 = xsi_vlog_convert_to_real(t2, 32, 1);
    t3 = (t0 + 19336);
    xsi_vlogvar_assign_value_double(t3, t30, 0);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 19496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 19656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 19816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 20136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB11;

LAB15:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t31) = 1;
    goto LAB20;

LAB19:    t28 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB20;

LAB21:    t35 = (t0 + 9416);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng0)));
    memset(t39, 0, 8);
    t40 = (t37 + 4);
    t41 = (t38 + 4);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t40);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB27;

LAB24:    if (t51 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t39) = 1;

LAB27:    memset(t55, 0, 8);
    t56 = (t39 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t39);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t56) != 0)
        goto LAB30;

LAB31:    t64 = *((unsigned int *)t31);
    t65 = *((unsigned int *)t55);
    t66 = (t64 & t65);
    *((unsigned int *)t63) = t66;
    t67 = (t31 + 4);
    t68 = (t55 + 4);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t67);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB32;

LAB33:
LAB34:    goto LAB23;

LAB26:    t54 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB27;

LAB28:    *((unsigned int *)t55) = 1;
    goto LAB31;

LAB30:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB31;

LAB32:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t75 | t76);
    t77 = (t31 + 4);
    t78 = (t55 + 4);
    t79 = *((unsigned int *)t31);
    t80 = (~(t79));
    t81 = *((unsigned int *)t77);
    t82 = (~(t81));
    t83 = *((unsigned int *)t55);
    t84 = (~(t83));
    t85 = *((unsigned int *)t78);
    t86 = (~(t85));
    t87 = (t80 & t82);
    t88 = (t84 & t86);
    t89 = (~(t87));
    t90 = (~(t88));
    t91 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t91 & t89);
    t92 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t92 & t90);
    t93 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t93 & t89);
    t94 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t94 & t90);
    goto LAB34;

LAB35:
LAB38:    t101 = ((char*)((ng0)));
    t102 = (t0 + 16936);
    xsi_vlogvar_assign_value(t102, t101, 0, 0, 32);
    t2 = ((char*)((ng32)));
    t30 = xsi_vlog_convert_to_real(t2, 32, 1);
    t3 = (t0 + 17416);
    xsi_vlogvar_assign_value_double(t3, t30, 0);
    t2 = (t0 + 18376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 19016);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    t2 = (t0 + 18376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 19176);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    t2 = (t0 + 18376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t30 = xsi_vlog_convert_to_real(t4, 32, 1);
    t5 = (t0 + 19336);
    xsi_vlogvar_assign_value_double(t5, t30, 0);
    t2 = (t0 + 18376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_divide(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 19496);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    t2 = (t0 + 18376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_divide(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 19656);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    t2 = (t0 + 19496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 19816);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    t2 = (t0 + 18376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 19496);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t8, 32);
    t21 = (t0 + 20136);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 32);
    goto LAB37;

LAB41:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB42;

LAB43:
LAB46:    t28 = (t0 + 18536);
    t29 = (t28 + 56U);
    t35 = *((char **)t29);
    t36 = (t0 + 19016);
    xsi_vlogvar_assign_value(t36, t35, 0, 0, 32);
    t2 = (t0 + 18536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 19176);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    t2 = (t0 + 18536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t30 = xsi_vlog_convert_to_real(t4, 32, 1);
    t5 = (t0 + 19336);
    xsi_vlogvar_assign_value_double(t5, t30, 0);
    t2 = (t0 + 18536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_divide(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 19496);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    t2 = (t0 + 18536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_divide(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 19656);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    t2 = (t0 + 19496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 19816);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    t2 = (t0 + 18536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 19496);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t8, 32);
    t21 = (t0 + 20136);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 32);
    t2 = (t0 + 17576);
    xsi_vlogvar_assign_value_double(t2, 0.00000000000000000, 0);
    t2 = (t0 + 17416);
    xsi_vlogvar_assign_value_double(t2, 0.00000000000000000, 0);
    t2 = (t0 + 17736);
    xsi_vlogvar_assign_value_double(t2, 0.00000000000000000, 0);
    goto LAB45;

LAB50:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB51;

LAB52:
LAB55:    t28 = (t0 + 15656);
    t29 = (t28 + 56U);
    t35 = *((char **)t29);
    t36 = ((char*)((ng7)));
    memset(t31, 0, 8);
    xsi_vlog_signed_equal(t31, 32, t35, 32, t36, 32);
    memset(t39, 0, 8);
    t37 = (t31 + 4);
    t32 = *((unsigned int *)t37);
    t33 = (~(t32));
    t34 = *((unsigned int *)t31);
    t42 = (t34 & t33);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t37) != 0)
        goto LAB58;

LAB59:    t40 = (t39 + 4);
    t44 = *((unsigned int *)t39);
    t45 = (!(t44));
    t46 = *((unsigned int *)t40);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB60;

LAB61:    memcpy(t103, t39, 8);

LAB62:    t102 = (t103 + 4);
    t83 = *((unsigned int *)t102);
    t84 = (~(t83));
    t85 = *((unsigned int *)t103);
    t86 = (t85 & t84);
    t89 = (t86 != 0);
    if (t89 > 0)
        goto LAB70;

LAB71:    t2 = (t0 + 15656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng19)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t5, 32);
    memset(t31, 0, 8);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB159;

LAB160:    if (*((unsigned int *)t7) != 0)
        goto LAB161;

LAB162:    t21 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t21);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB163;

LAB164:    memcpy(t63, t31, 8);

LAB165:    memset(t103, 0, 8);
    t62 = (t63 + 4);
    t64 = *((unsigned int *)t62);
    t65 = (~(t64));
    t66 = *((unsigned int *)t63);
    t70 = (t66 & t65);
    t71 = (t70 & 1U);
    if (t71 != 0)
        goto LAB173;

LAB174:    if (*((unsigned int *)t62) != 0)
        goto LAB175;

LAB176:    t68 = (t103 + 4);
    t72 = *((unsigned int *)t103);
    t73 = *((unsigned int *)t68);
    t74 = (t72 || t73);
    if (t74 > 0)
        goto LAB177;

LAB178:    memcpy(t117, t103, 8);

LAB179:    t113 = (t117 + 4);
    t151 = *((unsigned int *)t113);
    t152 = (~(t151));
    t155 = *((unsigned int *)t117);
    t156 = (t155 & t152);
    t157 = (t156 != 0);
    if (t157 > 0)
        goto LAB191;

LAB192:
LAB193:
LAB72:    t2 = (t0 + 15656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng0)));
    memset(t6, 0, 8);
    xsi_vlog_signed_not_equal(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB207;

LAB208:
LAB209:    goto LAB54;

LAB56:    *((unsigned int *)t39) = 1;
    goto LAB59;

LAB58:    t38 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB59;

LAB60:    t41 = (t0 + 15656);
    t54 = (t41 + 56U);
    t56 = *((char **)t54);
    t62 = ((char*)((ng1)));
    memset(t55, 0, 8);
    xsi_vlog_signed_equal(t55, 32, t56, 32, t62, 32);
    memset(t63, 0, 8);
    t67 = (t55 + 4);
    t48 = *((unsigned int *)t67);
    t49 = (~(t48));
    t50 = *((unsigned int *)t55);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t67) != 0)
        goto LAB65;

LAB66:    t53 = *((unsigned int *)t39);
    t57 = *((unsigned int *)t63);
    t58 = (t53 | t57);
    *((unsigned int *)t103) = t58;
    t69 = (t39 + 4);
    t77 = (t63 + 4);
    t78 = (t103 + 4);
    t59 = *((unsigned int *)t69);
    t60 = *((unsigned int *)t77);
    t61 = (t59 | t60);
    *((unsigned int *)t78) = t61;
    t64 = *((unsigned int *)t78);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB67;

LAB68:
LAB69:    goto LAB62;

LAB63:    *((unsigned int *)t63) = 1;
    goto LAB66;

LAB65:    t68 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB66;

LAB67:    t66 = *((unsigned int *)t103);
    t70 = *((unsigned int *)t78);
    *((unsigned int *)t103) = (t66 | t70);
    t95 = (t39 + 4);
    t101 = (t63 + 4);
    t71 = *((unsigned int *)t95);
    t72 = (~(t71));
    t73 = *((unsigned int *)t39);
    t87 = (t73 & t72);
    t74 = *((unsigned int *)t101);
    t75 = (~(t74));
    t76 = *((unsigned int *)t63);
    t88 = (t76 & t75);
    t79 = (~(t87));
    t80 = (~(t88));
    t81 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t81 & t79);
    t82 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t82 & t80);
    goto LAB69;

LAB70:
LAB73:    t104 = (t0 + 16936);
    t105 = (t104 + 56U);
    t106 = *((char **)t105);
    t107 = (t0 + 15816);
    t108 = (t107 + 56U);
    t109 = *((char **)t108);
    memset(t110, 0, 8);
    xsi_vlog_signed_greatereq(t110, 32, t106, 32, t109, 32);
    t111 = (t110 + 4);
    t90 = *((unsigned int *)t111);
    t91 = (~(t90));
    t92 = *((unsigned int *)t110);
    t93 = (t92 & t91);
    t94 = (t93 != 0);
    if (t94 > 0)
        goto LAB74;

LAB75:    t2 = (t0 + 16936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 16936);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);

LAB76:    t2 = (t0 + 16936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng0)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t5, 32);
    memset(t31, 0, 8);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t7) != 0)
        goto LAB79;

LAB80:    t21 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = (!(t14));
    t16 = *((unsigned int *)t21);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB81;

LAB82:    memcpy(t63, t31, 8);

LAB83:    t68 = (t63 + 4);
    t59 = *((unsigned int *)t68);
    t60 = (~(t59));
    t61 = *((unsigned int *)t63);
    t64 = (t61 & t60);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB91;

LAB92:    t2 = (t0 + 16936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng0)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greater(t6, 32, t4, 32, t5, 32);
    memset(t31, 0, 8);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t7) != 0)
        goto LAB97;

LAB98:    t21 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t21);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB99;

LAB100:    memcpy(t63, t31, 8);

LAB101:    memset(t103, 0, 8);
    t68 = (t63 + 4);
    t64 = *((unsigned int *)t68);
    t65 = (~(t64));
    t66 = *((unsigned int *)t63);
    t70 = (t66 & t65);
    t71 = (t70 & 1U);
    if (t71 != 0)
        goto LAB109;

LAB110:    if (*((unsigned int *)t68) != 0)
        goto LAB111;

LAB112:    t77 = (t103 + 4);
    t72 = *((unsigned int *)t103);
    t73 = (!(t72));
    t74 = *((unsigned int *)t77);
    t75 = (t73 || t74);
    if (t75 > 0)
        goto LAB113;

LAB114:    memcpy(t154, t103, 8);

LAB115:    t182 = (t154 + 4);
    t183 = *((unsigned int *)t182);
    t184 = (~(t183));
    t185 = *((unsigned int *)t154);
    t186 = (t185 & t184);
    t187 = (t186 != 0);
    if (t187 > 0)
        goto LAB137;

LAB138:    t2 = (t0 + 16936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 16296);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_signed_greater(t6, 32, t4, 32, t8, 32);
    memset(t31, 0, 8);
    t21 = (t6 + 4);
    t9 = *((unsigned int *)t21);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB141;

LAB142:    if (*((unsigned int *)t21) != 0)
        goto LAB143;

LAB144:    t28 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t28);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB145;

LAB146:    memcpy(t63, t31, 8);

LAB147:    t77 = (t63 + 4);
    t64 = *((unsigned int *)t77);
    t65 = (~(t64));
    t66 = *((unsigned int *)t63);
    t70 = (t66 & t65);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB155;

LAB156:
LAB157:
LAB139:
LAB93:    goto LAB72;

LAB74:    t112 = ((char*)((ng0)));
    t113 = (t0 + 16936);
    xsi_vlogvar_wait_assign_value(t113, t112, 0, 0, 32, 0LL);
    goto LAB76;

LAB77:    *((unsigned int *)t31) = 1;
    goto LAB80;

LAB79:    t8 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB80;

LAB81:    t22 = (t0 + 16936);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    t35 = (t0 + 15976);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t39, 0, 8);
    xsi_vlog_signed_equal(t39, 32, t29, 32, t37, 32);
    memset(t55, 0, 8);
    t38 = (t39 + 4);
    t18 = *((unsigned int *)t38);
    t19 = (~(t18));
    t20 = *((unsigned int *)t39);
    t23 = (t20 & t19);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t38) != 0)
        goto LAB86;

LAB87:    t25 = *((unsigned int *)t31);
    t26 = *((unsigned int *)t55);
    t27 = (t25 | t26);
    *((unsigned int *)t63) = t27;
    t41 = (t31 + 4);
    t54 = (t55 + 4);
    t56 = (t63 + 4);
    t32 = *((unsigned int *)t41);
    t33 = *((unsigned int *)t54);
    t34 = (t32 | t33);
    *((unsigned int *)t56) = t34;
    t42 = *((unsigned int *)t56);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB88;

LAB89:
LAB90:    goto LAB83;

LAB84:    *((unsigned int *)t55) = 1;
    goto LAB87;

LAB86:    t40 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB87;

LAB88:    t44 = *((unsigned int *)t63);
    t45 = *((unsigned int *)t56);
    *((unsigned int *)t63) = (t44 | t45);
    t62 = (t31 + 4);
    t67 = (t55 + 4);
    t46 = *((unsigned int *)t62);
    t47 = (~(t46));
    t48 = *((unsigned int *)t31);
    t87 = (t48 & t47);
    t49 = *((unsigned int *)t67);
    t50 = (~(t49));
    t51 = *((unsigned int *)t55);
    t88 = (t51 & t50);
    t52 = (~(t87));
    t53 = (~(t88));
    t57 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t57 & t52);
    t58 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t58 & t53);
    goto LAB90;

LAB91:
LAB94:    t69 = ((char*)((ng32)));
    t30 = xsi_vlog_convert_to_real(t69, 32, 1);
    *((double *)t103) = t30;
    t77 = (t0 + 17416);
    xsi_vlogvar_wait_assign_value(t77, t103, 0, 0, 1, 0LL);
    t2 = (t0 + 18376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 19176);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB93;

LAB95:    *((unsigned int *)t31) = 1;
    goto LAB98;

LAB97:    t8 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB98;

LAB99:    t22 = (t0 + 16936);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    t35 = (t0 + 16296);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t39, 0, 8);
    xsi_vlog_signed_leq(t39, 32, t29, 32, t37, 32);
    memset(t55, 0, 8);
    t38 = (t39 + 4);
    t17 = *((unsigned int *)t38);
    t18 = (~(t17));
    t19 = *((unsigned int *)t39);
    t20 = (t19 & t18);
    t23 = (t20 & 1U);
    if (t23 != 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t38) != 0)
        goto LAB104;

LAB105:    t24 = *((unsigned int *)t31);
    t25 = *((unsigned int *)t55);
    t26 = (t24 & t25);
    *((unsigned int *)t63) = t26;
    t41 = (t31 + 4);
    t54 = (t55 + 4);
    t56 = (t63 + 4);
    t27 = *((unsigned int *)t41);
    t32 = *((unsigned int *)t54);
    t33 = (t27 | t32);
    *((unsigned int *)t56) = t33;
    t34 = *((unsigned int *)t56);
    t42 = (t34 != 0);
    if (t42 == 1)
        goto LAB106;

LAB107:
LAB108:    goto LAB101;

LAB102:    *((unsigned int *)t55) = 1;
    goto LAB105;

LAB104:    t40 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB105;

LAB106:    t43 = *((unsigned int *)t63);
    t44 = *((unsigned int *)t56);
    *((unsigned int *)t63) = (t43 | t44);
    t62 = (t31 + 4);
    t67 = (t55 + 4);
    t45 = *((unsigned int *)t31);
    t46 = (~(t45));
    t47 = *((unsigned int *)t62);
    t48 = (~(t47));
    t49 = *((unsigned int *)t55);
    t50 = (~(t49));
    t51 = *((unsigned int *)t67);
    t52 = (~(t51));
    t87 = (t46 & t48);
    t88 = (t50 & t52);
    t53 = (~(t87));
    t57 = (~(t88));
    t58 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t58 & t53);
    t59 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t59 & t57);
    t60 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t60 & t53);
    t61 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t61 & t57);
    goto LAB108;

LAB109:    *((unsigned int *)t103) = 1;
    goto LAB112;

LAB111:    t69 = (t103 + 4);
    *((unsigned int *)t103) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB112;

LAB113:    t78 = (t0 + 16936);
    t95 = (t78 + 56U);
    t101 = *((char **)t95);
    t102 = (t0 + 16776);
    t104 = (t102 + 56U);
    t105 = *((char **)t104);
    memset(t110, 0, 8);
    xsi_vlog_signed_greater(t110, 32, t101, 32, t105, 32);
    memset(t114, 0, 8);
    t106 = (t110 + 4);
    t76 = *((unsigned int *)t106);
    t79 = (~(t76));
    t80 = *((unsigned int *)t110);
    t81 = (t80 & t79);
    t82 = (t81 & 1U);
    if (t82 != 0)
        goto LAB116;

LAB117:    if (*((unsigned int *)t106) != 0)
        goto LAB118;

LAB119:    t108 = (t114 + 4);
    t83 = *((unsigned int *)t114);
    t84 = *((unsigned int *)t108);
    t85 = (t83 || t84);
    if (t85 > 0)
        goto LAB120;

LAB121:    memcpy(t121, t114, 8);

LAB122:    memset(t146, 0, 8);
    t147 = (t121 + 4);
    t148 = *((unsigned int *)t147);
    t149 = (~(t148));
    t150 = *((unsigned int *)t121);
    t151 = (t150 & t149);
    t152 = (t151 & 1U);
    if (t152 != 0)
        goto LAB130;

LAB131:    if (*((unsigned int *)t147) != 0)
        goto LAB132;

LAB133:    t155 = *((unsigned int *)t103);
    t156 = *((unsigned int *)t146);
    t157 = (t155 | t156);
    *((unsigned int *)t154) = t157;
    t158 = (t103 + 4);
    t159 = (t146 + 4);
    t160 = (t154 + 4);
    t161 = *((unsigned int *)t158);
    t162 = *((unsigned int *)t159);
    t163 = (t161 | t162);
    *((unsigned int *)t160) = t163;
    t164 = *((unsigned int *)t160);
    t165 = (t164 != 0);
    if (t165 == 1)
        goto LAB134;

LAB135:
LAB136:    goto LAB115;

LAB116:    *((unsigned int *)t114) = 1;
    goto LAB119;

LAB118:    t107 = (t114 + 4);
    *((unsigned int *)t114) = 1;
    *((unsigned int *)t107) = 1;
    goto LAB119;

LAB120:    t109 = (t0 + 16936);
    t111 = (t109 + 56U);
    t112 = *((char **)t111);
    t113 = (t0 + 15816);
    t115 = (t113 + 56U);
    t116 = *((char **)t115);
    memset(t117, 0, 8);
    xsi_vlog_signed_leq(t117, 32, t112, 32, t116, 32);
    memset(t118, 0, 8);
    t119 = (t117 + 4);
    t86 = *((unsigned int *)t119);
    t89 = (~(t86));
    t90 = *((unsigned int *)t117);
    t91 = (t90 & t89);
    t92 = (t91 & 1U);
    if (t92 != 0)
        goto LAB123;

LAB124:    if (*((unsigned int *)t119) != 0)
        goto LAB125;

LAB126:    t93 = *((unsigned int *)t114);
    t94 = *((unsigned int *)t118);
    t96 = (t93 & t94);
    *((unsigned int *)t121) = t96;
    t122 = (t114 + 4);
    t123 = (t118 + 4);
    t124 = (t121 + 4);
    t97 = *((unsigned int *)t122);
    t98 = *((unsigned int *)t123);
    t99 = (t97 | t98);
    *((unsigned int *)t124) = t99;
    t100 = *((unsigned int *)t124);
    t125 = (t100 != 0);
    if (t125 == 1)
        goto LAB127;

LAB128:
LAB129:    goto LAB122;

LAB123:    *((unsigned int *)t118) = 1;
    goto LAB126;

LAB125:    t120 = (t118 + 4);
    *((unsigned int *)t118) = 1;
    *((unsigned int *)t120) = 1;
    goto LAB126;

LAB127:    t126 = *((unsigned int *)t121);
    t127 = *((unsigned int *)t124);
    *((unsigned int *)t121) = (t126 | t127);
    t128 = (t114 + 4);
    t129 = (t118 + 4);
    t130 = *((unsigned int *)t114);
    t131 = (~(t130));
    t132 = *((unsigned int *)t128);
    t133 = (~(t132));
    t134 = *((unsigned int *)t118);
    t135 = (~(t134));
    t136 = *((unsigned int *)t129);
    t137 = (~(t136));
    t138 = (t131 & t133);
    t139 = (t135 & t137);
    t140 = (~(t138));
    t141 = (~(t139));
    t142 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t142 & t140);
    t143 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t143 & t141);
    t144 = *((unsigned int *)t121);
    *((unsigned int *)t121) = (t144 & t140);
    t145 = *((unsigned int *)t121);
    *((unsigned int *)t121) = (t145 & t141);
    goto LAB129;

LAB130:    *((unsigned int *)t146) = 1;
    goto LAB133;

LAB132:    t153 = (t146 + 4);
    *((unsigned int *)t146) = 1;
    *((unsigned int *)t153) = 1;
    goto LAB133;

LAB134:    t166 = *((unsigned int *)t154);
    t167 = *((unsigned int *)t160);
    *((unsigned int *)t154) = (t166 | t167);
    t168 = (t103 + 4);
    t169 = (t146 + 4);
    t170 = *((unsigned int *)t168);
    t171 = (~(t170));
    t172 = *((unsigned int *)t103);
    t173 = (t172 & t171);
    t174 = *((unsigned int *)t169);
    t175 = (~(t174));
    t176 = *((unsigned int *)t146);
    t177 = (t176 & t175);
    t178 = (~(t173));
    t179 = (~(t177));
    t180 = *((unsigned int *)t160);
    *((unsigned int *)t160) = (t180 & t178);
    t181 = *((unsigned int *)t160);
    *((unsigned int *)t160) = (t181 & t179);
    goto LAB136;

LAB137:
LAB140:    t188 = (t0 + 17416);
    t189 = (t188 + 56U);
    t190 = *((char **)t189);
    t30 = *((double *)t190);
    t191 = (t0 + 17256);
    t192 = (t191 + 56U);
    t193 = *((char **)t192);
    t194 = *((double *)t193);
    t195 = (t30 + t194);
    *((double *)t196) = t195;
    t197 = (t0 + 17416);
    xsi_vlogvar_wait_assign_value(t197, t196, 0, 0, 1, 0LL);
    t2 = (t0 + 18376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t30 = xsi_vlog_convert_to_real(t4, 32, 1);
    t5 = (t0 + 17416);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t194 = *((double *)t8);
    t195 = (t30 + t194);
    xsi_vlog_convert_real_to_values(t195, t6, 32);
    t21 = (t0 + 19176);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 32);
    goto LAB139;

LAB141:    *((unsigned int *)t31) = 1;
    goto LAB144;

LAB143:    t22 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB144;

LAB145:    t29 = (t0 + 16936);
    t35 = (t29 + 56U);
    t36 = *((char **)t35);
    t37 = (t0 + 16776);
    t38 = (t37 + 56U);
    t40 = *((char **)t38);
    memset(t39, 0, 8);
    xsi_vlog_signed_leq(t39, 32, t36, 32, t40, 32);
    memset(t55, 0, 8);
    t41 = (t39 + 4);
    t17 = *((unsigned int *)t41);
    t18 = (~(t17));
    t19 = *((unsigned int *)t39);
    t20 = (t19 & t18);
    t23 = (t20 & 1U);
    if (t23 != 0)
        goto LAB148;

LAB149:    if (*((unsigned int *)t41) != 0)
        goto LAB150;

LAB151:    t24 = *((unsigned int *)t31);
    t25 = *((unsigned int *)t55);
    t26 = (t24 & t25);
    *((unsigned int *)t63) = t26;
    t56 = (t31 + 4);
    t62 = (t55 + 4);
    t67 = (t63 + 4);
    t27 = *((unsigned int *)t56);
    t32 = *((unsigned int *)t62);
    t33 = (t27 | t32);
    *((unsigned int *)t67) = t33;
    t34 = *((unsigned int *)t67);
    t42 = (t34 != 0);
    if (t42 == 1)
        goto LAB152;

LAB153:
LAB154:    goto LAB147;

LAB148:    *((unsigned int *)t55) = 1;
    goto LAB151;

LAB150:    t54 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB151;

LAB152:    t43 = *((unsigned int *)t63);
    t44 = *((unsigned int *)t67);
    *((unsigned int *)t63) = (t43 | t44);
    t68 = (t31 + 4);
    t69 = (t55 + 4);
    t45 = *((unsigned int *)t31);
    t46 = (~(t45));
    t47 = *((unsigned int *)t68);
    t48 = (~(t47));
    t49 = *((unsigned int *)t55);
    t50 = (~(t49));
    t51 = *((unsigned int *)t69);
    t52 = (~(t51));
    t87 = (t46 & t48);
    t88 = (t50 & t52);
    t53 = (~(t87));
    t57 = (~(t88));
    t58 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t58 & t53);
    t59 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t59 & t57);
    t60 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t60 & t53);
    t61 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t61 & t57);
    goto LAB154;

LAB155:
LAB158:    t78 = (t0 + 17416);
    t95 = (t78 + 56U);
    t101 = *((char **)t95);
    t30 = *((double *)t101);
    t102 = (t0 + 17256);
    t104 = (t102 + 56U);
    t105 = *((char **)t104);
    t194 = *((double *)t105);
    t195 = (t30 - t194);
    *((double *)t103) = t195;
    t106 = (t0 + 17416);
    xsi_vlogvar_wait_assign_value(t106, t103, 0, 0, 1, 0LL);
    t2 = (t0 + 18376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t30 = xsi_vlog_convert_to_real(t4, 32, 1);
    t5 = (t0 + 17416);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t194 = *((double *)t8);
    t195 = (t30 + t194);
    xsi_vlog_convert_real_to_values(t195, t6, 32);
    t21 = (t0 + 19176);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 32);
    goto LAB157;

LAB159:    *((unsigned int *)t31) = 1;
    goto LAB162;

LAB161:    t8 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB162;

LAB163:    t22 = (t0 + 15656);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    t35 = ((char*)((ng22)));
    memset(t39, 0, 8);
    xsi_vlog_signed_leq(t39, 32, t29, 32, t35, 32);
    memset(t55, 0, 8);
    t36 = (t39 + 4);
    t17 = *((unsigned int *)t36);
    t18 = (~(t17));
    t19 = *((unsigned int *)t39);
    t20 = (t19 & t18);
    t23 = (t20 & 1U);
    if (t23 != 0)
        goto LAB166;

LAB167:    if (*((unsigned int *)t36) != 0)
        goto LAB168;

LAB169:    t24 = *((unsigned int *)t31);
    t25 = *((unsigned int *)t55);
    t26 = (t24 & t25);
    *((unsigned int *)t63) = t26;
    t38 = (t31 + 4);
    t40 = (t55 + 4);
    t41 = (t63 + 4);
    t27 = *((unsigned int *)t38);
    t32 = *((unsigned int *)t40);
    t33 = (t27 | t32);
    *((unsigned int *)t41) = t33;
    t34 = *((unsigned int *)t41);
    t42 = (t34 != 0);
    if (t42 == 1)
        goto LAB170;

LAB171:
LAB172:    goto LAB165;

LAB166:    *((unsigned int *)t55) = 1;
    goto LAB169;

LAB168:    t37 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB169;

LAB170:    t43 = *((unsigned int *)t63);
    t44 = *((unsigned int *)t41);
    *((unsigned int *)t63) = (t43 | t44);
    t54 = (t31 + 4);
    t56 = (t55 + 4);
    t45 = *((unsigned int *)t31);
    t46 = (~(t45));
    t47 = *((unsigned int *)t54);
    t48 = (~(t47));
    t49 = *((unsigned int *)t55);
    t50 = (~(t49));
    t51 = *((unsigned int *)t56);
    t52 = (~(t51));
    t87 = (t46 & t48);
    t88 = (t50 & t52);
    t53 = (~(t87));
    t57 = (~(t88));
    t58 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t58 & t53);
    t59 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t59 & t57);
    t60 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t60 & t53);
    t61 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t61 & t57);
    goto LAB172;

LAB173:    *((unsigned int *)t103) = 1;
    goto LAB176;

LAB175:    t67 = (t103 + 4);
    *((unsigned int *)t103) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB176;

LAB177:    t69 = (t0 + 17896);
    t77 = (t69 + 56U);
    t78 = *((char **)t77);
    t95 = ((char*)((ng7)));
    memset(t110, 0, 8);
    t101 = (t78 + 4);
    t102 = (t95 + 4);
    t75 = *((unsigned int *)t78);
    t76 = *((unsigned int *)t95);
    t79 = (t75 ^ t76);
    t80 = *((unsigned int *)t101);
    t81 = *((unsigned int *)t102);
    t82 = (t80 ^ t81);
    t83 = (t79 | t82);
    t84 = *((unsigned int *)t101);
    t85 = *((unsigned int *)t102);
    t86 = (t84 | t85);
    t89 = (~(t86));
    t90 = (t83 & t89);
    if (t90 != 0)
        goto LAB183;

LAB180:    if (t86 != 0)
        goto LAB182;

LAB181:    *((unsigned int *)t110) = 1;

LAB183:    memset(t114, 0, 8);
    t105 = (t110 + 4);
    t91 = *((unsigned int *)t105);
    t92 = (~(t91));
    t93 = *((unsigned int *)t110);
    t94 = (t93 & t92);
    t96 = (t94 & 1U);
    if (t96 != 0)
        goto LAB184;

LAB185:    if (*((unsigned int *)t105) != 0)
        goto LAB186;

LAB187:    t97 = *((unsigned int *)t103);
    t98 = *((unsigned int *)t114);
    t99 = (t97 & t98);
    *((unsigned int *)t117) = t99;
    t107 = (t103 + 4);
    t108 = (t114 + 4);
    t109 = (t117 + 4);
    t100 = *((unsigned int *)t107);
    t125 = *((unsigned int *)t108);
    t126 = (t100 | t125);
    *((unsigned int *)t109) = t126;
    t127 = *((unsigned int *)t109);
    t130 = (t127 != 0);
    if (t130 == 1)
        goto LAB188;

LAB189:
LAB190:    goto LAB179;

LAB182:    t104 = (t110 + 4);
    *((unsigned int *)t110) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB183;

LAB184:    *((unsigned int *)t114) = 1;
    goto LAB187;

LAB186:    t106 = (t114 + 4);
    *((unsigned int *)t114) = 1;
    *((unsigned int *)t106) = 1;
    goto LAB187;

LAB188:    t131 = *((unsigned int *)t117);
    t132 = *((unsigned int *)t109);
    *((unsigned int *)t117) = (t131 | t132);
    t111 = (t103 + 4);
    t112 = (t114 + 4);
    t133 = *((unsigned int *)t103);
    t134 = (~(t133));
    t135 = *((unsigned int *)t111);
    t136 = (~(t135));
    t137 = *((unsigned int *)t114);
    t140 = (~(t137));
    t141 = *((unsigned int *)t112);
    t142 = (~(t141));
    t138 = (t134 & t136);
    t139 = (t140 & t142);
    t143 = (~(t138));
    t144 = (~(t139));
    t145 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t145 & t143);
    t148 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t148 & t144);
    t149 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t149 & t143);
    t150 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t150 & t144);
    goto LAB190;

LAB191:
LAB194:    t115 = (t0 + 17416);
    t116 = (t115 + 56U);
    t119 = *((char **)t116);
    t30 = *((double *)t119);
    t120 = (t0 + 17256);
    t122 = (t120 + 56U);
    t123 = *((char **)t122);
    t194 = *((double *)t123);
    t195 = (t30 + t194);
    t124 = (t0 + 17576);
    xsi_vlogvar_assign_value_double(t124, t195, 0);
    t2 = (t0 + 17576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t30 = *((double *)t4);
    t9 = (t30 >= 1.0000000000000000);
    *((unsigned int *)t6) = t9;
    t5 = (t6 + 4);
    *((unsigned int *)t5) = 0U;
    t7 = (t6 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (~(t10));
    t12 = *((unsigned int *)t6);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB195;

LAB196:
LAB203:    t2 = (t0 + 17736);
    xsi_vlogvar_assign_value_double(t2, 0.00000000000000000, 0);
    t2 = (t0 + 17576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t30 = *((double *)t4);
    *((double *)t6) = t30;
    t5 = (t0 + 17416);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 1, 0LL);

LAB197:    t2 = (t0 + 17096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB204;

LAB205:    t2 = (t0 + 19016);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t30 = xsi_vlog_convert_to_real(t4, 32, 1);
    t5 = (t0 + 17736);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t194 = *((double *)t8);
    t195 = (t30 + t194);
    xsi_vlog_convert_real_to_values(t195, t6, 32);
    t21 = (t0 + 19176);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 32);

LAB206:    goto LAB193;

LAB195:
LAB198:    t8 = (t0 + 17576);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    t194 = *((double *)t22);
    *((int *)t31) = ((int)(t194));
    t28 = (t31 + 4);
    *((int *)t28) = 0;
    memcpy(t199, t31, 8);
    t29 = (t199 + 8);
    memset(t29, 0, 8);
    t17 = *((unsigned int *)t31);
    t18 = (t17 & 2147483648U);
    t15 = t18;
    t35 = (t31 + 4);
    t19 = *((unsigned int *)t35);
    t20 = (t19 & 2147483648U);
    t16 = t20;
    t23 = (t18 != 0);
    if (t23 == 1)
        goto LAB199;

LAB200:    t26 = (t20 != 0);
    if (t26 == 1)
        goto LAB201;

LAB202:    t195 = xsi_vlog_convert_to_real(t199, 32, 1);
    t40 = (t0 + 17736);
    xsi_vlogvar_assign_value_double(t40, t195, 0);
    t2 = (t0 + 17576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t30 = *((double *)t4);
    t5 = (t0 + 17736);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t194 = *((double *)t8);
    t195 = (t30 - t194);
    *((double *)t6) = t195;
    t21 = (t0 + 17416);
    xsi_vlogvar_wait_assign_value(t21, t6, 0, 0, 1, 0LL);
    goto LAB197;

LAB199:    t24 = *((unsigned int *)t199);
    *((unsigned int *)t199) = (t24 | 0U);
    t36 = (t199 + 8);
    t25 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t25 | 4294967295U);
    goto LAB200;

LAB201:    t37 = (t199 + 4);
    t27 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t27 | 0U);
    t38 = (t199 + 12);
    t32 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t32 | 4294967295U);
    goto LAB202;

LAB204:    t8 = (t0 + 19016);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    t30 = xsi_vlog_convert_to_real(t22, 32, 1);
    t28 = (t0 + 17736);
    t29 = (t28 + 56U);
    t35 = *((char **)t29);
    t194 = *((double *)t35);
    t195 = (t30 - t194);
    xsi_vlog_convert_real_to_values(t195, t31, 32);
    t36 = (t0 + 19176);
    xsi_vlogvar_assign_value(t36, t31, 0, 0, 32);
    goto LAB206;

LAB207:
LAB210:    t8 = (t0 + 19176);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng1)));
    memset(t31, 0, 8);
    xsi_vlog_signed_divide(t31, 32, t22, 32, t28, 32);
    t29 = (t0 + 19656);
    xsi_vlogvar_assign_value(t29, t31, 0, 0, 32);
    t2 = (t0 + 19176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 19016);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    t2 = (t0 + 19656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 19496);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    t2 = (t0 + 19656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 19816);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    t2 = (t0 + 19176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 19656);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t8, 32);
    t21 = (t0 + 20136);
    xsi_vlogvar_wait_assign_value(t21, t6, 0, 0, 32, 0LL);
    goto LAB209;

}

static void Always_537_28(char *t0)
{
    char t6[8];
    char t30[8];
    char t54[8];
    char t58[8];
    char t66[8];
    char t82[8];
    char t83[8];
    char t91[8];
    char t123[8];
    char t139[8];
    char t140[8];
    char t148[8];
    char t180[8];
    char t188[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    char *t57;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    int t115;
    int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    char *t136;
    char *t137;
    char *t138;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    char *t153;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    int t172;
    int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    char *t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    char *t187;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    char *t193;
    char *t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    char *t202;
    char *t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    char *t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    char *t222;
    char *t223;
    char *t224;
    char *t225;
    char *t226;
    double t227;
    double t228;

LAB0:    t1 = (t0 + 29120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 33824);
    *((int *)t2) = 1;
    t3 = (t0 + 29152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 5816U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:
LAB13:    t2 = (t0 + 5976U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:
LAB20:
LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:
LAB12:    t28 = ((char*)((ng0)));
    t29 = (t0 + 9896);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 13256);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB11;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:
LAB21:    t21 = (t0 + 13256);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng7)));
    memset(t30, 0, 8);
    t31 = (t28 + 4);
    t32 = (t29 + 4);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t29);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB25;

LAB22:    if (t42 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t30) = 1;

LAB25:    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB26;

LAB27:    t2 = (t0 + 9896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB33;

LAB30:    if (t18 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t6) = 1;

LAB33:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB34;

LAB35:    t2 = (t0 + 9896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng0)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB96;

LAB93:    if (t18 != 0)
        goto LAB95;

LAB94:    *((unsigned int *)t6) = 1;

LAB96:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB97;

LAB98:
LAB99:
LAB36:
LAB28:    goto LAB20;

LAB24:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB25;

LAB26:
LAB29:    t52 = ((char*)((ng7)));
    t53 = (t0 + 9896);
    xsi_vlogvar_wait_assign_value(t53, t52, 0, 0, 1, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 13256);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB28;

LAB32:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB33;

LAB34:
LAB37:    t28 = (t0 + 15656);
    t29 = (t28 + 56U);
    t31 = *((char **)t29);
    t32 = ((char*)((ng0)));
    memset(t30, 0, 8);
    xsi_vlog_signed_equal(t30, 32, t31, 32, t32, 32);
    memset(t54, 0, 8);
    t45 = (t30 + 4);
    t33 = *((unsigned int *)t45);
    t34 = (~(t33));
    t35 = *((unsigned int *)t30);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t45) != 0)
        goto LAB40;

LAB41:    t52 = (t54 + 4);
    t38 = *((unsigned int *)t54);
    t39 = (!(t38));
    t40 = *((unsigned int *)t52);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB42;

LAB43:    memcpy(t188, t54, 8);

LAB44:    t216 = (t188 + 4);
    t217 = *((unsigned int *)t216);
    t218 = (~(t217));
    t219 = *((unsigned int *)t188);
    t220 = (t219 & t218);
    t221 = (t220 != 0);
    if (t221 > 0)
        goto LAB84;

LAB85:    t2 = ((char*)((ng0)));
    t3 = (t0 + 9896);
    t4 = (t0 + 19496);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t227 = xsi_vlog_convert_to_real(t7, 32, 1);
    t228 = (t227 < 0.00000000000000000);
    if (t228 == 1)
        goto LAB90;

LAB91:    t227 = (t227 + 0.50000000000000000);
    t227 = ((int64)(t227));

LAB92:    t227 = (t227 * 1.0000000000000000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, t227);

LAB86:    goto LAB36;

LAB38:    *((unsigned int *)t54) = 1;
    goto LAB41;

LAB40:    t46 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB41;

LAB42:    t53 = (t0 + 17896);
    t55 = (t53 + 56U);
    t56 = *((char **)t55);
    t57 = ((char*)((ng0)));
    memset(t58, 0, 8);
    t59 = (t56 + 4);
    t60 = (t57 + 4);
    t42 = *((unsigned int *)t56);
    t43 = *((unsigned int *)t57);
    t44 = (t42 ^ t43);
    t47 = *((unsigned int *)t59);
    t48 = *((unsigned int *)t60);
    t49 = (t47 ^ t48);
    t50 = (t44 | t49);
    t51 = *((unsigned int *)t59);
    t61 = *((unsigned int *)t60);
    t62 = (t51 | t61);
    t63 = (~(t62));
    t64 = (t50 & t63);
    if (t64 != 0)
        goto LAB48;

LAB45:    if (t62 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t58) = 1;

LAB48:    memset(t66, 0, 8);
    t67 = (t58 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t58);
    t71 = (t70 & t69);
    t72 = (t71 & 1U);
    if (t72 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t67) != 0)
        goto LAB51;

LAB52:    t74 = (t66 + 4);
    t75 = *((unsigned int *)t66);
    t76 = *((unsigned int *)t74);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB53;

LAB54:    memcpy(t91, t66, 8);

LAB55:    memset(t123, 0, 8);
    t124 = (t91 + 4);
    t125 = *((unsigned int *)t124);
    t126 = (~(t125));
    t127 = *((unsigned int *)t91);
    t128 = (t127 & t126);
    t129 = (t128 & 1U);
    if (t129 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t124) != 0)
        goto LAB65;

LAB66:    t131 = (t123 + 4);
    t132 = *((unsigned int *)t123);
    t133 = *((unsigned int *)t131);
    t134 = (t132 || t133);
    if (t134 > 0)
        goto LAB67;

LAB68:    memcpy(t148, t123, 8);

LAB69:    memset(t180, 0, 8);
    t181 = (t148 + 4);
    t182 = *((unsigned int *)t181);
    t183 = (~(t182));
    t184 = *((unsigned int *)t148);
    t185 = (t184 & t183);
    t186 = (t185 & 1U);
    if (t186 != 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t181) != 0)
        goto LAB79;

LAB80:    t189 = *((unsigned int *)t54);
    t190 = *((unsigned int *)t180);
    t191 = (t189 | t190);
    *((unsigned int *)t188) = t191;
    t192 = (t54 + 4);
    t193 = (t180 + 4);
    t194 = (t188 + 4);
    t195 = *((unsigned int *)t192);
    t196 = *((unsigned int *)t193);
    t197 = (t195 | t196);
    *((unsigned int *)t194) = t197;
    t198 = *((unsigned int *)t194);
    t199 = (t198 != 0);
    if (t199 == 1)
        goto LAB81;

LAB82:
LAB83:    goto LAB44;

LAB47:    t65 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB48;

LAB49:    *((unsigned int *)t66) = 1;
    goto LAB52;

LAB51:    t73 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB52;

LAB53:    t78 = (t0 + 15656);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    t81 = ((char*)((ng19)));
    memset(t82, 0, 8);
    xsi_vlog_signed_greatereq(t82, 32, t80, 32, t81, 32);
    memset(t83, 0, 8);
    t84 = (t82 + 4);
    t85 = *((unsigned int *)t84);
    t86 = (~(t85));
    t87 = *((unsigned int *)t82);
    t88 = (t87 & t86);
    t89 = (t88 & 1U);
    if (t89 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t84) != 0)
        goto LAB58;

LAB59:    t92 = *((unsigned int *)t66);
    t93 = *((unsigned int *)t83);
    t94 = (t92 & t93);
    *((unsigned int *)t91) = t94;
    t95 = (t66 + 4);
    t96 = (t83 + 4);
    t97 = (t91 + 4);
    t98 = *((unsigned int *)t95);
    t99 = *((unsigned int *)t96);
    t100 = (t98 | t99);
    *((unsigned int *)t97) = t100;
    t101 = *((unsigned int *)t97);
    t102 = (t101 != 0);
    if (t102 == 1)
        goto LAB60;

LAB61:
LAB62:    goto LAB55;

LAB56:    *((unsigned int *)t83) = 1;
    goto LAB59;

LAB58:    t90 = (t83 + 4);
    *((unsigned int *)t83) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB59;

LAB60:    t103 = *((unsigned int *)t91);
    t104 = *((unsigned int *)t97);
    *((unsigned int *)t91) = (t103 | t104);
    t105 = (t66 + 4);
    t106 = (t83 + 4);
    t107 = *((unsigned int *)t66);
    t108 = (~(t107));
    t109 = *((unsigned int *)t105);
    t110 = (~(t109));
    t111 = *((unsigned int *)t83);
    t112 = (~(t111));
    t113 = *((unsigned int *)t106);
    t114 = (~(t113));
    t115 = (t108 & t110);
    t116 = (t112 & t114);
    t117 = (~(t115));
    t118 = (~(t116));
    t119 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t119 & t117);
    t120 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t120 & t118);
    t121 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t121 & t117);
    t122 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t122 & t118);
    goto LAB62;

LAB63:    *((unsigned int *)t123) = 1;
    goto LAB66;

LAB65:    t130 = (t123 + 4);
    *((unsigned int *)t123) = 1;
    *((unsigned int *)t130) = 1;
    goto LAB66;

LAB67:    t135 = (t0 + 15656);
    t136 = (t135 + 56U);
    t137 = *((char **)t136);
    t138 = ((char*)((ng22)));
    memset(t139, 0, 8);
    xsi_vlog_signed_leq(t139, 32, t137, 32, t138, 32);
    memset(t140, 0, 8);
    t141 = (t139 + 4);
    t142 = *((unsigned int *)t141);
    t143 = (~(t142));
    t144 = *((unsigned int *)t139);
    t145 = (t144 & t143);
    t146 = (t145 & 1U);
    if (t146 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t141) != 0)
        goto LAB72;

LAB73:    t149 = *((unsigned int *)t123);
    t150 = *((unsigned int *)t140);
    t151 = (t149 & t150);
    *((unsigned int *)t148) = t151;
    t152 = (t123 + 4);
    t153 = (t140 + 4);
    t154 = (t148 + 4);
    t155 = *((unsigned int *)t152);
    t156 = *((unsigned int *)t153);
    t157 = (t155 | t156);
    *((unsigned int *)t154) = t157;
    t158 = *((unsigned int *)t154);
    t159 = (t158 != 0);
    if (t159 == 1)
        goto LAB74;

LAB75:
LAB76:    goto LAB69;

LAB70:    *((unsigned int *)t140) = 1;
    goto LAB73;

LAB72:    t147 = (t140 + 4);
    *((unsigned int *)t140) = 1;
    *((unsigned int *)t147) = 1;
    goto LAB73;

LAB74:    t160 = *((unsigned int *)t148);
    t161 = *((unsigned int *)t154);
    *((unsigned int *)t148) = (t160 | t161);
    t162 = (t123 + 4);
    t163 = (t140 + 4);
    t164 = *((unsigned int *)t123);
    t165 = (~(t164));
    t166 = *((unsigned int *)t162);
    t167 = (~(t166));
    t168 = *((unsigned int *)t140);
    t169 = (~(t168));
    t170 = *((unsigned int *)t163);
    t171 = (~(t170));
    t172 = (t165 & t167);
    t173 = (t169 & t171);
    t174 = (~(t172));
    t175 = (~(t173));
    t176 = *((unsigned int *)t154);
    *((unsigned int *)t154) = (t176 & t174);
    t177 = *((unsigned int *)t154);
    *((unsigned int *)t154) = (t177 & t175);
    t178 = *((unsigned int *)t148);
    *((unsigned int *)t148) = (t178 & t174);
    t179 = *((unsigned int *)t148);
    *((unsigned int *)t148) = (t179 & t175);
    goto LAB76;

LAB77:    *((unsigned int *)t180) = 1;
    goto LAB80;

LAB79:    t187 = (t180 + 4);
    *((unsigned int *)t180) = 1;
    *((unsigned int *)t187) = 1;
    goto LAB80;

LAB81:    t200 = *((unsigned int *)t188);
    t201 = *((unsigned int *)t194);
    *((unsigned int *)t188) = (t200 | t201);
    t202 = (t54 + 4);
    t203 = (t180 + 4);
    t204 = *((unsigned int *)t202);
    t205 = (~(t204));
    t206 = *((unsigned int *)t54);
    t207 = (t206 & t205);
    t208 = *((unsigned int *)t203);
    t209 = (~(t208));
    t210 = *((unsigned int *)t180);
    t211 = (t210 & t209);
    t212 = (~(t207));
    t213 = (~(t211));
    t214 = *((unsigned int *)t194);
    *((unsigned int *)t194) = (t214 & t212);
    t215 = *((unsigned int *)t194);
    *((unsigned int *)t194) = (t215 & t213);
    goto LAB83;

LAB84:    t222 = ((char*)((ng0)));
    t223 = (t0 + 9896);
    t224 = (t0 + 18696);
    t225 = (t224 + 56U);
    t226 = *((char **)t225);
    t227 = xsi_vlog_convert_to_real(t226, 32, 1);
    t228 = (t227 < 0.00000000000000000);
    if (t228 == 1)
        goto LAB87;

LAB88:    t227 = (t227 + 0.50000000000000000);
    t227 = ((int64)(t227));

LAB89:    t227 = (t227 * 1.0000000000000000);
    xsi_vlogvar_wait_assign_value(t223, t222, 0, 0, 1, t227);
    goto LAB86;

LAB87:    t227 = 0.00000000000000000;
    goto LAB89;

LAB90:    t227 = 0.00000000000000000;
    goto LAB92;

LAB95:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB96;

LAB97:
LAB100:    t28 = (t0 + 15656);
    t29 = (t28 + 56U);
    t31 = *((char **)t29);
    t32 = ((char*)((ng0)));
    memset(t30, 0, 8);
    xsi_vlog_signed_equal(t30, 32, t31, 32, t32, 32);
    memset(t54, 0, 8);
    t45 = (t30 + 4);
    t33 = *((unsigned int *)t45);
    t34 = (~(t33));
    t35 = *((unsigned int *)t30);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t45) != 0)
        goto LAB103;

LAB104:    t52 = (t54 + 4);
    t38 = *((unsigned int *)t54);
    t39 = (!(t38));
    t40 = *((unsigned int *)t52);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB105;

LAB106:    memcpy(t188, t54, 8);

LAB107:    t216 = (t188 + 4);
    t217 = *((unsigned int *)t216);
    t218 = (~(t217));
    t219 = *((unsigned int *)t188);
    t220 = (t219 & t218);
    t221 = (t220 != 0);
    if (t221 > 0)
        goto LAB147;

LAB148:    t2 = ((char*)((ng7)));
    t3 = (t0 + 9896);
    t4 = (t0 + 20136);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t227 = xsi_vlog_convert_to_real(t7, 32, 1);
    t228 = (t227 < 0.00000000000000000);
    if (t228 == 1)
        goto LAB153;

LAB154:    t227 = (t227 + 0.50000000000000000);
    t227 = ((int64)(t227));

LAB155:    t227 = (t227 * 1.0000000000000000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, t227);

LAB149:    goto LAB99;

LAB101:    *((unsigned int *)t54) = 1;
    goto LAB104;

LAB103:    t46 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB104;

LAB105:    t53 = (t0 + 17896);
    t55 = (t53 + 56U);
    t56 = *((char **)t55);
    t57 = ((char*)((ng0)));
    memset(t58, 0, 8);
    t59 = (t56 + 4);
    t60 = (t57 + 4);
    t42 = *((unsigned int *)t56);
    t43 = *((unsigned int *)t57);
    t44 = (t42 ^ t43);
    t47 = *((unsigned int *)t59);
    t48 = *((unsigned int *)t60);
    t49 = (t47 ^ t48);
    t50 = (t44 | t49);
    t51 = *((unsigned int *)t59);
    t61 = *((unsigned int *)t60);
    t62 = (t51 | t61);
    t63 = (~(t62));
    t64 = (t50 & t63);
    if (t64 != 0)
        goto LAB111;

LAB108:    if (t62 != 0)
        goto LAB110;

LAB109:    *((unsigned int *)t58) = 1;

LAB111:    memset(t66, 0, 8);
    t67 = (t58 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t58);
    t71 = (t70 & t69);
    t72 = (t71 & 1U);
    if (t72 != 0)
        goto LAB112;

LAB113:    if (*((unsigned int *)t67) != 0)
        goto LAB114;

LAB115:    t74 = (t66 + 4);
    t75 = *((unsigned int *)t66);
    t76 = *((unsigned int *)t74);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB116;

LAB117:    memcpy(t91, t66, 8);

LAB118:    memset(t123, 0, 8);
    t124 = (t91 + 4);
    t125 = *((unsigned int *)t124);
    t126 = (~(t125));
    t127 = *((unsigned int *)t91);
    t128 = (t127 & t126);
    t129 = (t128 & 1U);
    if (t129 != 0)
        goto LAB126;

LAB127:    if (*((unsigned int *)t124) != 0)
        goto LAB128;

LAB129:    t131 = (t123 + 4);
    t132 = *((unsigned int *)t123);
    t133 = *((unsigned int *)t131);
    t134 = (t132 || t133);
    if (t134 > 0)
        goto LAB130;

LAB131:    memcpy(t148, t123, 8);

LAB132:    memset(t180, 0, 8);
    t181 = (t148 + 4);
    t182 = *((unsigned int *)t181);
    t183 = (~(t182));
    t184 = *((unsigned int *)t148);
    t185 = (t184 & t183);
    t186 = (t185 & 1U);
    if (t186 != 0)
        goto LAB140;

LAB141:    if (*((unsigned int *)t181) != 0)
        goto LAB142;

LAB143:    t189 = *((unsigned int *)t54);
    t190 = *((unsigned int *)t180);
    t191 = (t189 | t190);
    *((unsigned int *)t188) = t191;
    t192 = (t54 + 4);
    t193 = (t180 + 4);
    t194 = (t188 + 4);
    t195 = *((unsigned int *)t192);
    t196 = *((unsigned int *)t193);
    t197 = (t195 | t196);
    *((unsigned int *)t194) = t197;
    t198 = *((unsigned int *)t194);
    t199 = (t198 != 0);
    if (t199 == 1)
        goto LAB144;

LAB145:
LAB146:    goto LAB107;

LAB110:    t65 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB111;

LAB112:    *((unsigned int *)t66) = 1;
    goto LAB115;

LAB114:    t73 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB115;

LAB116:    t78 = (t0 + 15656);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    t81 = ((char*)((ng19)));
    memset(t82, 0, 8);
    xsi_vlog_signed_greatereq(t82, 32, t80, 32, t81, 32);
    memset(t83, 0, 8);
    t84 = (t82 + 4);
    t85 = *((unsigned int *)t84);
    t86 = (~(t85));
    t87 = *((unsigned int *)t82);
    t88 = (t87 & t86);
    t89 = (t88 & 1U);
    if (t89 != 0)
        goto LAB119;

LAB120:    if (*((unsigned int *)t84) != 0)
        goto LAB121;

LAB122:    t92 = *((unsigned int *)t66);
    t93 = *((unsigned int *)t83);
    t94 = (t92 & t93);
    *((unsigned int *)t91) = t94;
    t95 = (t66 + 4);
    t96 = (t83 + 4);
    t97 = (t91 + 4);
    t98 = *((unsigned int *)t95);
    t99 = *((unsigned int *)t96);
    t100 = (t98 | t99);
    *((unsigned int *)t97) = t100;
    t101 = *((unsigned int *)t97);
    t102 = (t101 != 0);
    if (t102 == 1)
        goto LAB123;

LAB124:
LAB125:    goto LAB118;

LAB119:    *((unsigned int *)t83) = 1;
    goto LAB122;

LAB121:    t90 = (t83 + 4);
    *((unsigned int *)t83) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB122;

LAB123:    t103 = *((unsigned int *)t91);
    t104 = *((unsigned int *)t97);
    *((unsigned int *)t91) = (t103 | t104);
    t105 = (t66 + 4);
    t106 = (t83 + 4);
    t107 = *((unsigned int *)t66);
    t108 = (~(t107));
    t109 = *((unsigned int *)t105);
    t110 = (~(t109));
    t111 = *((unsigned int *)t83);
    t112 = (~(t111));
    t113 = *((unsigned int *)t106);
    t114 = (~(t113));
    t115 = (t108 & t110);
    t116 = (t112 & t114);
    t117 = (~(t115));
    t118 = (~(t116));
    t119 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t119 & t117);
    t120 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t120 & t118);
    t121 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t121 & t117);
    t122 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t122 & t118);
    goto LAB125;

LAB126:    *((unsigned int *)t123) = 1;
    goto LAB129;

LAB128:    t130 = (t123 + 4);
    *((unsigned int *)t123) = 1;
    *((unsigned int *)t130) = 1;
    goto LAB129;

LAB130:    t135 = (t0 + 15656);
    t136 = (t135 + 56U);
    t137 = *((char **)t136);
    t138 = ((char*)((ng22)));
    memset(t139, 0, 8);
    xsi_vlog_signed_leq(t139, 32, t137, 32, t138, 32);
    memset(t140, 0, 8);
    t141 = (t139 + 4);
    t142 = *((unsigned int *)t141);
    t143 = (~(t142));
    t144 = *((unsigned int *)t139);
    t145 = (t144 & t143);
    t146 = (t145 & 1U);
    if (t146 != 0)
        goto LAB133;

LAB134:    if (*((unsigned int *)t141) != 0)
        goto LAB135;

LAB136:    t149 = *((unsigned int *)t123);
    t150 = *((unsigned int *)t140);
    t151 = (t149 & t150);
    *((unsigned int *)t148) = t151;
    t152 = (t123 + 4);
    t153 = (t140 + 4);
    t154 = (t148 + 4);
    t155 = *((unsigned int *)t152);
    t156 = *((unsigned int *)t153);
    t157 = (t155 | t156);
    *((unsigned int *)t154) = t157;
    t158 = *((unsigned int *)t154);
    t159 = (t158 != 0);
    if (t159 == 1)
        goto LAB137;

LAB138:
LAB139:    goto LAB132;

LAB133:    *((unsigned int *)t140) = 1;
    goto LAB136;

LAB135:    t147 = (t140 + 4);
    *((unsigned int *)t140) = 1;
    *((unsigned int *)t147) = 1;
    goto LAB136;

LAB137:    t160 = *((unsigned int *)t148);
    t161 = *((unsigned int *)t154);
    *((unsigned int *)t148) = (t160 | t161);
    t162 = (t123 + 4);
    t163 = (t140 + 4);
    t164 = *((unsigned int *)t123);
    t165 = (~(t164));
    t166 = *((unsigned int *)t162);
    t167 = (~(t166));
    t168 = *((unsigned int *)t140);
    t169 = (~(t168));
    t170 = *((unsigned int *)t163);
    t171 = (~(t170));
    t172 = (t165 & t167);
    t173 = (t169 & t171);
    t174 = (~(t172));
    t175 = (~(t173));
    t176 = *((unsigned int *)t154);
    *((unsigned int *)t154) = (t176 & t174);
    t177 = *((unsigned int *)t154);
    *((unsigned int *)t154) = (t177 & t175);
    t178 = *((unsigned int *)t148);
    *((unsigned int *)t148) = (t178 & t174);
    t179 = *((unsigned int *)t148);
    *((unsigned int *)t148) = (t179 & t175);
    goto LAB139;

LAB140:    *((unsigned int *)t180) = 1;
    goto LAB143;

LAB142:    t187 = (t180 + 4);
    *((unsigned int *)t180) = 1;
    *((unsigned int *)t187) = 1;
    goto LAB143;

LAB144:    t200 = *((unsigned int *)t188);
    t201 = *((unsigned int *)t194);
    *((unsigned int *)t188) = (t200 | t201);
    t202 = (t54 + 4);
    t203 = (t180 + 4);
    t204 = *((unsigned int *)t202);
    t205 = (~(t204));
    t206 = *((unsigned int *)t54);
    t207 = (t206 & t205);
    t208 = *((unsigned int *)t203);
    t209 = (~(t208));
    t210 = *((unsigned int *)t180);
    t211 = (t210 & t209);
    t212 = (~(t207));
    t213 = (~(t211));
    t214 = *((unsigned int *)t194);
    *((unsigned int *)t194) = (t214 & t212);
    t215 = *((unsigned int *)t194);
    *((unsigned int *)t194) = (t215 & t213);
    goto LAB146;

LAB147:    t222 = ((char*)((ng7)));
    t223 = (t0 + 9896);
    t224 = (t0 + 19976);
    t225 = (t224 + 56U);
    t226 = *((char **)t225);
    t227 = xsi_vlog_convert_to_real(t226, 32, 1);
    t228 = (t227 < 0.00000000000000000);
    if (t228 == 1)
        goto LAB150;

LAB151:    t227 = (t227 + 0.50000000000000000);
    t227 = ((int64)(t227));

LAB152:    t227 = (t227 * 1.0000000000000000);
    xsi_vlogvar_wait_assign_value(t223, t222, 0, 0, 1, t227);
    goto LAB149;

LAB150:    t227 = 0.00000000000000000;
    goto LAB152;

LAB153:    t227 = 0.00000000000000000;
    goto LAB155;

}

static void Always_564_29(char *t0)
{
    char t13[8];
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
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    t1 = (t0 + 29368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 33840);
    *((int *)t2) = 1;
    t3 = (t0 + 29400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 5816U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    t2 = (t0 + 10376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t5) == 0)
        goto LAB8;

LAB10:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB11:    t12 = (t13 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (~(t15));
    *((unsigned int *)t13) = t16;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB13;

LAB12:    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 1U);
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t22 & 1U);
    t23 = (t0 + 10376);
    xsi_vlogvar_wait_assign_value(t23, t13, 0, 0, 1, 250LL);

LAB7:    goto LAB2;

LAB5:    t11 = ((char*)((ng0)));
    t12 = (t0 + 10376);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB7;

LAB8:    *((unsigned int *)t13) = 1;
    goto LAB11;

LAB13:    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t17 | t18);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t12) = (t19 | t20);
    goto LAB12;

}

static void Always_570_30(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 29616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 33856);
    *((int *)t2) = 1;
    t3 = (t0 + 29648);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = ((char*)((ng7)));
    t5 = (t0 + 10536);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 10536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);
    goto LAB2;

}

static void Always_575_31(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 29864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 33872);
    *((int *)t2) = 1;
    t3 = (t0 + 29896);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = ((char*)((ng7)));
    t5 = (t0 + 10696);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 10696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 100LL);
    goto LAB2;

}

static void Always_580_32(char *t0)
{
    char t6[8];
    char t22[8];
    char t39[8];
    char t55[8];
    char t63[8];
    char t102[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
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
    unsigned int t53;
    char *t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t103;

LAB0:    t1 = (t0 + 30112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 33888);
    *((int *)t2) = 1;
    t3 = (t0 + 30144);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 5816U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t23) != 0)
        goto LAB11;

LAB12:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (!(t31));
    t33 = *((unsigned int *)t30);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB13;

LAB14:    memcpy(t63, t22, 8);

LAB15:    t91 = (t63 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t63);
    t95 = (t94 & t93);
    t96 = (t95 != 0);
    if (t96 > 0)
        goto LAB27;

LAB28:    t2 = (t0 + 8616);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t5) != 0)
        goto LAB33;

LAB34:    t8 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t8);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB35;

LAB36:    memcpy(t55, t6, 8);

LAB37:    t62 = (t55 + 4);
    t80 = *((unsigned int *)t62);
    t81 = (~(t80));
    t83 = *((unsigned int *)t55);
    t84 = (t83 & t81);
    t85 = (t84 != 0);
    if (t85 > 0)
        goto LAB49;

LAB50:
LAB51:
LAB29:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:    *((unsigned int *)t22) = 1;
    goto LAB12;

LAB11:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB12;

LAB13:    t35 = (t0 + 10536);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng7)));
    memset(t39, 0, 8);
    t40 = (t37 + 4);
    t41 = (t38 + 4);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t40);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB19;

LAB16:    if (t51 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t39) = 1;

LAB19:    memset(t55, 0, 8);
    t56 = (t39 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t39);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t56) != 0)
        goto LAB22;

LAB23:    t64 = *((unsigned int *)t22);
    t65 = *((unsigned int *)t55);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t67 = (t22 + 4);
    t68 = (t55 + 4);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t67);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB15;

LAB18:    t54 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB19;

LAB20:    *((unsigned int *)t55) = 1;
    goto LAB23;

LAB22:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB23;

LAB24:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t75 | t76);
    t77 = (t22 + 4);
    t78 = (t55 + 4);
    t79 = *((unsigned int *)t77);
    t80 = (~(t79));
    t81 = *((unsigned int *)t22);
    t82 = (t81 & t80);
    t83 = *((unsigned int *)t78);
    t84 = (~(t83));
    t85 = *((unsigned int *)t55);
    t86 = (t85 & t84);
    t87 = (~(t82));
    t88 = (~(t86));
    t89 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t89 & t87);
    t90 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t90 & t88);
    goto LAB26;

LAB27:
LAB30:    t97 = ((char*)((ng0)));
    t98 = (t0 + 10056);
    xsi_vlogvar_wait_assign_value(t98, t97, 0, 0, 1, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 11656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB29;

LAB31:    *((unsigned int *)t6) = 1;
    goto LAB34;

LAB33:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB34;

LAB35:    t21 = (t0 + 4856U);
    t23 = *((char **)t21);
    t21 = ((char*)((ng0)));
    memset(t22, 0, 8);
    t29 = (t23 + 4);
    t30 = (t21 + 4);
    t17 = *((unsigned int *)t23);
    t18 = *((unsigned int *)t21);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t29);
    t24 = *((unsigned int *)t30);
    t25 = (t20 ^ t24);
    t26 = (t19 | t25);
    t27 = *((unsigned int *)t29);
    t28 = *((unsigned int *)t30);
    t31 = (t27 | t28);
    t32 = (~(t31));
    t33 = (t26 & t32);
    if (t33 != 0)
        goto LAB41;

LAB38:    if (t31 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t22) = 1;

LAB41:    memset(t39, 0, 8);
    t36 = (t22 + 4);
    t34 = *((unsigned int *)t36);
    t42 = (~(t34));
    t43 = *((unsigned int *)t22);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t36) != 0)
        goto LAB44;

LAB45:    t46 = *((unsigned int *)t6);
    t47 = *((unsigned int *)t39);
    t48 = (t46 & t47);
    *((unsigned int *)t55) = t48;
    t38 = (t6 + 4);
    t40 = (t39 + 4);
    t41 = (t55 + 4);
    t49 = *((unsigned int *)t38);
    t50 = *((unsigned int *)t40);
    t51 = (t49 | t50);
    *((unsigned int *)t41) = t51;
    t52 = *((unsigned int *)t41);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB46;

LAB47:
LAB48:    goto LAB37;

LAB40:    t35 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t39) = 1;
    goto LAB45;

LAB44:    t37 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB45;

LAB46:    t57 = *((unsigned int *)t55);
    t58 = *((unsigned int *)t41);
    *((unsigned int *)t55) = (t57 | t58);
    t54 = (t6 + 4);
    t56 = (t39 + 4);
    t59 = *((unsigned int *)t6);
    t60 = (~(t59));
    t61 = *((unsigned int *)t54);
    t64 = (~(t61));
    t65 = *((unsigned int *)t39);
    t66 = (~(t65));
    t70 = *((unsigned int *)t56);
    t71 = (~(t70));
    t82 = (t60 & t64);
    t86 = (t66 & t71);
    t72 = (~(t82));
    t73 = (~(t86));
    t74 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t74 & t72);
    t75 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t75 & t73);
    t76 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t76 & t72);
    t79 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t79 & t73);
    goto LAB48;

LAB49:
LAB52:    t67 = (t0 + 11656);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    t77 = (t0 + 11336);
    t78 = (t77 + 56U);
    t91 = *((char **)t78);
    memset(t63, 0, 8);
    xsi_vlog_signed_less(t63, 32, t69, 32, t91, 32);
    t97 = (t63 + 4);
    t87 = *((unsigned int *)t97);
    t88 = (~(t87));
    t89 = *((unsigned int *)t63);
    t90 = (t89 & t88);
    t92 = (t90 != 0);
    if (t92 > 0)
        goto LAB53;

LAB54:    t2 = ((char*)((ng7)));
    t3 = (t0 + 10056);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB55:    goto LAB51;

LAB53:
LAB56:    t98 = (t0 + 11656);
    t99 = (t98 + 56U);
    t100 = *((char **)t99);
    t101 = ((char*)((ng7)));
    memset(t102, 0, 8);
    xsi_vlog_signed_add(t102, 32, t100, 32, t101, 32);
    t103 = (t0 + 11656);
    xsi_vlogvar_wait_assign_value(t103, t102, 0, 0, 32, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 10056);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB55;

}

static void Always_594_33(char *t0)
{
    char t6[8];
    char t22[8];
    char t39[8];
    char t55[8];
    char t63[8];
    char t101[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
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
    unsigned int t53;
    char *t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t102;

LAB0:    t1 = (t0 + 30360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 33904);
    *((int *)t2) = 1;
    t3 = (t0 + 30392);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 5816U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t23) != 0)
        goto LAB11;

LAB12:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (!(t31));
    t33 = *((unsigned int *)t30);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB13;

LAB14:    memcpy(t63, t22, 8);

LAB15:    t91 = (t63 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t63);
    t95 = (t94 & t93);
    t96 = (t95 != 0);
    if (t96 > 0)
        goto LAB27;

LAB28:    t2 = (t0 + 8616);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t5) != 0)
        goto LAB33;

LAB34:    t8 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t8);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB35;

LAB36:    memcpy(t55, t6, 8);

LAB37:    t56 = (t55 + 4);
    t61 = *((unsigned int *)t56);
    t64 = (~(t61));
    t65 = *((unsigned int *)t55);
    t66 = (t65 & t64);
    t70 = (t66 != 0);
    if (t70 > 0)
        goto LAB45;

LAB46:
LAB47:
LAB29:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:    *((unsigned int *)t22) = 1;
    goto LAB12;

LAB11:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB12;

LAB13:    t35 = (t0 + 10696);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng7)));
    memset(t39, 0, 8);
    t40 = (t37 + 4);
    t41 = (t38 + 4);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t40);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB19;

LAB16:    if (t51 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t39) = 1;

LAB19:    memset(t55, 0, 8);
    t56 = (t39 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t39);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t56) != 0)
        goto LAB22;

LAB23:    t64 = *((unsigned int *)t22);
    t65 = *((unsigned int *)t55);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t67 = (t22 + 4);
    t68 = (t55 + 4);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t67);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB15;

LAB18:    t54 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB19;

LAB20:    *((unsigned int *)t55) = 1;
    goto LAB23;

LAB22:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB23;

LAB24:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t75 | t76);
    t77 = (t22 + 4);
    t78 = (t55 + 4);
    t79 = *((unsigned int *)t77);
    t80 = (~(t79));
    t81 = *((unsigned int *)t22);
    t82 = (t81 & t80);
    t83 = *((unsigned int *)t78);
    t84 = (~(t83));
    t85 = *((unsigned int *)t55);
    t86 = (t85 & t84);
    t87 = (~(t82));
    t88 = (~(t86));
    t89 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t89 & t87);
    t90 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t90 & t88);
    goto LAB26;

LAB27:
LAB30:    t97 = ((char*)((ng0)));
    t98 = (t0 + 10216);
    xsi_vlogvar_wait_assign_value(t98, t97, 0, 0, 1, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 11816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB29;

LAB31:    *((unsigned int *)t6) = 1;
    goto LAB34;

LAB33:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB34;

LAB35:    t21 = (t0 + 15656);
    t23 = (t21 + 56U);
    t29 = *((char **)t23);
    t30 = ((char*)((ng0)));
    memset(t22, 0, 8);
    xsi_vlog_signed_equal(t22, 32, t29, 32, t30, 32);
    memset(t39, 0, 8);
    t35 = (t22 + 4);
    t17 = *((unsigned int *)t35);
    t18 = (~(t17));
    t19 = *((unsigned int *)t22);
    t20 = (t19 & t18);
    t24 = (t20 & 1U);
    if (t24 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t35) != 0)
        goto LAB40;

LAB41:    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t39);
    t27 = (t25 & t26);
    *((unsigned int *)t55) = t27;
    t37 = (t6 + 4);
    t38 = (t39 + 4);
    t40 = (t55 + 4);
    t28 = *((unsigned int *)t37);
    t31 = *((unsigned int *)t38);
    t32 = (t28 | t31);
    *((unsigned int *)t40) = t32;
    t33 = *((unsigned int *)t40);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB37;

LAB38:    *((unsigned int *)t39) = 1;
    goto LAB41;

LAB40:    t36 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB41;

LAB42:    t42 = *((unsigned int *)t55);
    t43 = *((unsigned int *)t40);
    *((unsigned int *)t55) = (t42 | t43);
    t41 = (t6 + 4);
    t54 = (t39 + 4);
    t44 = *((unsigned int *)t6);
    t45 = (~(t44));
    t46 = *((unsigned int *)t41);
    t47 = (~(t46));
    t48 = *((unsigned int *)t39);
    t49 = (~(t48));
    t50 = *((unsigned int *)t54);
    t51 = (~(t50));
    t82 = (t45 & t47);
    t86 = (t49 & t51);
    t52 = (~(t82));
    t53 = (~(t86));
    t57 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t57 & t52);
    t58 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t58 & t53);
    t59 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t59 & t52);
    t60 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t60 & t53);
    goto LAB44;

LAB45:
LAB48:    t62 = (t0 + 11816);
    t67 = (t62 + 56U);
    t68 = *((char **)t67);
    t69 = (t0 + 11496);
    t77 = (t69 + 56U);
    t78 = *((char **)t77);
    memset(t63, 0, 8);
    xsi_vlog_signed_less(t63, 32, t68, 32, t78, 32);
    t91 = (t63 + 4);
    t71 = *((unsigned int *)t91);
    t72 = (~(t71));
    t73 = *((unsigned int *)t63);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB49;

LAB50:    t2 = ((char*)((ng7)));
    t3 = (t0 + 10216);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB51:    goto LAB47;

LAB49:
LAB52:    t97 = (t0 + 11816);
    t98 = (t97 + 56U);
    t99 = *((char **)t98);
    t100 = ((char*)((ng7)));
    memset(t101, 0, 8);
    xsi_vlog_signed_add(t101, 32, t99, 32, t100, 32);
    t102 = (t0 + 11816);
    xsi_vlogvar_wait_assign_value(t102, t101, 0, 0, 32, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 10216);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB51;

}

static void Cont_612_34(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 30608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 9896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 35792);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
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
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 33920);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_614_35(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 30856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 33936);
    *((int *)t2) = 1;
    t3 = (t0 + 30888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 5976U);
    t5 = *((char **)t4);
    t4 = (t0 + 21096);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 1LL);
    goto LAB2;

}

static void Cont_617_36(char *t0)
{
    char t3[8];
    char t4[8];
    char t21[8];
    char *t1;
    char *t2;
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;

LAB0:    t1 = (t0 + 31104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 21096);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t22 = *((unsigned int *)t4);
    t23 = (~(t22));
    t24 = *((unsigned int *)t14);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t26, 8);

LAB16:    t27 = (t0 + 35856);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t31, 0, 8);
    t32 = 1U;
    t33 = t32;
    t34 = (t3 + 4);
    t35 = *((unsigned int *)t3);
    t32 = (t32 & t35);
    t36 = *((unsigned int *)t34);
    t33 = (t33 & t36);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t38 | t32);
    t39 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t39 | t33);
    xsi_driver_vfirst_trans(t27, 0, 0);
    t40 = (t0 + 33952);
    *((int *)t40) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 7496);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t21, t20, 8);
    goto LAB9;

LAB10:    t26 = ((char*)((ng0)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t21, 32, t26, 32);
    goto LAB16;

LAB14:    memcpy(t3, t21, 8);
    goto LAB16;

}

static void Cont_618_37(char *t0)
{
    char t3[8];
    char t4[8];
    char t21[8];
    char *t1;
    char *t2;
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;

LAB0:    t1 = (t0 + 31352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 21096);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t22 = *((unsigned int *)t4);
    t23 = (~(t22));
    t24 = *((unsigned int *)t14);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t26, 8);

LAB16:    t27 = (t0 + 35920);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t31, 0, 8);
    t32 = 1U;
    t33 = t32;
    t34 = (t3 + 4);
    t35 = *((unsigned int *)t3);
    t32 = (t32 & t35);
    t36 = *((unsigned int *)t34);
    t33 = (t33 & t36);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t38 | t32);
    t39 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t39 | t33);
    xsi_driver_vfirst_trans(t27, 0, 0);
    t40 = (t0 + 33968);
    *((int *)t40) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 7656);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t21, t20, 8);
    goto LAB9;

LAB10:    t26 = ((char*)((ng0)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t21, 32, t26, 32);
    goto LAB16;

LAB14:    memcpy(t3, t21, 8);
    goto LAB16;

}

static void Cont_619_38(char *t0)
{
    char t3[8];
    char t4[8];
    char t21[8];
    char *t1;
    char *t2;
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;

LAB0:    t1 = (t0 + 31600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 21096);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t22 = *((unsigned int *)t4);
    t23 = (~(t22));
    t24 = *((unsigned int *)t14);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t26, 8);

LAB16:    t27 = (t0 + 35984);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t31, 0, 8);
    t32 = 1U;
    t33 = t32;
    t34 = (t3 + 4);
    t35 = *((unsigned int *)t3);
    t32 = (t32 & t35);
    t36 = *((unsigned int *)t34);
    t33 = (t33 & t36);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t38 | t32);
    t39 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t39 | t33);
    xsi_driver_vfirst_trans(t27, 0, 0);
    t40 = (t0 + 33984);
    *((int *)t40) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 7816);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t21, t20, 8);
    goto LAB9;

LAB10:    t26 = ((char*)((ng0)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t21, 32, t26, 32);
    goto LAB16;

LAB14:    memcpy(t3, t21, 8);
    goto LAB16;

}

static void Always_621_39(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 31848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 34000);
    *((int *)t2) = 1;
    t3 = (t0 + 31880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 5816U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:    t2 = (t0 + 5976U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB16;

LAB13:    if (t18 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t6) = 1;

LAB16:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB17;

LAB18:
LAB19:
LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:
LAB12:    t28 = ((char*)((ng0)));
    t29 = (t0 + 7496);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 7656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB11;

LAB15:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB16;

LAB17:
LAB20:    t21 = (t0 + 6296U);
    t22 = *((char **)t21);
    t21 = (t0 + 7496);
    xsi_vlogvar_wait_assign_value(t21, t22, 0, 0, 1, 0LL);
    t2 = (t0 + 6296U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t2) == 0)
        goto LAB21;

LAB23:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB24:    t5 = (t0 + 7656);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 1, 0LL);
    goto LAB19;

LAB21:    *((unsigned int *)t6) = 1;
    goto LAB24;

}

static void Always_633_40(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 32096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 34016);
    *((int *)t2) = 1;
    t3 = (t0 + 32128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 5816U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:
LAB13:    t2 = (t0 + 13736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 20296);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t8, 32);
    t21 = (t6 + 4);
    t9 = *((unsigned int *)t21);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB14;

LAB15:    t2 = (t0 + 13736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 13736);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);

LAB16:    t2 = (t0 + 13736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 20456);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t8, 32);
    t21 = (t6 + 4);
    t9 = *((unsigned int *)t21);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB17;

LAB18:    t2 = ((char*)((ng0)));
    t3 = (t0 + 7816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB19:
LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:
LAB12:    t28 = ((char*)((ng0)));
    t29 = (t0 + 7816);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 13736);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB11;

LAB14:    t22 = ((char*)((ng0)));
    t28 = (t0 + 13736);
    xsi_vlogvar_wait_assign_value(t28, t22, 0, 0, 32, 0LL);
    goto LAB16;

LAB17:    t22 = ((char*)((ng7)));
    t28 = (t0 + 7816);
    xsi_vlogvar_wait_assign_value(t28, t22, 0, 0, 1, 0LL);
    goto LAB19;

}

static void Cont_656_41(char *t0)
{
    char t5[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;

LAB0:    t1 = (t0 + 32344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 9096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 5496U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t6) == 0)
        goto LAB4;

LAB6:    t13 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t13) = 1;

LAB7:    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t5);
    t17 = (t15 & t16);
    *((unsigned int *)t14) = t17;
    t18 = (t4 + 4);
    t19 = (t5 + 4);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t18);
    t22 = *((unsigned int *)t19);
    t23 = (t21 | t22);
    *((unsigned int *)t20) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB8;

LAB9:
LAB10:    t46 = (t0 + 36048);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    memset(t50, 0, 8);
    t51 = 1U;
    t52 = t51;
    t53 = (t14 + 4);
    t54 = *((unsigned int *)t14);
    t51 = (t51 & t54);
    t55 = *((unsigned int *)t53);
    t52 = (t52 & t55);
    t56 = (t50 + 4);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t57 | t51);
    t58 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t58 | t52);
    xsi_driver_vfirst_trans(t46, 0, 0);
    t59 = (t0 + 34032);
    *((int *)t59) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB8:    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t14) = (t26 | t27);
    t28 = (t4 + 4);
    t29 = (t5 + 4);
    t30 = *((unsigned int *)t4);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    t34 = *((unsigned int *)t5);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (~(t36));
    t38 = (t31 & t33);
    t39 = (t35 & t37);
    t40 = (~(t38));
    t41 = (~(t39));
    t42 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t42 & t40);
    t43 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t43 & t41);
    t44 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t44 & t40);
    t45 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t45 & t41);
    goto LAB10;

}

static void Always_658_42(char *t0)
{
    char t6[8];
    char t30[8];
    char t54[8];
    char t86[16];
    char t87[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t84;
    int t85;

LAB0:    t1 = (t0 + 32592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 34048);
    *((int *)t2) = 1;
    t3 = (t0 + 32624);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 5496U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:
LAB13:    t2 = (t0 + 5176U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:
LAB52:    t2 = ((char*)((ng0)));
    t3 = (t0 + 12936);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 12776);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB20:    t2 = (t0 + 12456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB56;

LAB53:    if (t18 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t6) = 1;

LAB56:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB57;

LAB58:
LAB59:    t2 = (t0 + 12296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB63;

LAB60:    if (t18 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t6) = 1;

LAB63:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB64;

LAB65:
LAB66:
LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:
LAB12:    t28 = ((char*)((ng7)));
    t29 = (t0 + 9096);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 12936);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 12776);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 10856);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);
    goto LAB11;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:
LAB21:    t21 = (t0 + 12936);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng0)));
    memset(t30, 0, 8);
    t31 = (t28 + 4);
    t32 = (t29 + 4);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t29);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB25;

LAB22:    if (t42 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t30) = 1;

LAB25:    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB26;

LAB27:
LAB43:    t2 = ((char*)((ng0)));
    t3 = (t0 + 9096);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t2 = (t0 + 12776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng40)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB44;

LAB45:
LAB46:    t2 = (t0 + 10856);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 511U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 511U);
    t8 = (t0 + 10856);
    t21 = (t0 + 10856);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng3)));
    t31 = ((char*)((ng0)));
    xsi_vlog_convert_partindices(t30, t54, t87, ((int*)(t28)), 2, t29, 32, 1, t31, 32, 1);
    t32 = (t30 + 4);
    t15 = *((unsigned int *)t32);
    t78 = (!(t15));
    t45 = (t54 + 4);
    t16 = *((unsigned int *)t45);
    t79 = (!(t16));
    t80 = (t78 && t79);
    t46 = (t87 + 4);
    t17 = *((unsigned int *)t46);
    t81 = (!(t17));
    t82 = (t80 && t81);
    if (t82 == 1)
        goto LAB48;

LAB49:    t2 = (t0 + 5336U);
    t3 = *((char **)t2);
    t2 = (t0 + 10856);
    t4 = (t0 + 10856);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng39)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t8, 32, 1);
    t21 = (t6 + 4);
    t9 = *((unsigned int *)t21);
    t78 = (!(t9));
    if (t78 == 1)
        goto LAB50;

LAB51:    t2 = (t0 + 12776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 12776);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);

LAB28:    goto LAB20;

LAB24:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB25;

LAB26:
LAB29:    t52 = (t0 + 5336U);
    t53 = *((char **)t52);
    t52 = ((char*)((ng0)));
    memset(t54, 0, 8);
    t55 = (t53 + 4);
    t56 = (t52 + 4);
    t57 = *((unsigned int *)t53);
    t58 = *((unsigned int *)t52);
    t59 = (t57 ^ t58);
    t60 = *((unsigned int *)t55);
    t61 = *((unsigned int *)t56);
    t62 = (t60 ^ t61);
    t63 = (t59 | t62);
    t64 = *((unsigned int *)t55);
    t65 = *((unsigned int *)t56);
    t66 = (t64 | t65);
    t67 = (~(t66));
    t68 = (t63 & t67);
    if (t68 != 0)
        goto LAB33;

LAB30:    if (t66 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t54) = 1;

LAB33:    t70 = (t54 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t54);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB34;

LAB35:
LAB38:    t2 = ((char*)((ng0)));
    t3 = (t0 + 9096);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 12936);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 12776);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    t2 = (t0 + 5336U);
    t3 = *((char **)t2);
    t2 = (t0 + 10856);
    t4 = (t0 + 10856);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng39)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t8, 32, 1);
    t21 = (t6 + 4);
    t9 = *((unsigned int *)t21);
    t78 = (!(t9));
    if (t78 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng29)));
    t3 = (t0 + 10856);
    t4 = (t0 + 10856);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng3)));
    t21 = ((char*)((ng0)));
    xsi_vlog_convert_partindices(t6, t30, t54, ((int*)(t7)), 2, t8, 32, 1, t21, 32, 1);
    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t78 = (!(t9));
    t28 = (t30 + 4);
    t10 = *((unsigned int *)t28);
    t79 = (!(t10));
    t80 = (t78 && t79);
    t29 = (t54 + 4);
    t11 = *((unsigned int *)t29);
    t81 = (!(t11));
    t82 = (t80 && t81);
    if (t82 == 1)
        goto LAB41;

LAB42:
LAB36:    goto LAB28;

LAB32:    t69 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB33;

LAB34:
LAB37:    t76 = ((char*)((ng7)));
    t77 = (t0 + 12296);
    xsi_vlogvar_wait_assign_value(t77, t76, 0, 0, 1, 0LL);
    goto LAB36;

LAB39:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB40;

LAB41:    t12 = *((unsigned int *)t54);
    t83 = (t12 + 0);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t30);
    t84 = (t13 - t14);
    t85 = (t84 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t83, *((unsigned int *)t30), t85, 0LL);
    goto LAB42;

LAB44:
LAB47:    t8 = xsi_vlog_time(t86, 1.0000000000000000, 1.0000000000000000);
    xsi_vlogfile_write(1, 0, 0, ng41, 2, t0, (char)118, t86, 64);
    goto LAB46;

LAB48:    t18 = *((unsigned int *)t87);
    t83 = (t18 + 0);
    t19 = *((unsigned int *)t30);
    t20 = *((unsigned int *)t54);
    t84 = (t19 - t20);
    t85 = (t84 + 1);
    xsi_vlogvar_wait_assign_value(t8, t6, t83, *((unsigned int *)t54), t85, 0LL);
    goto LAB49;

LAB50:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB51;

LAB55:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB56;

LAB57:    t28 = ((char*)((ng7)));
    t29 = (t0 + 9096);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB59;

LAB62:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB63;

LAB64:    t28 = ((char*)((ng0)));
    t29 = (t0 + 12296);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB66;

}

static void Always_702_43(char *t0)
{
    char t6[8];
    char t30[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;

LAB0:    t1 = (t0 + 32840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 34064);
    *((int *)t2) = 1;
    t3 = (t0 + 32872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 5496U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:    t2 = (t0 + 10856);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 3U);
    t8 = ((char*)((ng42)));
    memset(t30, 0, 8);
    t21 = (t6 + 4);
    t22 = (t8 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t21);
    t19 = *((unsigned int *)t22);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t21);
    t25 = *((unsigned int *)t22);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t32 = (t23 & t27);
    if (t32 != 0)
        goto LAB16;

LAB13:    if (t26 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t30) = 1;

LAB16:    t29 = (t30 + 4);
    t33 = *((unsigned int *)t29);
    t34 = (~(t33));
    t35 = *((unsigned int *)t30);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB17;

LAB18:    t2 = (t0 + 10856);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 3U);
    t8 = ((char*)((ng43)));
    memset(t30, 0, 8);
    t21 = (t6 + 4);
    t22 = (t8 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t21);
    t19 = *((unsigned int *)t22);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t21);
    t25 = *((unsigned int *)t22);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t32 = (t23 & t27);
    if (t32 != 0)
        goto LAB23;

LAB20:    if (t26 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t30) = 1;

LAB23:    t29 = (t30 + 4);
    t33 = *((unsigned int *)t29);
    t34 = (~(t33));
    t35 = *((unsigned int *)t30);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB24;

LAB25:
LAB26:
LAB19:
LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:
LAB12:    t28 = (t0 + 1016);
    t29 = *((char **)t28);
    t28 = ((char*)((ng7)));
    memset(t30, 0, 8);
    xsi_vlog_signed_minus(t30, 32, t29, 32, t28, 32);
    t31 = (t0 + 11016);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 8);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t3, 32, t2, 32);
    t4 = (t0 + 11176);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 8);
    goto LAB11;

LAB15:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB16;

LAB17:    t31 = (t0 + 10856);
    t39 = (t31 + 56U);
    t40 = *((char **)t39);
    memset(t38, 0, 8);
    t41 = (t38 + 4);
    t42 = (t40 + 4);
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 2);
    *((unsigned int *)t38) = t44;
    t45 = *((unsigned int *)t42);
    t46 = (t45 >> 2);
    *((unsigned int *)t41) = t46;
    t47 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t47 & 255U);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t48 & 255U);
    t49 = (t0 + 11016);
    xsi_vlogvar_assign_value(t49, t38, 0, 0, 8);
    goto LAB19;

LAB22:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB23;

LAB24:    t31 = (t0 + 10856);
    t39 = (t31 + 56U);
    t40 = *((char **)t39);
    memset(t38, 0, 8);
    t41 = (t38 + 4);
    t42 = (t40 + 4);
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 2);
    *((unsigned int *)t38) = t44;
    t45 = *((unsigned int *)t42);
    t46 = (t45 >> 2);
    *((unsigned int *)t41) = t46;
    t47 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t47 & 255U);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t48 & 255U);
    t49 = (t0 + 11176);
    xsi_vlogvar_assign_value(t49, t38, 0, 0, 8);
    goto LAB26;

}

static void Always_714_44(char *t0)
{
    char t6[8];
    char t30[8];
    char t32[8];
    char t33[8];
    char t36[8];
    char t72[16];
    char t77[8];
    char t104[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    double t73;
    double t74;
    char *t75;
    char *t76;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    double t101;
    double t102;
    double t103;

LAB0:    t1 = (t0 + 33088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 34080);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 5496U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:
LAB13:    t2 = (t0 + 34096);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:
LAB12:    t28 = ((char*)((ng0)));
    t29 = (t0 + 13096);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 18056);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t0 + 14056);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 14376);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t0 + 13896);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 14216);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 18216);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 17896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 12456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 12616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB11:    goto LAB2;

LAB14:    t2 = (t0 + 34112);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    t2 = (t0 + 34128);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    t2 = (t0 + 34144);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    t2 = (t0 + 34160);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    t4 = ((char*)((ng7)));
    t5 = (t0 + 13096);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    t2 = (t0 + 34176);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    t4 = ((char*)((ng0)));
    t5 = (t0 + 13096);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    t2 = (t0 + 34192);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    t2 = (t0 + 34208);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    t2 = (t0 + 34224);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    t2 = (t0 + 15656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng19)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t5, 32);
    memset(t30, 0, 8);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t7) != 0)
        goto LAB25;

LAB26:    t21 = (t30 + 4);
    t14 = *((unsigned int *)t30);
    t15 = *((unsigned int *)t21);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB27;

LAB28:    memcpy(t36, t30, 8);

LAB29:    t64 = (t36 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t36);
    t68 = (t67 & t66);
    t69 = (t68 != 0);
    if (t69 > 0)
        goto LAB37;

LAB38:
LAB39:    t2 = (t0 + 34240);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB23:    *((unsigned int *)t30) = 1;
    goto LAB26;

LAB25:    t8 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB26;

LAB27:    t22 = (t0 + 15656);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    t31 = ((char*)((ng22)));
    memset(t32, 0, 8);
    xsi_vlog_signed_leq(t32, 32, t29, 32, t31, 32);
    memset(t33, 0, 8);
    t34 = (t32 + 4);
    t17 = *((unsigned int *)t34);
    t18 = (~(t17));
    t19 = *((unsigned int *)t32);
    t20 = (t19 & t18);
    t23 = (t20 & 1U);
    if (t23 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t34) != 0)
        goto LAB32;

LAB33:    t24 = *((unsigned int *)t30);
    t25 = *((unsigned int *)t33);
    t26 = (t24 & t25);
    *((unsigned int *)t36) = t26;
    t37 = (t30 + 4);
    t38 = (t33 + 4);
    t39 = (t36 + 4);
    t27 = *((unsigned int *)t37);
    t40 = *((unsigned int *)t38);
    t41 = (t27 | t40);
    *((unsigned int *)t39) = t41;
    t42 = *((unsigned int *)t39);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB34;

LAB35:
LAB36:    goto LAB29;

LAB30:    *((unsigned int *)t33) = 1;
    goto LAB33;

LAB32:    t35 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB33;

LAB34:    t44 = *((unsigned int *)t36);
    t45 = *((unsigned int *)t39);
    *((unsigned int *)t36) = (t44 | t45);
    t46 = (t30 + 4);
    t47 = (t33 + 4);
    t48 = *((unsigned int *)t30);
    t49 = (~(t48));
    t50 = *((unsigned int *)t46);
    t51 = (~(t50));
    t52 = *((unsigned int *)t33);
    t53 = (~(t52));
    t54 = *((unsigned int *)t47);
    t55 = (~(t54));
    t56 = (t49 & t51);
    t57 = (t53 & t55);
    t58 = (~(t56));
    t59 = (~(t57));
    t60 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t60 & t58);
    t61 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t61 & t59);
    t62 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t62 & t58);
    t63 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t63 & t59);
    goto LAB36;

LAB37:
LAB40:    t70 = ((char*)((ng7)));
    t71 = (t0 + 18056);
    xsi_vlogvar_wait_assign_value(t71, t70, 0, 0, 1, 0LL);
    goto LAB39;

LAB41:
LAB42:    t4 = (t0 + 11016);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t7, 8, t8, 32);
    t21 = (t0 + 14056);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 32);
    t2 = (t0 + 11176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 8, t5, 32);
    t7 = (t0 + 14376);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    t2 = (t0 + 14056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 14376);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_signed_divide(t72, 64, t4, 32, t8, 32);
    t73 = xsi_vlog_convert_to_real(t72, 32, 1);
    t21 = (t0 + 14536);
    xsi_vlogvar_assign_value_double(t21, t73, 0);
    t2 = (t0 + 13896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 14216);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_signed_divide(t72, 64, t4, 32, t8, 32);
    t73 = xsi_vlog_convert_to_real(t72, 32, 1);
    t21 = (t0 + 14696);
    xsi_vlogvar_assign_value_double(t21, t73, 0);
    t2 = (t0 + 14536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t73 = *((double *)t4);
    t5 = (t0 + 14696);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t74 = *((double *)t8);
    t9 = (t73 > t74);
    *((unsigned int *)t6) = t9;
    t21 = (t6 + 4);
    *((unsigned int *)t21) = 0U;
    t22 = (t6 + 4);
    t10 = *((unsigned int *)t22);
    t11 = (~(t10));
    t12 = *((unsigned int *)t6);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB43;

LAB44:    t2 = (t0 + 14536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t73 = *((double *)t4);
    t5 = (t0 + 14696);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t74 = *((double *)t8);
    t9 = (t73 < t74);
    *((unsigned int *)t6) = t9;
    t21 = (t6 + 4);
    *((unsigned int *)t21) = 0U;
    t22 = (t6 + 4);
    t10 = *((unsigned int *)t22);
    t11 = (~(t10));
    t12 = *((unsigned int *)t6);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB46;

LAB47:
LAB48:
LAB45:    t2 = (t0 + 11016);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 8, t5, 32);
    t7 = (t0 + 13896);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    t2 = (t0 + 11176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 8, t5, 32);
    t7 = (t0 + 14216);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    t2 = (t0 + 15656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng19)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t5, 32);
    memset(t30, 0, 8);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t7) != 0)
        goto LAB51;

LAB52:    t21 = (t30 + 4);
    t14 = *((unsigned int *)t30);
    t15 = *((unsigned int *)t21);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB53;

LAB54:    memcpy(t36, t30, 8);

LAB55:    t64 = (t36 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t36);
    t68 = (t67 & t66);
    t69 = (t68 != 0);
    if (t69 > 0)
        goto LAB63;

LAB64:    t2 = ((char*)((ng0)));
    t3 = (t0 + 17896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB65:    t2 = (t0 + 34256);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB43:    t28 = ((char*)((ng7)));
    t29 = (t0 + 17096);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 32, 0LL);
    goto LAB45;

LAB46:    t28 = ((char*)((ng0)));
    t29 = (t0 + 17096);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 32, 0LL);
    goto LAB48;

LAB49:    *((unsigned int *)t30) = 1;
    goto LAB52;

LAB51:    t8 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB52;

LAB53:    t22 = (t0 + 15656);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    t31 = ((char*)((ng22)));
    memset(t32, 0, 8);
    xsi_vlog_signed_leq(t32, 32, t29, 32, t31, 32);
    memset(t33, 0, 8);
    t34 = (t32 + 4);
    t17 = *((unsigned int *)t34);
    t18 = (~(t17));
    t19 = *((unsigned int *)t32);
    t20 = (t19 & t18);
    t23 = (t20 & 1U);
    if (t23 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t34) != 0)
        goto LAB58;

LAB59:    t24 = *((unsigned int *)t30);
    t25 = *((unsigned int *)t33);
    t26 = (t24 & t25);
    *((unsigned int *)t36) = t26;
    t37 = (t30 + 4);
    t38 = (t33 + 4);
    t39 = (t36 + 4);
    t27 = *((unsigned int *)t37);
    t40 = *((unsigned int *)t38);
    t41 = (t27 | t40);
    *((unsigned int *)t39) = t41;
    t42 = *((unsigned int *)t39);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB60;

LAB61:
LAB62:    goto LAB55;

LAB56:    *((unsigned int *)t33) = 1;
    goto LAB59;

LAB58:    t35 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB59;

LAB60:    t44 = *((unsigned int *)t36);
    t45 = *((unsigned int *)t39);
    *((unsigned int *)t36) = (t44 | t45);
    t46 = (t30 + 4);
    t47 = (t33 + 4);
    t48 = *((unsigned int *)t30);
    t49 = (~(t48));
    t50 = *((unsigned int *)t46);
    t51 = (~(t50));
    t52 = *((unsigned int *)t33);
    t53 = (~(t52));
    t54 = *((unsigned int *)t47);
    t55 = (~(t54));
    t56 = (t49 & t51);
    t57 = (t53 & t55);
    t58 = (~(t56));
    t59 = (~(t57));
    t60 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t60 & t58);
    t61 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t61 & t59);
    t62 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t62 & t58);
    t63 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t63 & t59);
    goto LAB62;

LAB63:
LAB66:    t70 = (t0 + 17896);
    t71 = (t70 + 56U);
    t75 = *((char **)t71);
    t76 = ((char*)((ng0)));
    memset(t77, 0, 8);
    t78 = (t75 + 4);
    t79 = (t76 + 4);
    t80 = *((unsigned int *)t75);
    t81 = *((unsigned int *)t76);
    t82 = (t80 ^ t81);
    t83 = *((unsigned int *)t78);
    t84 = *((unsigned int *)t79);
    t85 = (t83 ^ t84);
    t86 = (t82 | t85);
    t87 = *((unsigned int *)t78);
    t88 = *((unsigned int *)t79);
    t89 = (t87 | t88);
    t90 = (~(t89));
    t91 = (t86 & t90);
    if (t91 != 0)
        goto LAB70;

LAB67:    if (t89 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t77) = 1;

LAB70:    t93 = (t77 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t77);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB71;

LAB72:
LAB73:    goto LAB65;

LAB69:    t92 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t92) = 1;
    goto LAB70;

LAB71:
LAB74:    t99 = ((char*)((ng7)));
    t100 = (t0 + 18216);
    xsi_vlogvar_wait_assign_value(t100, t99, 0, 0, 1, 1LL);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 18216);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 2LL);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 17896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 2LL);
    goto LAB73;

LAB75:    t2 = (t0 + 13896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 14216);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_signed_divide(t72, 64, t4, 32, t8, 32);
    t73 = xsi_vlog_convert_to_real(t72, 32, 1);
    t21 = (t0 + 14856);
    xsi_vlogvar_assign_value_double(t21, t73, 0);
    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t73 = *((double *)t3);
    t9 = (t73 > 0.00000000000000000);
    *((unsigned int *)t6) = t9;
    t2 = (t6 + 4);
    *((unsigned int *)t2) = 0U;
    memset(t30, 0, 8);
    t4 = (t6 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (~(t10));
    t12 = *((unsigned int *)t6);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t4) != 0)
        goto LAB78;

LAB79:    t7 = (t30 + 4);
    t15 = *((unsigned int *)t30);
    t16 = *((unsigned int *)t7);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB80;

LAB81:    memcpy(t36, t30, 8);

LAB82:    t47 = (t36 + 4);
    t67 = *((unsigned int *)t47);
    t68 = (~(t67));
    t69 = *((unsigned int *)t36);
    t80 = (t69 & t68);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB90;

LAB91:
LAB92:    t2 = (t0 + 34272);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB94;
    goto LAB1;

LAB76:    *((unsigned int *)t30) = 1;
    goto LAB79;

LAB78:    t5 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB79;

LAB80:    t8 = (t0 + 14856);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    t74 = *((double *)t22);
    t28 = (t0 + 1152);
    t29 = *((char **)t28);
    t101 = *((double *)t29);
    t18 = (t74 > t101);
    *((unsigned int *)t32) = t18;
    t28 = (t32 + 4);
    *((unsigned int *)t28) = 0U;
    memset(t33, 0, 8);
    t31 = (t32 + 4);
    t19 = *((unsigned int *)t31);
    t20 = (~(t19));
    t23 = *((unsigned int *)t32);
    t24 = (t23 & t20);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t31) != 0)
        goto LAB85;

LAB86:    t26 = *((unsigned int *)t30);
    t27 = *((unsigned int *)t33);
    t40 = (t26 & t27);
    *((unsigned int *)t36) = t40;
    t35 = (t30 + 4);
    t37 = (t33 + 4);
    t38 = (t36 + 4);
    t41 = *((unsigned int *)t35);
    t42 = *((unsigned int *)t37);
    t43 = (t41 | t42);
    *((unsigned int *)t38) = t43;
    t44 = *((unsigned int *)t38);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB87;

LAB88:
LAB89:    goto LAB82;

LAB83:    *((unsigned int *)t33) = 1;
    goto LAB86;

LAB85:    t34 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB86;

LAB87:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t38);
    *((unsigned int *)t36) = (t48 | t49);
    t39 = (t30 + 4);
    t46 = (t33 + 4);
    t50 = *((unsigned int *)t30);
    t51 = (~(t50));
    t52 = *((unsigned int *)t39);
    t53 = (~(t52));
    t54 = *((unsigned int *)t33);
    t55 = (~(t54));
    t58 = *((unsigned int *)t46);
    t59 = (~(t58));
    t56 = (t51 & t53);
    t57 = (t55 & t59);
    t60 = (~(t56));
    t61 = (~(t57));
    t62 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t62 & t60);
    t63 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t63 & t61);
    t65 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t65 & t60);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t61);
    goto LAB89;

LAB90:
LAB93:    t64 = (t0 + 13896);
    t70 = (t64 + 56U);
    t71 = *((char **)t70);
    t75 = (t0 + 14216);
    t76 = (t75 + 56U);
    t78 = *((char **)t76);
    t79 = (t0 + 14856);
    t92 = (t79 + 56U);
    t93 = *((char **)t92);
    t102 = *((double *)t93);
    *((double *)t77) = t102;
    t99 = (t0 + 1152);
    t100 = *((char **)t99);
    t103 = *((double *)t100);
    *((double *)t104) = t103;
    xsi_vlogfile_write(1, 0, 0, ng44, 5, t0, (char)119, t71, 32, (char)119, t78, 32, (char)114, t77, 64, (char)114, t104, 64);
    goto LAB92;

LAB94:    t2 = (t0 + 34288);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB95;
    goto LAB1;

LAB95:    t2 = (t0 + 34304);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB96;
    goto LAB1;

LAB96:    t2 = (t0 + 34320);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB97;
    goto LAB1;

LAB97:    t2 = (t0 + 34336);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB98;
    goto LAB1;

LAB98:    t4 = (t0 + 34352);
    *((int *)t4) = 1;
    t5 = (t0 + 33120);
    *((char **)t5) = t4;
    *((char **)t1) = &&LAB99;
    goto LAB1;

LAB99:    t7 = (t0 + 34368);
    *((int *)t7) = 1;
    t8 = (t0 + 33120);
    *((char **)t8) = t7;
    *((char **)t1) = &&LAB100;
    goto LAB1;

LAB100:    t2 = (t0 + 34384);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB101;
    goto LAB1;

LAB101:    t2 = (t0 + 34400);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB102;
    goto LAB1;

LAB102:    t2 = (t0 + 34416);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB103:    t2 = (t0 + 34432);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB104;
    goto LAB1;

LAB104:    t2 = (t0 + 34448);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB105;
    goto LAB1;

LAB105:    t2 = (t0 + 34464);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB106;
    goto LAB1;

LAB106:    t2 = (t0 + 34480);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB107;
    goto LAB1;

LAB107:    t4 = ((char*)((ng7)));
    t5 = (t0 + 12456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    t2 = (t0 + 34496);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB108;
    goto LAB1;

LAB108:    t4 = ((char*)((ng0)));
    t5 = (t0 + 12456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    t2 = (t0 + 34512);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB109;
    goto LAB1;

LAB109:    t2 = (t0 + 34528);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB110;
    goto LAB1;

LAB110:    t2 = (t0 + 34544);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB111;
    goto LAB1;

LAB111:    t2 = (t0 + 34560);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB112;
    goto LAB1;

LAB112:    t2 = (t0 + 34576);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB113;
    goto LAB1;

LAB113:    t2 = (t0 + 34592);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB114;
    goto LAB1;

LAB114:    t2 = (t0 + 34608);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB115;
    goto LAB1;

LAB115:    t4 = ((char*)((ng7)));
    t5 = (t0 + 12616);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    t2 = (t0 + 34624);
    *((int *)t2) = 1;
    t3 = (t0 + 33120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB116;
    goto LAB1;

LAB116:    t4 = ((char*)((ng0)));
    t5 = (t0 + 12616);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB11;

}


extern void unisims_ver_m_00000000001512317659_3344802168_init()
{
	static char *pe[] = {(void *)Initial_187_0,(void *)Cont_270_1,(void *)Cont_271_2,(void *)Cont_272_3,(void *)Cont_273_4,(void *)Cont_274_5,(void *)Cont_275_6,(void *)Cont_276_7,(void *)Cont_277_8,(void *)Cont_278_9,(void *)Cont_279_10,(void *)Always_281_11,(void *)Always_284_12,(void *)Cont_288_13,(void *)Cont_289_14,(void *)Cont_290_15,(void *)Initial_292_16,(void *)Cont_305_17,(void *)Always_307_18,(void *)Always_313_19,(void *)Cont_330_20,(void *)Always_337_21,(void *)Always_355_22,(void *)Always_380_23,(void *)Cont_398_24,(void *)Cont_400_25,(void *)Always_406_26,(void *)Always_454_27,(void *)Always_537_28,(void *)Always_564_29,(void *)Always_570_30,(void *)Always_575_31,(void *)Always_580_32,(void *)Always_594_33,(void *)Cont_612_34,(void *)Always_614_35,(void *)Cont_617_36,(void *)Cont_618_37,(void *)Cont_619_38,(void *)Always_621_39,(void *)Always_633_40,(void *)Cont_656_41,(void *)Always_658_42,(void *)Always_702_43,(void *)Always_714_44};
	xsi_register_didat("unisims_ver_m_00000000001512317659_3344802168", "isim/main_isim_beh.exe.sim/unisims_ver/m_00000000001512317659_3344802168.didat");
	xsi_register_executes(pe);
}
