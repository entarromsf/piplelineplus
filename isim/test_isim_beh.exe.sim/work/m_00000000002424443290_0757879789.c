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
static const char *ng0 = "E:/ise project/P6/vegitabalecpu/piplelineplus/NPC.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {14, 0};



static void Always_8_0(char *t0)
{
    char t4[8];
    char t21[8];
    char t22[8];
    char t32[8];
    char t36[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t45;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(8, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(8, ng0);

LAB5:    xsi_set_current_line(9, ng0);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(12, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    t3 = (t21 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t21) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t11 & 67108863U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 67108863U);
    t12 = (t0 + 1048U);
    t13 = *((char **)t12);
    memset(t22, 0, 8);
    t12 = (t22 + 4);
    t19 = (t13 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (t15 >> 28);
    *((unsigned int *)t22) = t16;
    t17 = *((unsigned int *)t19);
    t18 = (t17 >> 28);
    *((unsigned int *)t12) = t18;
    t26 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t26 & 15U);
    t27 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t27 & 15U);
    xsi_vlogtype_concat(t4, 32, 32, 3U, t22, 4, t21, 26, t2, 2);
    t20 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t20, t4, 0, 0, 32, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(10, ng0);
    t19 = (t0 + 1048U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng1)));
    t23 = (t0 + 1208U);
    t24 = *((char **)t23);
    memset(t22, 0, 8);
    t23 = (t22 + 4);
    t25 = (t24 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (t26 >> 0);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t25);
    t29 = (t28 >> 0);
    *((unsigned int *)t23) = t29;
    t30 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t30 & 65535U);
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t31 & 65535U);
    t33 = ((char*)((ng2)));
    t34 = (t0 + 1208U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    t34 = (t36 + 4);
    t37 = (t35 + 4);
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 15);
    t40 = (t39 & 1);
    *((unsigned int *)t36) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 >> 15);
    t43 = (t42 & 1);
    *((unsigned int *)t34) = t43;
    xsi_vlog_mul_concat(t32, 14, 1, t33, 1U, t36, 1);
    xsi_vlogtype_concat(t21, 32, 32, 3U, t32, 14, t22, 16, t19, 2);
    memset(t44, 0, 8);
    xsi_vlog_unsigned_add(t44, 32, t20, 32, t21, 32);
    t45 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t45, t44, 0, 0, 32, 0LL);
    goto LAB12;

}


extern void work_m_00000000002424443290_0757879789_init()
{
	static char *pe[] = {(void *)Always_8_0};
	xsi_register_didat("work_m_00000000002424443290_0757879789", "isim/test_isim_beh.exe.sim/work/m_00000000002424443290_0757879789.didat");
	xsi_register_executes(pe);
}
