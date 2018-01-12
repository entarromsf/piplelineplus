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
static const char *ng0 = "E:/ise project/P6/vegitabalecpu/piplelineplus/MulDiv.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {5, 0};
static int ng5[] = {10, 0};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {3U, 0U};



static void Cont_19_0(char *t0)
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

LAB0:    t1 = (t0 + 4928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6120);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 15U;
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
    xsi_driver_vfirst_trans(t5, 0, 3);
    t18 = (t0 + 5992);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_20_1(char *t0)
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
    char *t10;

LAB0:    t1 = (t0 + 5176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6184);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 6008);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_21_2(char *t0)
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
    char *t10;

LAB0:    t1 = (t0 + 5424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 6024);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_22_3(char *t0)
{
    char t13[8];
    char t27[8];
    char t42[8];
    char t58[8];
    char t66[8];
    char t102[16];
    char t121[16];
    char t122[16];
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
    char *t26;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
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
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    unsigned int t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;

LAB0:    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 6040);
    *((int *)t2) = 1;
    t3 = (t0 + 5704);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(23, ng0);

LAB5:    xsi_set_current_line(24, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB39;

LAB40:
LAB41:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB142;

LAB143:
LAB144:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB145;

LAB146:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB147:    goto LAB2;

LAB6:    xsi_set_current_line(25, ng0);

LAB9:    xsi_set_current_line(26, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3208);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB8;

LAB10:    xsi_set_current_line(32, ng0);

LAB13:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 2168U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t4);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t12);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB17;

LAB14:    if (t23 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t13) = 1;

LAB17:    memset(t27, 0, 8);
    t28 = (t13 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t28) != 0)
        goto LAB20;

LAB21:    t35 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = (!(t36));
    t38 = *((unsigned int *)t35);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB22;

LAB23:    memcpy(t66, t27, 8);

LAB24:    t94 = (t66 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t66);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB38:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 3848);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

LAB16:    t26 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t27) = 1;
    goto LAB21;

LAB20:    t34 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB21;

LAB22:    t40 = (t0 + 2168U);
    t41 = *((char **)t40);
    t40 = ((char*)((ng3)));
    memset(t42, 0, 8);
    t43 = (t41 + 4);
    t44 = (t40 + 4);
    t45 = *((unsigned int *)t41);
    t46 = *((unsigned int *)t40);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB28;

LAB25:    if (t54 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t42) = 1;

LAB28:    memset(t58, 0, 8);
    t59 = (t42 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t42);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t59) != 0)
        goto LAB31;

LAB32:    t67 = *((unsigned int *)t27);
    t68 = *((unsigned int *)t58);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = (t27 + 4);
    t71 = (t58 + 4);
    t72 = (t66 + 4);
    t73 = *((unsigned int *)t70);
    t74 = *((unsigned int *)t71);
    t75 = (t73 | t74);
    *((unsigned int *)t72) = t75;
    t76 = *((unsigned int *)t72);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB24;

LAB27:    t57 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t58) = 1;
    goto LAB32;

LAB31:    t65 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB32;

LAB33:    t78 = *((unsigned int *)t66);
    t79 = *((unsigned int *)t72);
    *((unsigned int *)t66) = (t78 | t79);
    t80 = (t27 + 4);
    t81 = (t58 + 4);
    t82 = *((unsigned int *)t80);
    t83 = (~(t82));
    t84 = *((unsigned int *)t27);
    t85 = (t84 & t83);
    t86 = *((unsigned int *)t81);
    t87 = (~(t86));
    t88 = *((unsigned int *)t58);
    t89 = (t88 & t87);
    t90 = (~(t85));
    t91 = (~(t89));
    t92 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t92 & t90);
    t93 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t93 & t91);
    goto LAB35;

LAB36:    xsi_set_current_line(34, ng0);
    t100 = ((char*)((ng4)));
    t101 = (t0 + 3528);
    xsi_vlogvar_assign_value(t101, t100, 0, 0, 4);
    goto LAB38;

LAB39:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t4);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t12);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB45;

LAB42:    if (t23 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t13) = 1;

