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
static const char *ng0 = "E:/ise project/P6/vegitabalecpu/piplelineplus/CMP.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {4U, 0U};
static unsigned int ng4[] = {5U, 0U};
static unsigned int ng5[] = {6U, 0U};
static unsigned int ng6[] = {7U, 0U};
static unsigned int ng7[] = {8U, 0U};



static void Always_9_0(char *t0)
{
    char t10[8];
    char t24[8];
    char t34[8];
    char t37[8];
    char t53[8];
    char t61[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    char *t36;
    char *t38;
    char *t39;
    unsigned int t40;
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
    char *t52;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(9, ng0);

LAB5:    xsi_set_current_line(10, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(11, ng0);

LAB22:    xsi_set_current_line(12, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    t11 = *((unsigned int *)t8);
    t12 = *((unsigned int *)t9);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t7 = (t8 + 4);
    t14 = (t9 + 4);
    t15 = (t10 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB23;

LAB24:
LAB25:    t23 = (t0 + 1928);
    xsi_vlogvar_assign_value(t23, t10, 0, 0, 32);
    xsi_set_current_line(13, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t24, 0, 8);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t16 = (t13 & t12);
    t17 = (t16 & 4294967295U);
    if (t17 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t7) != 0)
        goto LAB28;

LAB29:    memset(t10, 0, 8);
    t9 = (t24 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (~(t18));
    t20 = *((unsigned int *)t24);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB33;

LAB31:    if (*((unsigned int *)t9) == 0)
        goto LAB30;

LAB32:    t14 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t14) = 1;

LAB33:    t15 = (t10 + 4);
    t23 = (t24 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    *((unsigned int *)t10) = t26;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB35;

LAB34:    t31 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t31 & 1U);
    t32 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t32 & 1U);
    t33 = (t0 + 1768);
    xsi_vlogvar_assign_value(t33, t10, 0, 0, 1);
    goto LAB21;

LAB9:    xsi_set_current_line(15, ng0);

LAB36:    xsi_set_current_line(16, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB37;

LAB38:
LAB39:    t14 = (t0 + 1928);
    xsi_vlogvar_assign_value(t14, t10, 0, 0, 32);
    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t16 = (t13 & t12);
    t17 = (t16 & 4294967295U);
    if (t17 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t7) != 0)
        goto LAB42;

LAB43:    t9 = (t0 + 1768);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 1);
    goto LAB21;

LAB11:    xsi_set_current_line(19, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t24, 0, 8);
    t3 = (t24 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t24) = t13;
    t16 = *((unsigned int *)t7);
    t17 = (t16 >> 31);
    t18 = (t17 & 1);
    *((unsigned int *)t3) = t18;
    memset(t10, 0, 8);
    t8 = (t24 + 4);
    t19 = *((unsigned int *)t8);
    t20 = (~(t19));
    t21 = *((unsigned int *)t24);
    t22 = (t21 & t20);
    t25 = (t22 & 1U);
    if (t25 != 0)
        goto LAB47;

LAB45:    if (*((unsigned int *)t8) == 0)
        goto LAB44;

LAB46:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;

LAB47:    t14 = (t0 + 1768);
    xsi_vlogvar_assign_value(t14, t10, 0, 0, 1);
    goto LAB21;

LAB13:    xsi_set_current_line(20, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t24, 0, 8);
    t3 = (t24 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t24) = t13;
    t16 = *((unsigned int *)t7);
    t17 = (t16 >> 31);
    t18 = (t17 & 1);
    *((unsigned int *)t3) = t18;
    memset(t10, 0, 8);
    t8 = (t24 + 4);
    t19 = *((unsigned int *)t8);
    t20 = (~(t19));
    t21 = *((unsigned int *)t24);
    t22 = (t21 & t20);
    t25 = (t22 & 1U);
    if (t25 != 0)
        goto LAB51;

LAB49:    if (*((unsigned int *)t8) == 0)
        goto LAB48;

LAB50:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;

LAB51:    memset(t34, 0, 8);
    t14 = (t10 + 4);
    t26 = *((unsigned int *)t14);
    t27 = (~(t26));
    t28 = *((unsigned int *)t10);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t14) != 0)
        goto LAB54;

