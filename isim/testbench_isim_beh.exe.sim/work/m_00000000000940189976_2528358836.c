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
static const char *ng0 = "F:/DMA_project/last_vers/processor_2/pro.v";
static unsigned int ng1[] = {0U, 255U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {3U, 0U};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {0U, 0U};
static int ng6[] = {1, 0};
static int ng7[] = {3, 0};
static int ng8[] = {100, 0};
static int ng9[] = {10, 0};
static int ng10[] = {55, 0};
static unsigned int ng11[] = {2U, 0U};
static int ng12[] = {150, 0};
static int ng13[] = {200, 0};
static unsigned int ng14[] = {4U, 0U};
static int ng15[] = {45, 0};
static int ng16[] = {40, 0};
static unsigned int ng17[] = {5U, 0U};
static int ng18[] = {60, 0};
static unsigned int ng19[] = {6U, 0U};
static int ng20[] = {5, 0};
static int ng21[] = {70, 0};
static unsigned int ng22[] = {7U, 0U};



static void Cont_46_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t19[8];
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
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;

LAB0:    t1 = (t0 + 5568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1848U);
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

LAB9:    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t24, 8);

LAB16:    t25 = (t0 + 7952);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t29, 0, 8);
    t30 = 1U;
    t31 = t30;
    t32 = (t3 + 4);
    t33 = *((unsigned int *)t3);
    t30 = (t30 & t33);
    t34 = *((unsigned int *)t32);
    t31 = (t31 & t34);
    t35 = (t29 + 4);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t36 | t30);
    t37 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t37 | t31);
    xsi_driver_vfirst_trans(t25, 0, 0);
    t38 = (t0 + 7376);
    *((int *)t38) = 1;

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
    memcpy(t19, t18, 8);
    goto LAB9;

LAB10:    t24 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 8, t19, 8, t24, 8);
    goto LAB16;

LAB14:    memcpy(t3, t19, 8);
    goto LAB16;

}

static void Cont_47_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t19[8];
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
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;

LAB0:    t1 = (t0 + 5816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1848U);
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

LAB9:    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t24, 8);

LAB16:    t25 = (t0 + 8016);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t29, 0, 8);
    t30 = 1U;
    t31 = t30;
    t32 = (t3 + 4);
    t33 = *((unsigned int *)t3);
    t30 = (t30 & t33);
    t34 = *((unsigned int *)t32);
    t31 = (t31 & t34);
    t35 = (t29 + 4);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t36 | t30);
    t37 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t37 | t31);
    xsi_driver_vfirst_trans(t25, 0, 0);
    t38 = (t0 + 7392);
    *((int *)t38) = 1;

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
    memcpy(t19, t18, 8);
    goto LAB9;

LAB10:    t24 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 8, t19, 8, t24, 8);
    goto LAB16;

LAB14:    memcpy(t3, t19, 8);
    goto LAB16;

}

static void Cont_48_2(char *t0)
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

LAB0:    t1 = (t0 + 6064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1848U);
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

LAB16:    t24 = (t0 + 8080);
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
    t37 = (t0 + 7408);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 3368);
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

static void Cont_49_3(char *t0)
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

LAB0:    t1 = (t0 + 6312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1848U);
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

LAB16:    t24 = (t0 + 8144);
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
    t37 = (t0 + 7424);
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

static void Cont_50_4(char *t0)
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

LAB0:    t1 = (t0 + 6560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1848U);
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

LAB16:    t24 = (t0 + 8208);
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
    t37 = (t0 + 7440);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 3528);
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