LAB45:    t28 = (t13 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB52;

LAB49:    if (t18 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t13) = 1;

LAB52:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB59;

LAB56:    if (t18 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t13) = 1;

LAB59:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB91;

LAB88:    if (t18 != 0)
        goto LAB90;

LAB89:    *((unsigned int *)t13) = 1;

LAB91:    t28 = (t13 + 4);
    t21 = *((unsigned int *)t28);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB92;

LAB93:
LAB94:
LAB62:
LAB55:
LAB48:    goto LAB41;

LAB44:    t26 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(44, ng0);
    t34 = (t0 + 1048U);
    t35 = *((char **)t34);
    t34 = (t0 + 3208);
    xsi_vlogvar_assign_value(t34, t35, 0, 0, 32);
    goto LAB48;

LAB51:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB52;

LAB53:    xsi_set_current_line(46, ng0);
    t26 = (t0 + 1048U);
    t28 = *((char **)t26);
    t26 = (t0 + 3368);
    xsi_vlogvar_assign_value(t26, t28, 0, 0, 32);
    goto LAB55;

LAB58:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(47, ng0);

LAB63:    xsi_set_current_line(48, ng0);
    t26 = (t0 + 3208);
    t28 = (t26 + 56U);
    t34 = *((char **)t28);
    memset(t27, 0, 8);
    t35 = (t34 + 4);
    t29 = *((unsigned int *)t35);
    t30 = (~(t29));
    t31 = *((unsigned int *)t34);
    t32 = (t31 & t30);
    t33 = (t32 & 4294967295U);
    if (t33 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t35) != 0)
        goto LAB66;

LAB67:    t41 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = (!(t36));
    t38 = *((unsigned int *)t41);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB68;

LAB69:    memcpy(t102, t27, 8);
    t117 = (t102 + 8);
    memset(t117, 0, 8);

LAB70:    t118 = (t0 + 1048U);
    t119 = *((char **)t118);
    t118 = (t0 + 1208U);
    t120 = *((char **)t118);
    xsi_vlog_unsigned_multiply(t121, 64, t119, 32, t120, 32);
    xsi_vlog_unsigned_add(t122, 64, t102, 64, t121, 64);
    t118 = (t0 + 4008);
    xsi_vlogvar_assign_value(t118, t122, 0, 0, 64);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    t11 = (t0 + 3208);
    xsi_vlogvar_assign_value(t11, t4, 32, 0, 32);
    goto LAB62;

LAB64:    *((unsigned int *)t27) = 1;
    goto LAB67;

LAB66:    t40 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB67;

LAB68:    t43 = (t0 + 3368);
    t44 = (t43 + 56U);
    t57 = *((char **)t44);
    memset(t42, 0, 8);
    t59 = (t57 + 4);
    t45 = *((unsigned int *)t59);
    t46 = (~(t45));
    t47 = *((unsigned int *)t57);
    t48 = (t47 & t46);
    t49 = (t48 & 4294967295U);
    if (t49 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t59) != 0)
        goto LAB73;

LAB74:    t50 = 0;

LAB78:    t51 = (t50 < 1);
    if (t51 == 1)
        goto LAB79;

LAB80:    t50 = 1;

LAB81:    t92 = (t50 < 2);
    if (t92 == 1)
        goto LAB82;

LAB87:    goto LAB70;

LAB71:    *((unsigned int *)t42) = 1;
    goto LAB74;

LAB73:    t65 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB74;

LAB75:    t73 = (t50 * 8);
    t74 = *((unsigned int *)t72);
    t75 = *((unsigned int *)t94);
    *((unsigned int *)t72) = (t74 | t75);
    t100 = (t27 + t73);
    t76 = (t73 + 4);
    t101 = (t27 + t76);
    t103 = (t42 + t73);
    t77 = (t73 + 4);
    t104 = (t42 + t77);
    t78 = *((unsigned int *)t101);
    t79 = (~(t78));
    t82 = *((unsigned int *)t100);
    t85 = (t82 & t79);
    t83 = *((unsigned int *)t104);
    t84 = (~(t83));
    t86 = *((unsigned int *)t103);
    t89 = (t86 & t84);
    t87 = (~(t85));
    t88 = (~(t89));
    t90 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t90 & t87);
    t91 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t91 & t88);

LAB77:    t50 = (t50 + 1);
    goto LAB78;

LAB76:    goto LAB77;

LAB79:    t52 = (t50 * 8);
    t70 = (t27 + t52);
    t71 = (t42 + t52);
    t72 = (t102 + t52);
    t53 = *((unsigned int *)t70);
    t54 = *((unsigned int *)t71);
    t55 = (t53 | t54);
    *((unsigned int *)t72) = t55;
    t56 = (t50 * 8);
    t60 = (t56 + 4);
    t80 = (t27 + t60);
    t61 = (t56 + 4);
    t81 = (t42 + t61);
    t62 = (t56 + 4);
    t94 = (t102 + t62);
    t63 = *((unsigned int *)t80);
    t64 = *((unsigned int *)t81);
    t67 = (t63 | t64);
    *((unsigned int *)t94) = t67;
    t68 = *((unsigned int *)t94);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB75;
    else
        goto LAB76;