LAB55:    t23 = (t34 + 4);
    t31 = *((unsigned int *)t34);
    t32 = *((unsigned int *)t23);
    t35 = (t31 || t32);
    if (t35 > 0)
        goto LAB56;

LAB57:    memcpy(t61, t34, 8);

LAB58:    t93 = (t0 + 1768);
    xsi_vlogvar_assign_value(t93, t61, 0, 0, 1);
    goto LAB21;

LAB15:    xsi_set_current_line(21, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t16 = *((unsigned int *)t7);
    t17 = (t16 >> 31);
    t18 = (t17 & 1);
    *((unsigned int *)t3) = t18;
    memset(t24, 0, 8);
    t8 = (t10 + 4);
    t19 = *((unsigned int *)t8);
    t20 = (~(t19));
    t21 = *((unsigned int *)t10);
    t22 = (t21 & t20);
    t25 = (t22 & 1U);
    if (t25 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t8) != 0)
        goto LAB72;

LAB73:    t14 = (t24 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (!(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB74;

LAB75:    memcpy(t53, t24, 8);

LAB76:    t75 = (t0 + 1768);
    xsi_vlogvar_assign_value(t75, t53, 0, 0, 1);
    goto LAB21;

LAB17:    xsi_set_current_line(22, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t16 = *((unsigned int *)t7);
    t17 = (t16 >> 31);
    t18 = (t17 & 1);
    *((unsigned int *)t3) = t18;
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 1);
    goto LAB21;

LAB19:    xsi_set_current_line(23, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t3);
    t13 = (t11 ^ t12);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 ^ t17);
    t19 = (t13 | t18);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t8);
    t22 = (t20 | t21);
    t25 = (~(t22));
    t26 = (t19 & t25);
    if (t26 != 0)
        goto LAB91;

LAB88:    if (t22 != 0)
        goto LAB90;

LAB89:    *((unsigned int *)t10) = 1;

LAB91:    t14 = (t0 + 1768);
    xsi_vlogvar_assign_value(t14, t10, 0, 0, 1);
    goto LAB21;

LAB23:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t10) = (t21 | t22);
    goto LAB25;

LAB26:    *((unsigned int *)t24) = 1;
    goto LAB29;

LAB28:    t8 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB29;

LAB30:    *((unsigned int *)t10) = 1;
    goto LAB33;

LAB35:    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t23);
    *((unsigned int *)t10) = (t27 | t28);
    t29 = *((unsigned int *)t15);
    t30 = *((unsigned int *)t23);
    *((unsigned int *)t15) = (t29 | t30);
    goto LAB34;

LAB37:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t21 | t22);
    goto LAB39;

LAB40:    *((unsigned int *)t10) = 1;
    goto LAB43;

LAB42:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB43;

LAB44:    *((unsigned int *)t10) = 1;
    goto LAB47;

LAB48:    *((unsigned int *)t10) = 1;
    goto LAB51;

LAB52:    *((unsigned int *)t34) = 1;
    goto LAB55;

LAB54:    t15 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB55;

LAB56:    t33 = (t0 + 1048U);
    t36 = *((char **)t33);
    t33 = ((char*)((ng1)));
    memset(t37, 0, 8);
    t38 = (t36 + 4);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t36);
    t41 = *((unsigned int *)t33);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB60;

LAB59:    if (t49 != 0)
        goto LAB61;

LAB62:    memset(t53, 0, 8);
    t54 = (t37 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t54) != 0)
        goto LAB65;

