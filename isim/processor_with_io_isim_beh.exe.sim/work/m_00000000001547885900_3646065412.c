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
static const char *ng0 = "F:/DMA_project/last_vers/processor_2/IOdevice.v";
static unsigned int ng1[] = {0U, 255U};
static int ng2[] = {0, 0};
static int ng3[] = {32, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {0U, 0U};
static int ng6[] = {7, 0};
static int ng7[] = {65, 0};
static unsigned int ng8[] = {1U, 0U};
static int ng9[] = {8, 0};
static int ng10[] = {68, 0};



static void Cont_20_0(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 4768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t23, 8);

LAB16:    t24 = (t0 + 6352);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 255U;
    t30 = t29;
    t31 = (t3 + 4);
    t32 = *((unsigned int *)t3);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t24, 0, 7);
    t37 = (t0 + 6080);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 2888);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    goto LAB9;

LAB10:    t23 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 8, t18, 8, t23, 8);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Cont_21_1(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 5016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t23, 8);

LAB16:    t24 = (t0 + 6416);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 1U;
    t30 = t29;
    t31 = (t3 + 4);
    t32 = *((unsigned int *)t3);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t24, 0, 0);
    t37 = (t0 + 6096);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 3048);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    goto LAB9;

LAB10:    t23 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 8, t18, 8, t23, 8);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Cont_22_2(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 5264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t23, 8);

LAB16:    t24 = (t0 + 6480);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 255U;
    t30 = t29;
    t31 = (t3 + 4);
    t32 = *((unsigned int *)t3);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t24, 0, 7);
    t37 = (t0 + 6112);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 3208);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    goto LAB9;

LAB10:    t23 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 8, t18, 8, t23, 8);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Initial_24_3(char *t0)
{
    char t5[8];
    char t16[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    int t29;
    char *t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;

LAB0:    xsi_set_current_line(25, ng0);

LAB2:    xsi_set_current_line(26, ng0);
    xsi_set_current_line(26, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 3368);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB6:    xsi_set_current_line(28, ng0);
    t12 = (t0 + 3368);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 3688);
    t18 = (t0 + 3688);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 3688);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 3368);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_generic_convert_array_indices(t16, t17, t20, t23, 2, 1, t26, 32, 1);
    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t17 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(26, ng0);
    t1 = (t0 + 3368);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 3368);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t15, t14, 0, *((unsigned int *)t17), t37);
    goto LAB8;

}

static void Always_32_4(char *t0)
{
    char t19[8];
    char t33[8];
    char t57[8];
    char t58[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
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
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
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
    char *t55;
    char *t56;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    int t73;
    int t74;

LAB0:    t1 = (t0 + 5760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 6128);
    *((int *)t2) = 1;
    t3 = (t0 + 5792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB12:
LAB11:    xsi_set_current_line(65, ng0);

LAB38:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 6240);
    *((int *)t2) = 1;
    t3 = (t0 + 5792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB7:    xsi_set_current_line(36, ng0);

LAB14:    xsi_set_current_line(37, ng0);
    t7 = ((char*)((ng4)));
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t0 + 8244);
    *((int *)t13) = t12;

LAB15:    t14 = (t0 + 8244);
    if (*((int *)t14) > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(37, ng0);

LAB19:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(38, ng0);

LAB20:    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t17 = (t11 & t10);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB22;

LAB21:    t4 = (t0 + 6160);
    *((int *)t4) = 1;
    t7 = (t0 + 5760U);
    *((char **)t7) = &&LAB20;
    goto LAB1;

LAB9:    xsi_set_current_line(50, ng0);

LAB26:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t7 = (t0 + 8248);
    *((int *)t7) = t12;

LAB27:    t8 = (t0 + 8248);
    if (*((int *)t8) > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(54, ng0);

LAB31:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(55, ng0);

LAB32:    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t17 = (t11 & t10);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB34;

LAB33:    t4 = (t0 + 6208);
    *((int *)t4) = 1;
    t7 = (t0 + 5760U);
    *((char **)t7) = &&LAB32;
    goto LAB1;

LAB13:    goto LAB2;

LAB16:    xsi_set_current_line(37, ng0);
    t15 = (t0 + 6144);
    *((int *)t15) = 1;
    t16 = (t0 + 5792);
    *((char **)t16) = t15;
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    t2 = (t0 + 8244);
    t6 = *((int *)t2);
    *((int *)t2) = (t6 - 1);
    goto LAB15;

LAB22:    t8 = (t0 + 6160);
    *((int *)t8) = 0;
    xsi_set_current_line(38, ng0);

LAB23:    xsi_set_current_line(40, ng0);
    t13 = ((char*)((ng4)));
    t14 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 6176);
    *((int *)t2) = 1;
    t3 = (t0 + 5792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(45, ng0);

LAB25:    xsi_set_current_line(45, ng0);
    t4 = ((char*)((ng2)));
    t7 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 1, 0LL);
    goto LAB13;

LAB28:    xsi_set_current_line(54, ng0);
    t13 = (t0 + 6192);
    *((int *)t13) = 1;
    t14 = (t0 + 5792);
    *((char **)t14) = t13;
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB30:    t2 = (t0 + 8248);
    t6 = *((int *)t2);
    *((int *)t2) = (t6 - 1);
    goto LAB27;

LAB34:    t8 = (t0 + 6208);
    *((int *)t8) = 0;
    xsi_set_current_line(56, ng0);

LAB35:    xsi_set_current_line(57, ng0);
    t13 = ((char*)((ng4)));
    t14 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 6224);
    *((int *)t2) = 1;
    t3 = (t0 + 5792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB36:    xsi_set_current_line(61, ng0);

LAB37:    xsi_set_current_line(61, ng0);
    t4 = ((char*)((ng2)));
    t7 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 1, 0LL);
    goto LAB13;

LAB39:    xsi_set_current_line(67, ng0);

LAB40:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 2168U);
    t7 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t19, 0, 8);
    t8 = (t7 + 4);
    t13 = (t4 + 4);
    t9 = *((unsigned int *)t7);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t13);
    t20 = (t17 ^ t18);
    t21 = (t11 | t20);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t13);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB44;

