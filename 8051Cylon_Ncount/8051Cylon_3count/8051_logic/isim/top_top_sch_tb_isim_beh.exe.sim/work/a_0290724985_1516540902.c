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
static const char *ng0 = "C:/Users/jdrub/Documents/school/enee445/lab 2/8051Cylon_Ncount/8051Cylon_3count/8051_logic/addsub_ovcy_rtl.vhd";
extern char *IEEE_P_3499444699;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );
char *ieee_p_3499444699_sub_723876666_3536714472(char *, char *, char *, char *, char *, char *);
char *ieee_p_3499444699_sub_723948540_3536714472(char *, char *, char *, char *, char *, char *);


static void work_a_0290724985_1516540902_p_0(char *t0)
{
    char t16[16];
    char t17[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    int t14;
    unsigned char t15;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned char t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned char t33;
    unsigned char t34;
    unsigned char t35;
    unsigned char t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 732U);
    t2 = *((char **)t1);
    t3 = (4 - 2);
    t4 = (3 - t3);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 1524U);
    t8 = *((char **)t7);
    t9 = (4 - 1);
    t10 = (3 - t9);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t7 = (t8 + t12);
    memcpy(t7, t1, 3U);
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 824U);
    t2 = *((char **)t1);
    t3 = (4 - 2);
    t4 = (3 - t3);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 1592U);
    t8 = *((char **)t7);
    t9 = (4 - 1);
    t10 = (3 - t9);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t7 = (t8 + t12);
    memcpy(t7, t1, 3U);
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 732U);
    t2 = *((char **)t1);
    t3 = (4 - 1);
    t9 = (t3 - 3);
    t4 = (t9 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t13 = *((unsigned char *)t1);
    t7 = (t0 + 1728U);
    t8 = *((char **)t7);
    t14 = (1 - 1);
    t10 = (t14 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t7 = (t8 + t12);
    *((unsigned char *)t7) = t13;
    xsi_set_current_line(114, ng0);
    t1 = (t0 + 824U);
    t2 = *((char **)t1);
    t3 = (4 - 1);
    t9 = (t3 - 3);
    t4 = (t9 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t13 = *((unsigned char *)t1);
    t7 = (t0 + 1796U);
    t8 = *((char **)t7);
    t14 = (1 - 1);
    t10 = (t14 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t7 = (t8 + t12);
    *((unsigned char *)t7) = t13;
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 916U);
    t2 = *((char **)t1);
    t13 = *((unsigned char *)t2);
    t15 = (t13 == (unsigned char)3);
    if (t15 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 1524U);
    t2 = *((char **)t1);
    t3 = (0 - 3);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    *((unsigned char *)t1) = (unsigned char)2;
    xsi_set_current_line(124, ng0);
    t1 = (t0 + 1008U);
    t2 = *((char **)t1);
    t13 = *((unsigned char *)t2);
    t1 = (t0 + 1592U);
    t7 = *((char **)t1);
    t3 = (0 - 3);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t7 + t6);
    *((unsigned char *)t1) = t13;
    xsi_set_current_line(125, ng0);
    t1 = (t0 + 1524U);
    t2 = *((char **)t1);
    t1 = (t0 + 5748U);
    t3 = (4 + 1);
    t7 = ieee_std_logic_arith_conv_unsigned_zeroext(IEEE_P_3499444699, t17, t2, t1, t3);
    t8 = (t0 + 1592U);
    t18 = *((char **)t8);
    t8 = (t0 + 5764U);
    t19 = ieee_p_3499444699_sub_723948540_3536714472(IEEE_P_3499444699, t16, t7, t17, t18, t8);
    t20 = (t0 + 1660U);
    t21 = *((char **)t20);
    t20 = (t21 + 0);
    t22 = (t16 + 12U);
    t4 = *((unsigned int *)t22);
    t5 = (1U * t4);
    memcpy(t20, t19, t5);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 1728U);
    t2 = *((char **)t1);
    t3 = (0 - 1);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    *((unsigned char *)t1) = (unsigned char)2;
    xsi_set_current_line(127, ng0);
    t1 = (t0 + 1660U);
    t2 = *((char **)t1);
    t3 = (4 - 4);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t13 = *((unsigned char *)t1);
    t7 = (t0 + 1796U);
    t8 = *((char **)t7);
    t9 = (0 - 1);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t7 = (t8 + t12);
    *((unsigned char *)t7) = t13;
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 1728U);
    t2 = *((char **)t1);
    t1 = (t0 + 5796U);
    t7 = ieee_std_logic_arith_conv_unsigned_zeroext(IEEE_P_3499444699, t17, t2, t1, 3);
    t8 = (t0 + 1796U);
    t18 = *((char **)t8);
    t8 = (t0 + 5812U);
    t19 = ieee_p_3499444699_sub_723948540_3536714472(IEEE_P_3499444699, t16, t7, t17, t18, t8);
    t20 = (t0 + 1864U);
    t21 = *((char **)t20);
    t20 = (t21 + 0);
    t22 = (t16 + 12U);
    t4 = *((unsigned int *)t22);
    t5 = (1U * t4);
    memcpy(t20, t19, t5);