static void Initial_53_5(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(54, ng0);

LAB2:    xsi_set_current_line(55, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 4328);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(56, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 4488);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(57, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(58, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Always_61_6(char *t0)
{
    char t19[8];
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

LAB0:    t1 = (t0 + 7056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 7456);
    *((int *)t2) = 1;
    t3 = (t0 + 7088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(62, ng0);

LAB5:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(66, ng0);

LAB24:    xsi_set_current_line(67, ng0);
    t7 = ((char*)((ng6)));
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t0 + 10268);
    *((int *)t13) = t12;

LAB25:    t14 = (t0 + 10268);
    if (*((int *)t14) > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(68, ng0);

LAB29:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t2);
    t6 = (t11 & t10);
    t4 = (t0 + 10272);
    *((int *)t4) = t6;

LAB30:    t7 = (t0 + 10272);
    if (*((int *)t7) > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(74, ng0);

LAB34:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 7504);
    *((int *)t2) = 1;
    t3 = (t0 + 7088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB9:    xsi_set_current_line(97, ng0);

LAB49:    xsi_set_current_line(98, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t7 = (t0 + 10284);
    *((int *)t7) = t12;

LAB50:    t8 = (t0 + 10284);
    if (*((int *)t8) > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(99, ng0);

LAB54:    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t2);
    t6 = (t11 & t10);
    t4 = (t0 + 10288);
    *((int *)t4) = t6;

LAB55:    t7 = (t0 + 10288);
    if (*((int *)t7) > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t2);
    t6 = (t11 & t10);
    t4 = (t0 + 10292);
    *((int *)t4) = t6;

LAB62:    t7 = (t0 + 10292);
    if (*((int *)t7) > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(114, ng0);

LAB66:    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 7632);
    *((int *)t2) = 1;
    t3 = (t0 + 7088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB11:    xsi_set_current_line(127, ng0);

LAB74:    xsi_set_current_line(128, ng0);
    t3 = (t0 + 7664);
    *((int *)t3) = 1;
    t4 = (t0 + 7088);
    *((char **)t4) = t3;
    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB13:    xsi_set_current_line(140, ng0);

LAB79:    xsi_set_current_line(141, ng0);
    t3 = (t0 + 7696);
    *((int *)t3) = 1;
    t4 = (t0 + 7088);
    *((char **)t4) = t3;
    *((char **)t1) = &&LAB80;
    goto LAB1;

LAB15:    xsi_set_current_line(152, ng0);

LAB84:    xsi_set_current_line(153, ng0);
    t3 = (t0 + 7728);
    *((int *)t3) = 1;
    t4 = (t0 + 7088);
    *((char **)t4) = t3;
    *((char **)t1) = &&LAB85;
    goto LAB1;

LAB17:    xsi_set_current_line(165, ng0);

LAB89:    xsi_set_current_line(166, ng0);
    t3 = (t0 + 7760);
    *((int *)t3) = 1;
    t4 = (t0 + 7088);
    *((char **)t4) = t3;
    *((char **)t1) = &&LAB90;
    goto LAB1;

LAB19:    xsi_set_current_line(177, ng0);

LAB94:    xsi_set_current_line(178, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t7 = (t0 + 10300);
    *((int *)t7) = t12;

LAB95:    t8 = (t0 + 10300);
    if (*((int *)t8) > 0)
        goto LAB96;

LAB97:    xsi_set_current_line(179, ng0);

LAB99:    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t2);
    t6 = (t11 & t10);
    t4 = (t0 + 10304);
    *((int *)t4) = t6;

LAB100:    t7 = (t0 + 10304);
    if (*((int *)t7) > 0)
        goto LAB101;

LAB102:    xsi_set_current_line(185, ng0);

LAB104:    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 7824);
    *((int *)t2) = 1;
    t3 = (t0 + 7088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB105;
    goto LAB1;

LAB21:    xsi_set_current_line(206, ng0);

LAB119:    xsi_set_current_line(207, ng0);
    t3 = (t0 + 2328U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t17 = (t11 & t10);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB120;

LAB121:
LAB122:    xsi_set_current_line(212, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 4488);
    t8 = (t7 + 56U);
    t13 = *((char **)t8);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 8, t4, 8, t13, 8);
    t14 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t14, t19, 0, 0, 8, 0LL);
    goto LAB23;

LAB26:    xsi_set_current_line(67, ng0);
    t15 = (t0 + 7472);
    *((int *)t15) = 1;
    t16 = (t0 + 7088);
    *((char **)t16) = t15;
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    t2 = (t0 + 10268);
    t6 = *((int *)t2);
    *((int *)t2) = (t6 - 1);
    goto LAB25;

LAB31:    xsi_set_current_line(73, ng0);
    t8 = (t0 + 7488);
    *((int *)t8) = 1;
    t13 = (t0 + 7088);
    *((char **)t13) = t8;
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB33:    t2 = (t0 + 10272);
    t6 = *((int *)t2);
    *((int *)t2) = (t6 - 1);
    goto LAB30;

LAB35:    xsi_set_current_line(79, ng0);

LAB36:    xsi_set_current_line(79, ng0);
    t4 = ((char*)((ng4)));
    t7 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t2);
    t6 = (t11 & t10);
    t4 = (t0 + 10276);
    *((int *)t4) = t6;

LAB37:    t7 = (t0 + 10276);
    if (*((int *)t7) > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(83, ng0);

LAB41:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 7536);
    *((int *)t2) = 1;
    t3 = (t0 + 7088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB38:    xsi_set_current_line(82, ng0);
    t8 = (t0 + 7520);
    *((int *)t8) = 1;
    t13 = (t0 + 7088);
    *((char **)t13) = t8;
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB40:    t2 = (t0 + 10276);
    t6 = *((int *)t2);
    *((int *)t2) = (t6 - 1);
    goto LAB37;

LAB42:    xsi_set_current_line(86, ng0);

LAB43:    xsi_set_current_line(86, ng0);
    t4 = ((char*)((ng4)));
    t7 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t2);
    t6 = (t11 & t10);
    t4 = (t0 + 10280);
    *((int *)t4) = t6;

LAB44:    t7 = (t0 + 10280);
    if (*((int *)t7) > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(89, ng0);

LAB48:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB45:    xsi_set_current_line(88, ng0);
    t8 = (t0 + 7552);
    *((int *)t8) = 1;
    t13 = (t0 + 7088);
    *((char **)t13) = t8;
    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB47:    t2 = (t0 + 10280);
    t6 = *((int *)t2);
    *((int *)t2) = (t6 - 1);
    goto LAB44;

LAB51:    xsi_set_current_line(98, ng0);
    t13 = (t0 + 7568);
    *((int *)t13) = 1;
    t14 = (t0 + 7088);
    *((char **)t14) = t13;
    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB53:    t2 = (t0 + 10284);
    t6 = *((int *)t2);
    *((int *)t2) = (t6 - 1);
    goto LAB50;

LAB56:    xsi_set_current_line(104, ng0);
    t8 = (t0 + 7584);
    *((int *)t8) = 1;
    t13 = (t0 + 7088);
    *((char **)t13) = t8;
    *((char **)t1) = &&LAB58;
    goto LAB1;

LAB58:    xsi_set_current_line(105, ng0);

LAB59:    xsi_set_current_line(106, ng0);
    t14 = ((char*)((ng6)));
    t15 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 7600);
    *((int *)t2) = 1;
    t3 = (t0 + 7088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB60;
    goto LAB1;

LAB60:    xsi_set_current_line(110, ng0);

LAB61:    xsi_set_current_line(110, ng0);
    t4 = ((char*)((ng4)));
    t7 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 1, 0LL);
    t2 = (t0 + 10288);
    t6 = *((int *)t2);
    *((int *)t2) = (t6 - 1);
    goto LAB55;

LAB63:    xsi_set_current_line(113, ng0);
    t8 = (t0 + 7616);
    *((int *)t8) = 1;
    t13 = (t0 + 7088);
    *((char **)t13) = t8;
    *((char **)t1) = &&LAB65;
    goto LAB1;

LAB65:    t2 = (t0 + 10292);
    t6 = *((int *)t2);
    *((int *)t2) = (t6 - 1);
    goto LAB62;

LAB67:    xsi_set_current_line(117, ng0);

LAB68:    xsi_set_current_line(117, ng0);
    t4 = ((char*)((ng4)));
    t7 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t2);
    t6 = (t11 & t10);
    t4 = (t0 + 10296);
    *((int *)t4) = t6;

LAB69:    t7 = (t0 + 10296);
    if (*((int *)t7) > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(120, ng0);

LAB73:    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB70:    xsi_set_current_line(119, ng0);
    t8 = (t0 + 7648);
    *((int *)t8) = 1;
    t13 = (t0 + 7088);
    *((char **)t13) = t8;
    *((char **)t1) = &&LAB72;
    goto LAB1;

LAB72:    t2 = (t0 + 10296);
    t6 = *((int *)t2);
    *((int *)t2) = (t6 - 1);
    goto LAB69;

LAB75:    xsi_set_current_line(129, ng0);

LAB76:    xsi_set_current_line(130, ng0);
    t7 = ((char*)((ng6)));
    t8 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 7680);
    *((int *)t2) = 1;
    t3 = (t0 + 7088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB77;
    goto LAB1;

LAB77:    xsi_set_current_line(134, ng0);

LAB78:    xsi_set_current_line(134, ng0);
    t4 = ((char*)((ng4)));
    t7 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 1, 0LL);
    goto LAB23;

LAB80:    xsi_set_current_line(142, ng0);

LAB81:    xsi_set_current_line(143, ng0);
    t7 = ((char*)((ng6)));
    t8 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 0LL);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 7712);
    *((int *)t2) = 1;
    t3 = (t0 + 7088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB82;
    goto LAB1;

LAB82:    xsi_set_current_line(147, ng0);

LAB83:    xsi_set_current_line(147, ng0);
    t4 = ((char*)((ng4)));
    t7 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 1, 0LL);
    goto LAB23;

LAB85:    xsi_set_current_line(154, ng0);

LAB86:    xsi_set_current_line(155, ng0);
    t7 = ((char*)((ng6)));
    t8 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 7744);
    *((int *)t2) = 1;
    t3 = (t0 + 7088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB87:    xsi_set_current_line(160, ng0);

LAB88:    xsi_set_current_line(160, ng0);
    t4 = ((char*)((ng4)));
    t7 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 1, 0LL);
    goto LAB23;

LAB90:    xsi_set_current_line(167, ng0);

LAB91:    xsi_set_current_line(168, ng0);
    t7 = ((char*)((ng6)));
    t8 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 0LL);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 7776);
    *((int *)t2) = 1;
    t3 = (t0 + 7088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB92;
    goto LAB1;

LAB92:    xsi_set_current_line(172, ng0);

LAB93:    xsi_set_current_line(172, ng0);
    t4 = ((char*)((ng4)));
    t7 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 1, 0LL);
    goto LAB23;

