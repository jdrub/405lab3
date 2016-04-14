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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/jdrub/Documents/school/enee445/lab 2/8051Cylon_Ncount/8051Cylon_3count/8051_logic/comb_divider_rtl.vhd";
extern char *IEEE_P_3499444699;
extern char *IEEE_P_2592010699;

char *ieee_p_3499444699_sub_2254183471_3536714472(char *, char *, char *, char *, char *, char *);
char *ieee_p_3499444699_sub_2930370427_3536714472(char *, char *, char *, char *, int );


static void work_a_0519377733_1516540902_p_0(char *t0)
{
    char t7[16];
    char t14[16];
    char t34[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned char t25;
    char *t26;
    char *t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    int t35;
    int t36;
    unsigned int t37;

LAB0:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 1108U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    memcpy(t1, t2, 8U);
    xsi_set_current_line(85, ng0);
    t4 = (8 - 1);
    t1 = (t0 + 4380);
    *((int *)t1) = t4;
    t2 = (t0 + 4384);
    *((int *)t2) = 0;
    t5 = t4;
    t6 = 0;

LAB2:    if (t5 >= t6)
        goto LAB3;

LAB5:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 1176U);
    t2 = *((char **)t1);
    t1 = (t0 + 2040);
    t3 = (t1 + 32U);
    t8 = *((char **)t3);
    t13 = (t8 + 40U);
    t16 = *((char **)t13);
    memcpy(t16, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 1244U);
    t2 = *((char **)t1);
    t1 = (t0 + 2076);
    t3 = (t1 + 32U);
    t8 = *((char **)t3);
    t13 = (t8 + 40U);
    t16 = *((char **)t13);
    memcpy(t16, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 1996);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 1108U);
    t8 = *((char **)t3);
    t9 = (8 - 1);
    t10 = (7 - t9);
    t3 = (t0 + 4380);
    xsi_vhdl_check_range_of_slice(7, 0, -1, t9, *((int *)t3), -1);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t13 = (t8 + t12);
    t15 = (8 - 1);
    t16 = (t0 + 4380);
    t17 = (t14 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t15;
    t18 = (t17 + 4U);
    *((int *)t18) = *((int *)t16);
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = *((int *)t16);
    t20 = (t19 - t15);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t21;
    t18 = ieee_p_3499444699_sub_2930370427_3536714472(IEEE_P_3499444699, t7, t13, t14, 8);
    t22 = (t7 + 12U);
    t21 = *((unsigned int *)t22);
    t21 = (t21 * 1U);
    t23 = (t0 + 684U);
    t24 = *((char **)t23);
    t23 = ((IEEE_P_2592010699) + 2332);
    t25 = xsi_vhdl_greaterEqual(t23, t18, t21, t24, 8U);
    if (t25 != 0)
        goto LAB6;

LAB8:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 1244U);
    t2 = *((char **)t1);
    t1 = (t0 + 4380);
    t4 = *((int *)t1);
    t9 = (t4 - 7);
    t10 = (t9 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, *((int *)t1));
    t11 = (1U * t10);
    t12 = (0 + t11);
    t3 = (t2 + t12);
    *((unsigned char *)t3) = (unsigned char)2;
    xsi_set_current_line(103, ng0);
    t1 = (t0 + 1108U);
    t2 = *((char **)t1);
    t4 = (8 - 1);
    t10 = (7 - t4);
    t1 = (t0 + 4380);
    xsi_vhdl_check_range_of_slice(7, 0, -1, t4, *((int *)t1), -1);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t3 = (t2 + t12);
    t9 = (8 - 1);
    t8 = (t0 + 4380);
    t13 = (t14 + 0U);
    t16 = (t13 + 0U);
    *((int *)t16) = t9;
    t16 = (t13 + 4U);
    *((int *)t16) = *((int *)t8);
    t16 = (t13 + 8U);
    *((int *)t16) = -1;
    t15 = *((int *)t8);
    t19 = (t15 - t9);
    t21 = (t19 * -1);
    t21 = (t21 + 1);
    t16 = (t13 + 12U);
    *((unsigned int *)t16) = t21;
    t16 = ieee_std_logic_arith_conv_unsigned_zeroext(IEEE_P_3499444699, t7, t3, t14, 8);
    t17 = (t0 + 1176U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    t22 = (t7 + 12U);
    t21 = *((unsigned int *)t22);
    t21 = (t21 * 1U);
    memcpy(t17, t16, t21);

LAB7:
LAB4:    t1 = (t0 + 4380);
    t5 = *((int *)t1);
    t2 = (t0 + 4384);
    t6 = *((int *)t2);
    if (t5 == t6)
        goto LAB5;

LAB12:    t4 = (t5 + -1);
    t5 = t4;
    t3 = (t0 + 4380);
    *((int *)t3) = t5;
    goto LAB2;

LAB6:    xsi_set_current_line(91, ng0);
    t26 = (t0 + 1244U);
    t27 = *((char **)t26);
    t26 = (t0 + 4380);
    t28 = *((int *)t26);
    t29 = (t28 - 7);
    t30 = (t29 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, *((int *)t26));
    t31 = (1U * t30);
    t32 = (0 + t31);
    t33 = (t27 + t32);
    *((unsigned char *)t33) = (unsigned char)3;
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 1108U);
    t2 = *((char **)t1);
    t4 = (8 - 1);
    t10 = (7 - t4);
    t1 = (t0 + 4380);
    xsi_vhdl_check_range_of_slice(7, 0, -1, t4, *((int *)t1), -1);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t3 = (t2 + t12);
    t9 = (8 - 1);
    t8 = (t0 + 4380);
    t13 = (t34 + 0U);
    t16 = (t13 + 0U);
    *((int *)t16) = t9;
    t16 = (t13 + 4U);
    *((int *)t16) = *((int *)t8);
    t16 = (t13 + 8U);
    *((int *)t16) = -1;
    t15 = *((int *)t8);
    t19 = (t15 - t9);
    t21 = (t19 * -1);
    t21 = (t21 + 1);
    t16 = (t13 + 12U);
    *((unsigned int *)t16) = t21;
    t16 = ieee_std_logic_arith_conv_unsigned_zeroext(IEEE_P_3499444699, t14, t3, t34, 8);
    t17 = (t0 + 684U);
    t18 = *((char **)t17);
    t17 = (t0 + 4232U);
    t22 = ieee_p_3499444699_sub_2254183471_3536714472(IEEE_P_3499444699, t7, t16, t14, t18, t17);
    t23 = (t0 + 1176U);
    t24 = *((char **)t23);
    t23 = (t24 + 0);
    t26 = (t7 + 12U);
    t21 = *((unsigned int *)t26);
    t30 = (1U * t21);
    memcpy(t23, t22, t30);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 4380);
    t4 = *((int *)t1);
    t25 = (t4 != 0);
    if (t25 != 0)
        goto LAB9;

