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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_3499444699;
char *WORK_P_3827790450;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    unisims_ver_m_00000000003510477262_2316096324_init();
    work_m_00000000001040864161_2839976109_init();
    unisims_ver_m_00000000003750340544_2450422623_init();
    work_m_00000000000413507956_2623497181_init();
    unisims_ver_m_00000000003266096158_2593380106_init();
    unisims_ver_m_00000000001946988858_2297623829_init();
    unisims_ver_m_00000000002399568039_2282143210_init();
    unisims_ver_m_00000000000740258969_3897995058_init();
    unisims_ver_m_00000000000740258969_1625843133_init();
    unisims_ver_m_00000000003131622635_0225263307_init();
    unisims_ver_m_00000000002922998384_0391941465_init();
    work_m_00000000000139646870_3672618099_init();
    work_m_00000000002656912474_3823007873_init();
    work_m_00000000003758597579_4191933935_init();
    work_m_00000000004134447467_2073120511_init();
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    work_p_3827790450_init();
    work_a_0081678826_1516540902_init();
    work_a_0223291137_1516540902_init();
    work_a_3664195724_1128866763_init();
    work_a_0537846073_1516540902_init();
    work_a_2164854782_1516540902_init();
    work_a_0614305628_1516540902_init();
    work_a_0290724985_1516540902_init();
    work_a_3493692146_1128866763_init();
    work_a_2849714000_1516540902_init();
    work_a_0519377733_1516540902_init();
    work_a_0372468159_1516540902_init();
    work_a_0478406346_1128866763_init();
    work_a_3900915648_1516540902_init();
    work_a_3803535191_1516540902_init();
    work_a_2728077367_1128866763_init();


    xsi_register_tops("work_m_00000000003758597579_4191933935");
    xsi_register_tops("work_m_00000000004134447467_2073120511");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    WORK_P_3827790450 = xsi_get_engine_memory("work_p_3827790450");

    return xsi_run_simulation(argc, argv);

}
