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
static const char *ng0 = "E:/ise project/P6/vegitabalecpu/piplelineplus/BEextandDMandWBext.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {24, 0};
static unsigned int ng6[] = {0U, 1U};
static unsigned int ng7[] = {2U, 1U};
static unsigned int ng8[] = {4U, 0U};
static int ng9[] = {16, 0};



static void Always_71_0(char *t0)
{
    char t6[8];
    char t31[8];
    char t32[8];
    char t44[8];
    char t45[8];
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
    int t30;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t55;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(71, ng0);

LAB5:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
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

LAB11:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
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
        goto LAB26;

LAB23:    if (t18 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t6) = 1;

LAB26:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
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
        goto LAB43;

LAB40:    if (t18 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t6) = 1;

LAB43:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
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
        goto LAB56;

LAB53:    if (t18 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t6) = 1;

LAB56:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB59:
LAB46:
LAB29:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(73, ng0);
    t28 = (t0 + 1048U);
    t29 = *((char **)t28);

LAB13:    t28 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 2, t28, 2);
    if (t30 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 2, t2, 2);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 2, t2, 2);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t29, 2, t2, 2);
    if (t30 == 1)
        goto LAB20;

LAB21:
LAB22:    goto LAB12;

LAB14:    xsi_set_current_line(74, ng0);
    t33 = (t0 + 1208U);
    t34 = *((char **)t33);
    memset(t32, 0, 8);
    t33 = (t32 + 4);
    t35 = (t34 + 4);
    t36 = *((unsigned int *)t34);
    t37 = (t36 >> 0);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t33) = t39;
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 255U);
    t41 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t41 & 255U);
    t42 = ((char*)((ng2)));
    xsi_vlogtype_concat(t31, 32, 32, 2U, t42, 24, t32, 8);
    t43 = (t0 + 1768);
    xsi_vlogvar_assign_value(t43, t31, 0, 0, 32);
    goto LAB22;

LAB16:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t3 = (t31 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 8);
    *((unsigned int *)t31) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 8);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t13 & 255U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 255U);
    t7 = ((char*)((ng2)));
    xsi_vlogtype_concat(t6, 32, 32, 2U, t7, 24, t31, 8);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    goto LAB22;

LAB18:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t3 = (t31 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 16);
    *((unsigned int *)t31) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 16);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t13 & 255U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 255U);
    t7 = ((char*)((ng2)));
    xsi_vlogtype_concat(t6, 32, 32, 2U, t7, 24, t31, 8);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    goto LAB22;

LAB20:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t3 = (t31 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 24);
    *((unsigned int *)t31) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 24);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t13 & 255U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 255U);
    t7 = ((char*)((ng2)));
    xsi_vlogtype_concat(t6, 32, 32, 2U, t7, 24, t31, 8);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    goto LAB22;

LAB25:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(80, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);

LAB30:    t21 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 2, t21, 2);
    if (t30 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 2, t2, 2);
    if (t30 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 2, t2, 2);
    if (t30 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 2, t2, 2);
    if (t30 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB29;

LAB31:    xsi_set_current_line(81, ng0);
    t28 = (t0 + 1208U);
    t33 = *((char **)t28);
    memset(t32, 0, 8);
    t28 = (t32 + 4);
    t34 = (t33 + 4);
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 >> 0);
    *((unsigned int *)t28) = t39;
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 255U);
    t41 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t41 & 255U);
    t35 = ((char*)((ng5)));
    t42 = (t0 + 1208U);
    t43 = *((char **)t42);
    memset(t45, 0, 8);
    t42 = (t45 + 4);
    t46 = (t43 + 4);
    t47 = *((unsigned int *)t43);
    t48 = (t47 >> 7);
    t49 = (t48 & 1);
    *((unsigned int *)t45) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 >> 7);
    t52 = (t51 & 1);
    *((unsigned int *)t42) = t52;
    xsi_vlog_mul_concat(t44, 24, 1, t35, 1U, t45, 1);
    xsi_vlogtype_concat(t31, 32, 32, 2U, t44, 24, t32, 8);
    t53 = (t0 + 1768);
    xsi_vlogvar_assign_value(t53, t31, 0, 0, 32);
    goto LAB39;

LAB33:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t3 = (t31 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 8);
    *((unsigned int *)t31) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 8);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t13 & 255U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 255U);
    t7 = ((char*)((ng5)));
    t8 = (t0 + 1208U);
    t21 = *((char **)t8);
    memset(t44, 0, 8);
    t8 = (t44 + 4);
    t28 = (t21 + 4);
    t15 = *((unsigned int *)t21);
    t16 = (t15 >> 15);
    t17 = (t16 & 1);
    *((unsigned int *)t44) = t17;
    t18 = *((unsigned int *)t28);
    t19 = (t18 >> 15);
    t20 = (t19 & 1);
    *((unsigned int *)t8) = t20;
    xsi_vlog_mul_concat(t32, 24, 1, t7, 1U, t44, 1);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t32, 24, t31, 8);
    t33 = (t0 + 1768);
    xsi_vlogvar_assign_value(t33, t6, 0, 0, 32);
    goto LAB39;

LAB35:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t3 = (t31 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 16);
    *((unsigned int *)t31) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 16);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t13 & 255U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 255U);
    t7 = ((char*)((ng5)));
    t8 = (t0 + 1208U);
    t21 = *((char **)t8);
    memset(t44, 0, 8);
    t8 = (t44 + 4);
    t28 = (t21 + 4);
    t15 = *((unsigned int *)t21);
    t16 = (t15 >> 23);
    t17 = (t16 & 1);
    *((unsigned int *)t44) = t17;
    t18 = *((unsigned int *)t28);
    t19 = (t18 >> 23);
    t20 = (t19 & 1);
    *((unsigned int *)t8) = t20;
    xsi_vlog_mul_concat(t32, 24, 1, t7, 1U, t44, 1);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t32, 24, t31, 8);
    t33 = (t0 + 1768);
    xsi_vlogvar_assign_value(t33, t6, 0, 0, 32);
    goto LAB39;