LAB82:    t93 = (t50 * 8);
    t105 = (t102 + t93);
    *((unsigned int *)t105) = 0;
    t95 = (t93 + 4);
    t106 = (t102 + t95);
    *((unsigned int *)t106) = 0;
    t96 = (t50 < 1);
    if (t96 == 1)
        goto LAB83;

LAB85:    t110 = (t50 < 1);
    if (t110 == 1)
        goto LAB84;

LAB86:    t50 = (t50 + 1);
    goto LAB81;

LAB83:    t107 = (t27 + t93);
    t97 = (t93 + 4);
    t108 = (t27 + t97);
    t98 = *((unsigned int *)t107);
    t99 = *((unsigned int *)t108);
    t109 = (t98 | t99);
    *((unsigned int *)t105) = t109;
    *((unsigned int *)t106) = *((unsigned int *)t108);
    goto LAB86;

LAB84:    t111 = (t42 + t93);
    t112 = (t93 + 4);
    t113 = (t42 + t112);
    t114 = *((unsigned int *)t111);
    t115 = *((unsigned int *)t113);
    t116 = (t114 | t115);
    *((unsigned int *)t105) = t116;
    *((unsigned int *)t106) = *((unsigned int *)t113);
    goto LAB86;

LAB90:    t26 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB91;

LAB92:    xsi_set_current_line(52, ng0);

LAB95:    xsi_set_current_line(53, ng0);
    t34 = (t0 + 2168U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng1)));
    memset(t27, 0, 8);
    t40 = (t35 + 4);
    t41 = (t34 + 4);
    t29 = *((unsigned int *)t35);
    t30 = *((unsigned int *)t34);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t40);
    t33 = *((unsigned int *)t41);
    t36 = (t32 ^ t33);
    t37 = (t31 | t36);
    t38 = *((unsigned int *)t40);
    t39 = *((unsigned int *)t41);
    t45 = (t38 | t39);
    t46 = (~(t45));
    t47 = (t37 & t46);
    if (t47 != 0)
        goto LAB99;

LAB96:    if (t45 != 0)
        goto LAB98;

LAB97:    *((unsigned int *)t27) = 1;

LAB99:    t44 = (t27 + 4);
    t48 = *((unsigned int *)t44);
    t49 = (~(t48));
    t50 = *((unsigned int *)t27);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB100;

LAB101:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB106;

LAB103:    if (t18 != 0)
        goto LAB105;

LAB104:    *((unsigned int *)t13) = 1;

LAB106:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB107;

LAB108:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB113;

LAB110:    if (t18 != 0)
        goto LAB112;

LAB111:    *((unsigned int *)t13) = 1;

LAB113:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB114;

LAB115:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB129;

LAB126:    if (t18 != 0)
        goto LAB128;

LAB127:    *((unsigned int *)t13) = 1;

LAB129:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB130;

LAB131:
LAB132:
LAB116:
LAB109:
LAB102:    goto LAB94;

LAB98:    t43 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB99;

LAB100:    xsi_set_current_line(54, ng0);
    t57 = (t0 + 3688);
    t59 = (t57 + 56U);
    t65 = *((char **)t59);
    t70 = (t0 + 3848);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    xsi_vlog_unsigned_multiply(t102, 64, t65, 32, t72, 32);
    t80 = (t0 + 3368);
    xsi_vlogvar_assign_value(t80, t102, 0, 0, 32);
    t81 = (t0 + 3208);
    xsi_vlogvar_assign_value(t81, t102, 32, 0, 32);
    goto LAB102;

LAB105:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB106;

LAB107:    xsi_set_current_line(56, ng0);
    t26 = (t0 + 3688);
    t28 = (t26 + 56U);
    t34 = *((char **)t28);
    xsi_vlogtype_sign_extend(t102, 64, t34, 32);
    t35 = (t0 + 3848);
    t40 = (t35 + 56U);
    t41 = *((char **)t40);
    xsi_vlogtype_sign_extend(t121, 64, t41, 32);
    xsi_vlog_signed_multiply(t122, 64, t102, 64, t121, 64);
    t43 = (t0 + 3368);
    xsi_vlogvar_assign_value(t43, t122, 0, 0, 32);
    t44 = (t0 + 3208);
    xsi_vlogvar_assign_value(t44, t122, 32, 0, 32);
    goto LAB109;

LAB112:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB113;

LAB114:    xsi_set_current_line(58, ng0);