LAB3:    xsi_set_current_line(130, ng0);
    t1 = (t0 + 1864U);
    t2 = *((char **)t1);
    t3 = (2 - 2);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t13 = *((unsigned char *)t1);
    t7 = (t0 + 2660);
    t8 = (t7 + 32U);
    t18 = *((char **)t8);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t13;
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(131, ng0);
    t1 = (t0 + 1660U);
    t2 = *((char **)t1);
    t3 = (4 - 4);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t13 = *((unsigned char *)t1);
    t7 = (t0 + 1864U);
    t8 = *((char **)t7);
    t9 = (2 - 2);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t7 = (t8 + t12);
    t15 = *((unsigned char *)t7);
    t23 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t15);
    t24 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t13, t23);
    t18 = (t0 + 1864U);
    t19 = *((char **)t18);
    t14 = (2 - 2);
    t25 = (t14 * -1);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t18 = (t19 + t27);
    t28 = *((unsigned char *)t18);
    t20 = (t0 + 1660U);
    t21 = *((char **)t20);
    t29 = (4 - 4);
    t30 = (t29 * -1);
    t31 = (1U * t30);
    t32 = (0 + t31);
    t20 = (t21 + t32);
    t33 = *((unsigned char *)t20);
    t34 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t33);
    t35 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t28, t34);
    t36 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t24, t35);
    t22 = (t0 + 2696);
    t37 = (t22 + 32U);
    t38 = *((char **)t37);
    t39 = (t38 + 40U);
    t40 = *((char **)t39);
    *((unsigned char *)t40) = t36;
    xsi_driver_first_trans_fast_port(t22);
    xsi_set_current_line(133, ng0);
    t1 = (t0 + 1660U);
    t2 = *((char **)t1);
    t3 = (4 - 1);
    t4 = (4 - t3);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 2732);
    t8 = (t7 + 32U);
    t18 = *((char **)t8);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t1, 3U);
    xsi_driver_first_trans_delta(t7, 1U, 3U, 0LL);
    xsi_set_current_line(134, ng0);
    t1 = (t0 + 1864U);
    t2 = *((char **)t1);
    t3 = (1 - 2);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t13 = *((unsigned char *)t1);
    t7 = (t0 + 2732);
    t8 = (t7 + 32U);
    t18 = *((char **)t8);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t13;
    xsi_driver_first_trans_delta(t7, 0U, 1, 0LL);
    t1 = (t0 + 2616);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 1524U);
    t7 = *((char **)t1);
    t3 = (0 - 3);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t7 + t6);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 1008U);
    t2 = *((char **)t1);
    t13 = *((unsigned char *)t2);
    t1 = (t0 + 1592U);
    t7 = *((char **)t1);
    t3 = (0 - 3);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t7 + t6);
    *((unsigned char *)t1) = t13;
    xsi_set_current_line(118, ng0);
    t1 = (t0 + 1524U);
    t2 = *((char **)t1);
    t1 = (t0 + 5748U);
    t3 = (4 + 1);
    t7 = ieee_std_logic_arith_conv_unsigned_zeroext(IEEE_P_3499444699, t17, t2, t1, t3);
    t8 = (t0 + 1592U);
    t18 = *((char **)t8);
    t8 = (t0 + 5764U);
    t19 = ieee_p_3499444699_sub_723876666_3536714472(IEEE_P_3499444699, t16, t7, t17, t18, t8);
    t20 = (t0 + 1660U);
    t21 = *((char **)t20);
    t20 = (t21 + 0);
    t22 = (t16 + 12U);
    t4 = *((unsigned int *)t22);
    t5 = (1U * t4);
    memcpy(t20, t19, t5);
    xsi_set_current_line(119, ng0);
    t1 = (t0 + 1728U);
    t2 = *((char **)t1);
    t3 = (0 - 1);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 1660U);
    t2 = *((char **)t1);
    t3 = (4 - 4);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t13 = *((unsigned char *)t1);
    t7 = (t0 + 1796U);
    t8 = *((char **)t7);
    t9 = (0 - 1);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t7 = (t8 + t12);
    *((unsigned char *)t7) = t13;
    xsi_set_current_line(121, ng0);
    t1 = (t0 + 1728U);
    t2 = *((char **)t1);
    t1 = (t0 + 5796U);
    t7 = ieee_std_logic_arith_conv_unsigned_zeroext(IEEE_P_3499444699, t17, t2, t1, 3);
    t8 = (t0 + 1796U);
    t18 = *((char **)t8);
    t8 = (t0 + 5812U);
    t19 = ieee_p_3499444699_sub_723876666_3536714472(IEEE_P_3499444699, t16, t7, t17, t18, t8);
    t20 = (t0 + 1864U);
    t21 = *((char **)t20);
    t20 = (t21 + 0);
    t22 = (t16 + 12U);
    t4 = *((unsigned int *)t22);
    t5 = (1U * t4);
    memcpy(t20, t19, t5);
    goto LAB3;

}


extern void work_a_0290724985_1516540902_init()
{
	static char *pe[] = {(void *)work_a_0290724985_1516540902_p_0};
	xsi_register_didat("work_a_0290724985_1516540902", "isim/top_top_sch_tb_isim_beh.exe.sim/work/a_0290724985_1516540902.didat");
	xsi_register_executes(pe);
}