LAB37:    xsi_set_current_line(84, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t3 = (t31 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 24);
    *((unsigned int *)t31) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 24);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t13 & 255U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 255U);
    t7 = ((char*)((ng5)));
    t8 = (t0 + 1208U);
    t21 = *((char **)t8);
    memset(t44, 0, 8);
    t8 = (t44 + 4);
    t28 = (t21 + 4);
    t15 = *((unsigned int *)t21);
    t16 = (t15 >> 31);
    t17 = (t16 & 1);
    *((unsigned int *)t44) = t17;
    t18 = *((unsigned int *)t28);
    t19 = (t18 >> 31);
    t20 = (t19 & 1);
    *((unsigned int *)t8) = t20;
    xsi_vlog_mul_concat(t32, 24, 1, t7, 1U, t44, 1);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t32, 24, t31, 8);
    t33 = (t0 + 1768);
    xsi_vlogvar_assign_value(t33, t6, 0, 0, 32);
    goto LAB39;

LAB42:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(87, ng0);
    t21 = (t0 + 1048U);
    t28 = *((char **)t21);

LAB47:    t21 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_zcompare(t28, 2, t21, 2);
    if (t30 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_zcompare(t28, 2, t2, 2);
    if (t30 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB46;

LAB48:    xsi_set_current_line(88, ng0);
    t33 = (t0 + 1208U);
    t34 = *((char **)t33);
    memset(t32, 0, 8);
    t33 = (t32 + 4);
    t35 = (t34 + 4);
    t36 = *((unsigned int *)t34);
    t37 = (t36 >> 0);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t33) = t39;
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 65535U);
    t41 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t41 & 65535U);
    t42 = ((char*)((ng2)));
    xsi_vlogtype_concat(t31, 32, 32, 2U, t42, 16, t32, 16);
    t43 = (t0 + 1768);
    xsi_vlogvar_assign_value(t43, t31, 0, 0, 32);
    goto LAB52;

LAB50:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t3 = (t31 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 16);
    *((unsigned int *)t31) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 16);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t13 & 65535U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 65535U);
    t7 = ((char*)((ng2)));
    xsi_vlogtype_concat(t6, 32, 32, 2U, t7, 16, t31, 16);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    goto LAB52;

LAB55:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB56;

LAB57:    xsi_set_current_line(92, ng0);
    t21 = (t0 + 1048U);
    t33 = *((char **)t21);

LAB60:    t21 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_zcompare(t33, 2, t21, 2);
    if (t30 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_zcompare(t33, 2, t2, 2);
    if (t30 == 1)
        goto LAB63;

LAB64:
LAB65:    goto LAB59;

LAB61:    xsi_set_current_line(93, ng0);
    t34 = (t0 + 1208U);
    t35 = *((char **)t34);
    memset(t32, 0, 8);
    t34 = (t32 + 4);
    t42 = (t35 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (t36 >> 0);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t42);
    t39 = (t38 >> 0);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 65535U);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 & 65535U);
    t43 = ((char*)((ng9)));
    t46 = (t0 + 1208U);
    t53 = *((char **)t46);
    memset(t45, 0, 8);
    t46 = (t45 + 4);
    t54 = (t53 + 4);
    t47 = *((unsigned int *)t53);
    t48 = (t47 >> 15);
    t49 = (t48 & 1);
    *((unsigned int *)t45) = t49;
    t50 = *((unsigned int *)t54);
    t51 = (t50 >> 15);
    t52 = (t51 & 1);
    *((unsigned int *)t46) = t52;
    xsi_vlog_mul_concat(t44, 16, 1, t43, 1U, t45, 1);
    xsi_vlogtype_concat(t31, 32, 32, 2U, t44, 16, t32, 16);
    t55 = (t0 + 1768);
    xsi_vlogvar_assign_value(t55, t31, 0, 0, 32);
    goto LAB65;

LAB63:    xsi_set_current_line(94, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t3 = (t31 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 16);
    *((unsigned int *)t31) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 16);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t13 & 65535U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 65535U);
    t7 = ((char*)((ng9)));
    t8 = (t0 + 1208U);
    t21 = *((char **)t8);
    memset(t44, 0, 8);
    t8 = (t44 + 4);
    t34 = (t21 + 4);
    t15 = *((unsigned int *)t21);
    t16 = (t15 >> 31);
    t17 = (t16 & 1);
    *((unsigned int *)t44) = t17;
    t18 = *((unsigned int *)t34);
    t19 = (t18 >> 31);
    t20 = (t19 & 1);
    *((unsigned int *)t8) = t20;
    xsi_vlog_mul_concat(t32, 16, 1, t7, 1U, t44, 1);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t32, 16, t31, 16);
    t35 = (t0 + 1768);
    xsi_vlogvar_assign_value(t35, t6, 0, 0, 32);
    goto LAB65;

}


extern void work_m_00000000001887228881_2371633933_init()
{
	static char *pe[] = {(void *)Always_71_0};
	xsi_register_didat("work_m_00000000001887228881_2371633933", "isim/test_isim_beh.exe.sim/work/m_00000000001887228881_2371633933.didat");
	xsi_register_executes(pe);
}