LAB117:    xsi_set_current_line(59, ng0);
    t26 = (t0 + 3848);
    t28 = (t26 + 56U);
    t34 = *((char **)t28);
    t35 = ((char*)((ng2)));
    memset(t27, 0, 8);
    t40 = (t34 + 4);
    t41 = (t35 + 4);
    t29 = *((unsigned int *)t34);
    t30 = *((unsigned int *)t35);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t40);
    t33 = *((unsigned int *)t41);
    t36 = (t32 ^ t33);
    t37 = (t31 | t36);
    t38 = *((unsigned int *)t40);
    t39 = *((unsigned int *)t41);
    t45 = (t38 | t39);
    t46 = (~(t45));
    t47 = (t37 & t46);
    if (t47 != 0)
        goto LAB119;

LAB118:    if (t45 != 0)
        goto LAB120;

LAB121:    t44 = (t27 + 4);
    t48 = *((unsigned int *)t44);
    t49 = (~(t48));
    t50 = *((unsigned int *)t27);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB122;

LAB123:
LAB124:    goto LAB116;

LAB119:    *((unsigned int *)t27) = 1;
    goto LAB121;

LAB120:    t43 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB121;

LAB122:    xsi_set_current_line(59, ng0);

LAB125:    xsi_set_current_line(60, ng0);
    t57 = (t0 + 3688);
    t59 = (t57 + 56U);
    t65 = *((char **)t59);
    t70 = (t0 + 3848);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    memset(t42, 0, 8);
    xsi_vlog_unsigned_mod(t42, 32, t65, 32, t72, 32);
    t80 = (t0 + 3208);
    xsi_vlogvar_assign_value(t80, t42, 0, 0, 32);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3848);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_divide(t13, 32, t4, 32, t12, 32);
    t26 = (t0 + 3368);
    xsi_vlogvar_assign_value(t26, t13, 0, 0, 32);
    goto LAB124;

LAB128:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB129;

LAB130:    xsi_set_current_line(65, ng0);

LAB133:    xsi_set_current_line(66, ng0);
    t26 = (t0 + 3848);
    t28 = (t26 + 56U);
    t34 = *((char **)t28);
    t35 = ((char*)((ng2)));
    memset(t27, 0, 8);
    t40 = (t34 + 4);
    t41 = (t35 + 4);
    t29 = *((unsigned int *)t34);
    t30 = *((unsigned int *)t35);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t40);
    t33 = *((unsigned int *)t41);
    t36 = (t32 ^ t33);
    t37 = (t31 | t36);
    t38 = *((unsigned int *)t40);
    t39 = *((unsigned int *)t41);
    t45 = (t38 | t39);
    t46 = (~(t45));
    t47 = (t37 & t46);
    if (t47 != 0)
        goto LAB135;

LAB134:    if (t45 != 0)
        goto LAB136;

LAB137:    t44 = (t27 + 4);
    t48 = *((unsigned int *)t44);
    t49 = (~(t48));
    t50 = *((unsigned int *)t27);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB138;

LAB139:
LAB140:    goto LAB132;

LAB135:    *((unsigned int *)t27) = 1;
    goto LAB137;

LAB136:    t43 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB137;

LAB138:    xsi_set_current_line(66, ng0);

LAB141:    xsi_set_current_line(67, ng0);
    t57 = (t0 + 3688);
    t59 = (t57 + 56U);
    t65 = *((char **)t59);
    t70 = (t0 + 3848);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    memset(t66, 0, 8);
    xsi_vlog_signed_mod(t66, 32, t65, 32, t72, 32);
    t80 = (t0 + 3208);
    xsi_vlogvar_assign_value(t80, t66, 0, 0, 32);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3848);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t42, 0, 8);
    xsi_vlog_signed_divide(t42, 32, t4, 32, t12, 32);
    t26 = (t0 + 3368);
    xsi_vlogvar_assign_value(t26, t42, 0, 0, 32);
    goto LAB140;

LAB142:    xsi_set_current_line(73, ng0);
    t11 = (t0 + 3528);
    t12 = (t11 + 56U);
    t26 = *((char **)t12);
    t28 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 4, t26, 4, t28, 4);
    t34 = (t0 + 3528);
    xsi_vlogvar_assign_value(t34, t13, 0, 0, 4);
    goto LAB144;

LAB145:    xsi_set_current_line(76, ng0);
    t11 = ((char*)((ng6)));
    t12 = (t0 + 3048);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    goto LAB147;

}


extern void work_m_00000000003444600478_1603796048_init()
{
	static char *pe[] = {(void *)Cont_19_0,(void *)Cont_20_1,(void *)Cont_21_2,(void *)Always_22_3};
	xsi_register_didat("work_m_00000000003444600478_1603796048", "isim/test_isim_beh.exe.sim/work/m_00000000003444600478_1603796048.didat");
	xsi_register_executes(pe);
}
