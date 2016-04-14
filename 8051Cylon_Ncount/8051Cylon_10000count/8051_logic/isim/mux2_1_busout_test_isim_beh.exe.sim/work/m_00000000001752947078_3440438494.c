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
static const char *ng0 = "//afs/glue.umd.edu/home/glue/l/i/librajrd/home/ENEE405/405lab3/8051Cylon_Ncount/8051Cylon_10000count/8051_logic/MUX2_1.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};



static void Always_27_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(27, ng0);

LAB2:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1048U);
    t2 = *((char **)t1);

LAB3:    t1 = ((char*)((ng1)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 1, t1, 1);
    if (t3 == 1)
        goto LAB4;

LAB5:    t1 = ((char*)((ng2)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 1, t1, 1);
    if (t3 == 1)
        goto LAB6;

LAB7:
LAB8:    goto LAB8;

LAB4:    xsi_set_current_line(29, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    goto LAB8;

LAB6:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 2);
    goto LAB8;

LAB1:    return;
}


extern void work_m_00000000001752947078_3440438494_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_00000000001752947078_3440438494", "isim/mux2_1_busout_test_isim_beh.exe.sim/work/m_00000000001752947078_3440438494.didat");
	xsi_register_executes(pe);
}