LAB41:    if (t24 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t19) = 1;

LAB44:    t15 = (t19 + 4);
    t27 = *((unsigned int *)t15);
    t28 = (~(t27));
    t29 = *((unsigned int *)t19);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB45;

LAB46:
LAB47:    goto LAB13;

LAB43:    t14 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(69, ng0);

LAB48:    xsi_set_current_line(70, ng0);
    t16 = (t0 + 1848U);
    t32 = *((char **)t16);
    t16 = ((char*)((ng2)));
    memset(t33, 0, 8);
    t34 = (t32 + 4);
    t35 = (t16 + 4);
    t36 = *((unsigned int *)t32);
    t37 = *((unsigned int *)t16);
    t38 = (t36 ^ t37);
    t39 = *((unsigned int *)t34);
    t40 = *((unsigned int *)t35);
    t41 = (t39 ^ t40);
    t42 = (t38 | t41);
    t43 = *((unsigned int *)t34);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    t46 = (~(t45));
    t47 = (t42 & t46);
    if (t47 != 0)
        goto LAB52;

LAB49:    if (t45 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t33) = 1;

LAB52:    t49 = (t33 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (~(t50));
    t52 = *((unsigned int *)t33);
    t53 = (t52 & t51);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB53;

LAB54:
LAB55:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t19, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t7);
    t20 = (t17 ^ t18);
    t21 = (t11 | t20);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t7);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB62;

LAB59:    if (t24 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t19) = 1;

LAB62:    t13 = (t19 + 4);
    t27 = *((unsigned int *)t13);
    t28 = (~(t27));
    t29 = *((unsigned int *)t19);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB63;

LAB64:
LAB65:    goto LAB47;

LAB51:    t48 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB52;

LAB53:    xsi_set_current_line(72, ng0);

LAB56:    xsi_set_current_line(74, ng0);
    t55 = (t0 + 1208U);
    t56 = *((char **)t55);
    t55 = (t0 + 3688);
    t59 = (t0 + 3688);
    t60 = (t59 + 72U);
    t61 = *((char **)t60);
    t62 = (t0 + 3688);
    t63 = (t62 + 64U);
    t64 = *((char **)t63);
    t65 = (t0 + 1528U);
    t66 = *((char **)t65);
    xsi_vlog_generic_convert_array_indices(t57, t58, t61, t64, 2, 1, t66, 8, 2);
    t65 = (t57 + 4);
    t67 = *((unsigned int *)t65);
    t6 = (!(t67));
    t68 = (t58 + 4);
    t69 = *((unsigned int *)t68);
    t12 = (!(t69));
    t70 = (t6 && t12);
    if (t70 == 1)
        goto LAB57;

LAB58:    goto LAB55;

LAB57:    t71 = *((unsigned int *)t57);
    t72 = *((unsigned int *)t58);
    t73 = (t71 - t72);
    t74 = (t73 + 1);
    xsi_vlogvar_wait_assign_value(t55, t56, 0, *((unsigned int *)t58), t74, 0LL);
    goto LAB58;

LAB61:    t8 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB62;

LAB63:    xsi_set_current_line(79, ng0);

LAB66:    xsi_set_current_line(80, ng0);
    t14 = ((char*)((ng4)));
    t15 = (t14 + 4);
    t36 = *((unsigned int *)t15);
    t37 = (~(t36));
    t38 = *((unsigned int *)t14);
    t6 = (t38 & t37);
    t16 = (t0 + 8252);
    *((int *)t16) = t6;

LAB67:    t32 = (t0 + 8252);
    if (*((int *)t32) > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(81, ng0);

LAB71:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 3688);
    t8 = (t7 + 72U);
    t13 = *((char **)t8);
    t14 = (t0 + 3688);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t32 = (t0 + 1528U);
    t34 = *((char **)t32);
    xsi_vlog_generic_get_array_select_value(t19, 8, t4, t13, t16, 2, 1, t34, 8, 2);
    t32 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t32, t19, 0, 0, 8, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 6272);
    *((int *)t2) = 1;
    t3 = (t0 + 5792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB72;
    goto LAB1;

LAB68:    xsi_set_current_line(80, ng0);
    t34 = (t0 + 6256);
    *((int *)t34) = 1;
    t35 = (t0 + 5792);
    *((char **)t35) = t34;
    *((char **)t1) = &&LAB70;
    goto LAB1;

LAB70:    t2 = (t0 + 8252);
    t6 = *((int *)t2);
    *((int *)t2) = (t6 - 1);
    goto LAB67;

LAB72:    xsi_set_current_line(85, ng0);

LAB73:    xsi_set_current_line(85, ng0);
    t4 = ((char*)((ng2)));
    t7 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 1, 0LL);
    goto LAB65;

}


extern void work_m_00000000001547885900_3646065412_init()
{
	static char *pe[] = {(void *)Cont_20_0,(void *)Cont_21_1,(void *)Cont_22_2,(void *)Initial_24_3,(void *)Always_32_4};
	xsi_register_didat("work_m_00000000001547885900_3646065412", "isim/processor_with_io_isim_beh.exe.sim/work/m_00000000001547885900_3646065412.didat");
	xsi_register_executes(pe);
}
