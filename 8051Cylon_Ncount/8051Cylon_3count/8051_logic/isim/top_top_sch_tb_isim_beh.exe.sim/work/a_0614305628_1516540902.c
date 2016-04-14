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
static const char *ng0 = "C:/Users/jdrub/Documents/school/enee445/lab 2/8051Cylon_Ncount/8051Cylon_3count/8051_logic/addsub_cy_rtl.vhd";
extern char *IEEE_P_3499444699;

char *ieee_p_3499444699_sub_723876666_3536714472(char *, char *, char *, char *, char *, char *);
char *ieee_p_3499444699_sub_723948540_3536714472(char *, char *, char *, char *, char *, char *);


static void work_a_0614305628_1516540902_p_0(char *t0)
{
    char t10[16];
    char t11[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    int t9;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;

LAB0:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 1292U);
    t3 = *((char **)t1);
    t4 = (4 - 4);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t3 + t6);
    memcpy(t1, t2, 4U);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t1 = (t0 + 1360U);
    t3 = *((char **)t1);
    t4 = (4 - 4);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t3 + t6);
    memcpy(t1, t2, 4U);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1292U);
    t2 = *((char **)t1);
    t9 = (0 - 4);
    t4 = (t9 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    *((unsigned char *)t1) = (unsigned char)2;
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t1 = (t0 + 1360U);
    t3 = *((char **)t1);
    t9 = (0 - 4);
    t4 = (t9 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t3 + t6);
    *((unsigned char *)t1) = t7;
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1292U);
    t2 = *((char **)t1);
    t1 = (t0 + 4612U);
    t9 = (4 + 2);
    t3 = ieee_std_logic_arith_conv_unsigned_zeroext(IEEE_P_3499444699, t11, t2, t1, t9);
    t12 = (t0 + 1360U);
    t13 = *((char **)t12);
    t12 = (t0 + 4628U);
    t14 = ieee_p_3499444699_sub_723948540_3536714472(IEEE_P_3499444699, t10, t3, t11, t13, t12);
    t15 = (t0 + 1428U);
    t16 = *((char **)t15);
    t15 = (t16 + 0);
    t17 = (t10 + 12U);
    t4 = *((unsigned int *)t17);
    t5 = (1U * t4);
    memcpy(t15, t14, t5);

LAB3:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 1428U);
    t2 = *((char **)t1);
    t9 = (4 + 1);
    t18 = (t9 - 5);
    t4 = (t18 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t3 = (t0 + 2224);
    t12 = (t3 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t7;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 1428U);
    t2 = *((char **)t1);
    t4 = (5 - 4);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t3 = (t0 + 2260);
    t12 = (t3 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    t1 = (t0 + 2180);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1292U);
    t3 = *((char **)t1);
    t9 = (0 - 4);
    t4 = (t9 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t3 + t6);
    *((unsigned char *)t1) = (unsigned char)3;
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t1 = (t0 + 1360U);
    t3 = *((char **)t1);
    t9 = (0 - 4);
    t4 = (t9 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t3 + t6);
    *((unsigned char *)t1) = t7;
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 1292U);
    t2 = *((char **)t1);
    t1 = (t0 + 4612U);
    t9 = (4 + 2);
    t3 = ieee_std_logic_arith_conv_unsigned_zeroext(IEEE_P_3499444699, t11, t2, t1, t9);
    t12 = (t0 + 1360U);
    t13 = *((char **)t12);
    t12 = (t0 + 4628U);
    t14 = ieee_p_3499444699_sub_723876666_3536714472(IEEE_P_3499444699, t10, t3, t11, t13, t12);
    t15 = (t0 + 1428U);
    t16 = *((char **)t15);
    t15 = (t16 + 0);
    t17 = (t10 + 12U);
    t4 = *((unsigned int *)t17);
    t5 = (1U * t4);
    memcpy(t15, t14, t5);
    goto LAB3;

}


extern void work_a_0614305628_1516540902_init()
{
	static char *pe[] = {(void *)work_a_0614305628_1516540902_p_0};
	xsi_register_didat("work_a_0614305628_1516540902", "isim/top_top_sch_tb_isim_beh.exe.sim/work/a_0614305628_1516540902.didat");
	xsi_register_executes(pe);
}
