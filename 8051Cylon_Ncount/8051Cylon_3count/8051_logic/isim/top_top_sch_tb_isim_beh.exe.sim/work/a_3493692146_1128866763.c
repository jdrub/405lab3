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
static const char *ng0 = "C:/Users/jdrub/Documents/school/enee445/lab 2/8051Cylon_Ncount/8051Cylon_3count/8051_logic/addsub_core_struc.vhd";



static void work_a_3493692146_1128866763_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(87, ng0);

LAB3:    t1 = (t0 + 2408U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4440);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB2:    t8 = (t0 + 4388);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3493692146_1128866763_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    int t7;
    int t8;
    int t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(100, ng0);

LAB3:    t1 = (t0 + 2776U);
    t2 = *((char **)t1);
    t3 = (0 - 0);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t1 = (t0 + 3220U);
    t6 = *((char **)t1);
    t7 = *((int *)t6);
    t8 = (t7 + 4);
    t9 = (t8 / 4);
    t10 = (t9 - 1);
    t11 = (t10 * 1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t14 = (t13 + t5);
    t1 = (t2 + t14);
    t15 = *((unsigned char *)t1);
    t16 = (t0 + 4476);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t15;
    xsi_driver_first_trans_delta(t16, 1U, 1, 0LL);

LAB2:    t21 = (t0 + 4396);
    *((int *)t21) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3493692146_1128866763_init()
{
	static char *pe[] = {(void *)work_a_3493692146_1128866763_p_0,(void *)work_a_3493692146_1128866763_p_1};
	xsi_register_didat("work_a_3493692146_1128866763", "isim/top_top_sch_tb_isim_beh.exe.sim/work/a_3493692146_1128866763.didat");
	xsi_register_executes(pe);
}