LAB11:
LAB10:    goto LAB7;

LAB9:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1176U);
    t3 = *((char **)t2);
    t9 = (8 - 1);
    t2 = (t0 + 4380);
    t15 = *((int *)t2);
    t19 = (t9 - t15);
    t10 = (7 - t19);
    xsi_vhdl_check_range_of_slice(7, 0, -1, t19, 0, -1);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t8 = (t3 + t12);
    t13 = (t0 + 1108U);
    t16 = *((char **)t13);
    t20 = (8 - 1);
    t21 = (7 - t20);
    t13 = (t0 + 4380);
    xsi_vhdl_check_range_of_slice(7, 0, -1, t20, *((int *)t13), -1);
    t30 = (t21 * 1U);
    t31 = (0 + t30);
    t17 = (t16 + t31);
    t28 = (8 - 1);
    t18 = (t0 + 4380);
    t29 = *((int *)t18);
    t35 = (t28 - t29);
    t36 = (0 - t35);
    t32 = (t36 * -1);
    t32 = (t32 + 1);
    t37 = (1U * t32);
    memcpy(t17, t8, t37);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 4380);
    t4 = *((int *)t1);
    t9 = (t4 - 1);
    t15 = (t9 - 7);
    t10 = (t15 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, t9);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t3 = (t2 + t12);
    t25 = *((unsigned char *)t3);
    t8 = (t0 + 1108U);
    t13 = *((char **)t8);
    t8 = (t0 + 4380);
    t19 = *((int *)t8);
    t20 = (t19 - 1);
    t28 = (t20 - 7);
    t21 = (t28 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, t20);
    t30 = (1U * t21);
    t31 = (0 + t30);
    t16 = (t13 + t31);
    *((unsigned char *)t16) = t25;
    goto LAB10;

}


extern void work_a_0519377733_1516540902_init()
{
	static char *pe[] = {(void *)work_a_0519377733_1516540902_p_0};
	xsi_register_didat("work_a_0519377733_1516540902", "isim/top_top_sch_tb_isim_beh.exe.sim/work/a_0519377733_1516540902.didat");
	xsi_register_executes(pe);
}
