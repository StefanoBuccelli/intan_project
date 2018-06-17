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
static const char *ng0 = "C:/Users/Max Murphy/Desktop/Preliminary intan/2018-01-16_RHS2000 Window Discriminator/RHS2000InterfaceXEM6010_release_170328/okLibrary.v";
static int ng1[] = {0, 0};
static int ng2[] = {17, 0};
static int ng3[] = {1, 0};



static void Always_211_0(char *t0)
{
    char t7[8];
    char t18[8];
    char t27[8];
    char t29[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;

LAB0:    t1 = (t0 + 2960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(211, ng0);
    t2 = (t0 + 3280);
    *((int *)t2) = 1;
    t3 = (t0 + 2992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(212, ng0);

LAB5:    xsi_set_current_line(213, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1880);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 17);
    xsi_set_current_line(214, ng0);
    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 768);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t4, 32, t6, 32);
    t5 = (t7 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    goto LAB2;

LAB7:    xsi_set_current_line(214, ng0);

LAB9:    t13 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t13, &&LAB10);
    t14 = (t0 + 2768);
    xsi_vlog_namedbase_pushprocess(t13, t14);

LAB11:    xsi_set_current_line(215, ng0);
    t15 = (t0 + 1880);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t19 = (t0 + 1480U);
    t20 = *((char **)t19);
    t19 = (t0 + 1440U);
    t21 = (t19 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 2040);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng2)));
    memset(t27, 0, 8);
    xsi_vlog_signed_multiply(t27, 32, t25, 32, t26, 32);
    t28 = ((char*)((ng2)));
    xsi_vlog_get_indexed_partselect(t18, 17, t20, ((int*)(t22)), 2, t27, 32, 1, t28, 32, 1, 1);
    t30 = *((unsigned int *)t17);
    t31 = *((unsigned int *)t18);
    t32 = (t30 | t31);
    *((unsigned int *)t29) = t32;
    t33 = (t17 + 4);
    t34 = (t18 + 4);
    t35 = (t29 + 4);
    t36 = *((unsigned int *)t33);
    t37 = *((unsigned int *)t34);
    t38 = (t36 | t37);
    *((unsigned int *)t35) = t38;
    t39 = *((unsigned int *)t35);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB12;

LAB13:
LAB14:    t57 = (t0 + 1880);
    xsi_vlogvar_assign_value(t57, t29, 0, 0, 17);
    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB10:    t3 = (t0 + 2768);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 2040);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB6;

LAB12:    t41 = *((unsigned int *)t29);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t29) = (t41 | t42);
    t43 = (t17 + 4);
    t44 = (t18 + 4);
    t45 = *((unsigned int *)t43);
    t46 = (~(t45));
    t47 = *((unsigned int *)t17);
    t48 = (t47 & t46);
    t49 = *((unsigned int *)t44);
    t50 = (~(t49));
    t51 = *((unsigned int *)t18);
    t52 = (t51 & t50);
    t53 = (~(t48));
    t54 = (~(t52));
    t55 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t55 & t53);
    t56 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t56 & t54);
    goto LAB14;

}


extern void work_m_00000000000281809430_2463971984_init()
{
	static char *pe[] = {(void *)Always_211_0};
	xsi_register_didat("work_m_00000000000281809430_2463971984", "isim/main_isim_beh.exe.sim/work/m_00000000000281809430_2463971984.didat");
	xsi_register_executes(pe);
}