LAB66:    t62 = *((unsigned int *)t34);
    t63 = *((unsigned int *)t53);
    t64 = (t62 & t63);
    *((unsigned int *)t61) = t64;
    t65 = (t34 + 4);
    t66 = (t53 + 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB67;

LAB68:
LAB69:    goto LAB58;

LAB60:    *((unsigned int *)t37) = 1;
    goto LAB62;

LAB61:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB62;

LAB63:    *((unsigned int *)t53) = 1;
    goto LAB66;

LAB65:    t60 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB66;

LAB67:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t34 + 4);
    t76 = (t53 + 4);
    t77 = *((unsigned int *)t34);
    t78 = (~(t77));
    t79 = *((unsigned int *)t75);
    t80 = (~(t79));
    t81 = *((unsigned int *)t53);
    t82 = (~(t81));
    t83 = *((unsigned int *)t76);
    t84 = (~(t83));
    t85 = (t78 & t80);
    t86 = (t82 & t84);
    t87 = (~(t85));
    t88 = (~(t86));
    t89 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t89 & t87);
    t90 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t90 & t88);
    t91 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t91 & t87);
    t92 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t92 & t88);
    goto LAB69;

LAB70:    *((unsigned int *)t24) = 1;
    goto LAB73;

LAB72:    t9 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB73;

LAB74:    t15 = (t0 + 1048U);
    t23 = *((char **)t15);
    t15 = ((char*)((ng1)));
    memset(t34, 0, 8);
    t33 = (t23 + 4);
    t36 = (t15 + 4);
    t30 = *((unsigned int *)t23);
    t31 = *((unsigned int *)t15);
    t32 = (t30 ^ t31);
    t35 = *((unsigned int *)t33);
    t40 = *((unsigned int *)t36);
    t41 = (t35 ^ t40);
    t42 = (t32 | t41);
    t43 = *((unsigned int *)t33);
    t44 = *((unsigned int *)t36);
    t45 = (t43 | t44);
    t46 = (~(t45));
    t47 = (t42 & t46);
    if (t47 != 0)
        goto LAB80;

LAB77:    if (t45 != 0)
        goto LAB79;

LAB78:    *((unsigned int *)t34) = 1;

LAB80:    memset(t37, 0, 8);
    t39 = (t34 + 4);
    t48 = *((unsigned int *)t39);
    t49 = (~(t48));
    t50 = *((unsigned int *)t34);
    t51 = (t50 & t49);
    t55 = (t51 & 1U);
    if (t55 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t39) != 0)
        goto LAB83;

LAB84:    t56 = *((unsigned int *)t24);
    t57 = *((unsigned int *)t37);
    t58 = (t56 | t57);
    *((unsigned int *)t53) = t58;
    t54 = (t24 + 4);
    t60 = (t37 + 4);
    t65 = (t53 + 4);
    t59 = *((unsigned int *)t54);
    t62 = *((unsigned int *)t60);
    t63 = (t59 | t62);
    *((unsigned int *)t65) = t63;
    t64 = *((unsigned int *)t65);
    t68 = (t64 != 0);
    if (t68 == 1)
        goto LAB85;

LAB86:
LAB87:    goto LAB76;

LAB79:    t38 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB80;

LAB81:    *((unsigned int *)t37) = 1;
    goto LAB84;

LAB83:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB84;

LAB85:    t69 = *((unsigned int *)t53);
    t70 = *((unsigned int *)t65);
    *((unsigned int *)t53) = (t69 | t70);
    t66 = (t24 + 4);
    t67 = (t37 + 4);
    t71 = *((unsigned int *)t66);
    t72 = (~(t71));
    t73 = *((unsigned int *)t24);
    t85 = (t73 & t72);
    t74 = *((unsigned int *)t67);
    t77 = (~(t74));
    t78 = *((unsigned int *)t37);
    t86 = (t78 & t77);
    t79 = (~(t85));
    t80 = (~(t86));
    t81 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t81 & t79);
    t82 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t82 & t80);
    goto LAB87;

LAB90:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB91;

}


extern void work_m_00000000001644870269_1579609468_init()
{
	static char *pe[] = {(void *)Always_9_0};
	xsi_register_didat("work_m_00000000001644870269_1579609468", "isim/test_isim_beh.exe.sim/work/m_00000000001644870269_1579609468.didat");
	xsi_register_executes(pe);
}