LAB96:    xsi_set_current_line(178, ng0);
    t13 = (t0 + 7792);
    *((int *)t13) = 1;
    t14 = (t0 + 7088);
    *((char **)t14) = t13;
    *((char **)t1) = &&LAB98;
    goto LAB1;

LAB98:    t2 = (t0 + 10300);
    t6 = *((int *)t2);
    *((int *)t2) = (t6 - 1);
    goto LAB95;

LAB101:    xsi_set_current_line(184, ng0);
    t8 = (t0 + 7808);
    *((int *)t8) = 1;
    t13 = (t0 + 7088);
    *((char **)t13) = t8;
    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB103:    t2 = (t0 + 10304);
    t6 = *((int *)t2);
    *((int *)t2) = (t6 - 1);
    goto LAB100;

LAB105:    xsi_set_current_line(189, ng0);

LAB106:    xsi_set_current_line(189, ng0);
    t4 = ((char*)((ng4)));
    t7 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t2);
    t6 = (t11 & t10);
    t4 = (t0 + 10308);
    *((int *)t4) = t6;

LAB107:    t7 = (t0 + 10308);
    if (*((int *)t7) > 0)
        goto LAB108;

LAB109:    xsi_set_current_line(193, ng0);

LAB111:    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 7856);
    *((int *)t2) = 1;
    t3 = (t0 + 7088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB112;
    goto LAB1;

LAB108:    xsi_set_current_line(192, ng0);
    t8 = (t0 + 7840);
    *((int *)t8) = 1;
    t13 = (t0 + 7088);
    *((char **)t13) = t8;
    *((char **)t1) = &&LAB110;
    goto LAB1;

LAB110:    t2 = (t0 + 10308);
    t6 = *((int *)t2);
    *((int *)t2) = (t6 - 1);
    goto LAB107;

LAB112:    xsi_set_current_line(196, ng0);

LAB113:    xsi_set_current_line(196, ng0);
    t4 = ((char*)((ng4)));
    t7 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t2);
    t6 = (t11 & t10);
    t4 = (t0 + 10312);
    *((int *)t4) = t6;

