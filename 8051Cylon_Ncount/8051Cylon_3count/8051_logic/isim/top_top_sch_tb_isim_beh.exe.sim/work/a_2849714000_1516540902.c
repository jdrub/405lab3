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
static const char *ng0 = "C:/Users/jdrub/Documents/school/enee445/lab 2/8051Cylon_Ncount/8051Cylon_3count/8051_logic/comb_mltplr_rtl.vhd";
extern char *IEEE_P_3499444699;

char *ieee_p_3499444699_sub_1704181104_3536714472(char *, char *, char *, char *, char *, char *);


static void work_a_2849714000_1516540902_p_0(char *t0)
{
    char t1[16];
    char t2[16];
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;

LAB0:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 684U);
    t4 = *((char **)t3);
    t3 = (t0 + 3568U);
    t5 = (t0 + 592U);
    t6 = *((char **)t5);
    t5 = (t0 + 3552U);
    t7 = ieee_p_3499444699_sub_1704181104_3536714472(IEEE_P_3499444699, t2, t4, t3, t6, t5);
    t8 = (8 * 2);
    t9 = ieee_std_logic_arith_conv_unsigned_zeroext(IEEE_P_3499444699, t1, t7, t2, t8);
    t10 = (t0 + 1016U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    t12 = (t1 + 12U);
    t13 = *((unsigned int *)t12);
    t13 = (t13 * 1U);
    memcpy(t10, t9, t13);
    xsi_set_current_line(82, ng0);
    t3 = (t0 + 1016U);
    t4 = *((char **)t3);
    t3 = (t0 + 1812);
    t5 = (t3 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t4, 16U);
    xsi_driver_first_trans_fast_port(t3);
    t3 = (t0 + 1768);
    *((int *)t3) = 1;

LAB1:    return;
}


extern void work_a_2849714000_1516540902_init()
{
	static char *pe[] = {(void *)work_a_2849714000_1516540902_p_0};
	xsi_register_didat("work_a_2849714000_1516540902", "isim/top_top_sch_tb_isim_beh.exe.sim/work/a_2849714000_1516540902.didat");
	xsi_register_executes(pe);
}