LAB114:    t7 = (t0 + 10312);
    if (*((int *)t7) > 0)
        goto LAB115;

LAB116:    xsi_set_current_line(199, ng0);

LAB118:    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB23;

LAB115:    xsi_set_current_line(198, ng0);
    t8 = (t0 + 7872);
    *((int *)t8) = 1;
    t13 = (t0 + 7088);
    *((char **)t13) = t8;
    *((char **)t1) = &&LAB117;
    goto LAB1;

LAB117:    t2 = (t0 + 10312);
    t6 = *((int *)t2);
    *((int *)t2) = (t6 - 1);
    goto LAB114;

LAB120:    xsi_set_current_line(208, ng0);

LAB123:    xsi_set_current_line(209, ng0);
    t7 = ((char*)((ng6)));
    t8 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 0LL);
    goto LAB122;

}


extern void work_m_00000000000940189976_2528358836_init()
{
	static char *pe[] = {(void *)Cont_46_0,(void *)Cont_47_1,(void *)Cont_48_2,(void *)Cont_49_3,(void *)Cont_50_4,(void *)Initial_53_5,(void *)Always_61_6};
	xsi_register_didat("work_m_00000000000940189976_2528358836", "isim/testbench_isim_beh.exe.sim/work/m_00000000000940189976_2528358836.didat");
	xsi_register_executes(pe);
}
