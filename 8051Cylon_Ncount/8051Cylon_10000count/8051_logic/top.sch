<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3e" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_9" />
        <signal name="XLXN_10" />
        <signal name="resetin" />
        <signal name="clk10mHz" />
        <signal name="XLXN_16" />
        <signal name="ram_datain(7:0)" />
        <signal name="ram_addr(6:0)" />
        <signal name="ram_dataout(7:0)" />
        <signal name="ROMdata(7:0)" />
        <signal name="ROMaddr(15:0)" />
        <signal name="ROMaddr(11:0)" />
        <signal name="clkin" />
        <signal name="P1out(7:0)" />
        <signal name="P1in(7:0)" />
        <signal name="XLXN_40(7:0)" />
        <signal name="XLXN_43(7:0)" />
        <signal name="XLXN_44(0:1)" />
        <signal name="XLXN_45(0:1)" />
        <port polarity="Input" name="resetin" />
        <port polarity="Input" name="clkin" />
        <port polarity="Output" name="P1out(7:0)" />
        <port polarity="Input" name="P1in(7:0)" />
        <blockdef name="mc8051_core">
            <timestamp>2012-11-20T3:26:55</timestamp>
            <rect width="352" x="64" y="-960" height="960" />
            <line x2="0" y1="-928" y2="-928" x1="64" />
            <line x2="0" y1="-864" y2="-864" x1="64" />
            <rect width="64" x="0" y="-812" height="24" />
            <line x2="0" y1="-800" y2="-800" x1="64" />
            <rect width="64" x="0" y="-748" height="24" />
            <line x2="0" y1="-736" y2="-736" x1="64" />
            <rect width="64" x="0" y="-684" height="24" />
            <line x2="0" y1="-672" y2="-672" x1="64" />
            <rect width="64" x="0" y="-620" height="24" />
            <line x2="0" y1="-608" y2="-608" x1="64" />
            <rect width="64" x="0" y="-556" height="24" />
            <line x2="0" y1="-544" y2="-544" x1="64" />
            <rect width="64" x="0" y="-492" height="24" />
            <line x2="0" y1="-480" y2="-480" x1="64" />
            <rect width="64" x="0" y="-428" height="24" />
            <line x2="0" y1="-416" y2="-416" x1="64" />
            <rect width="64" x="0" y="-364" height="24" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <rect width="64" x="0" y="-300" height="24" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <rect width="64" x="0" y="-236" height="24" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="480" y1="-928" y2="-928" x1="416" />
            <line x2="480" y1="-864" y2="-864" x1="416" />
            <line x2="480" y1="-800" y2="-800" x1="416" />
            <rect width="64" x="416" y="-748" height="24" />
            <line x2="480" y1="-736" y2="-736" x1="416" />
            <rect width="64" x="416" y="-684" height="24" />
            <line x2="480" y1="-672" y2="-672" x1="416" />
            <rect width="64" x="416" y="-620" height="24" />
            <line x2="480" y1="-608" y2="-608" x1="416" />
            <rect width="64" x="416" y="-556" height="24" />
            <line x2="480" y1="-544" y2="-544" x1="416" />
            <rect width="64" x="416" y="-492" height="24" />
            <line x2="480" y1="-480" y2="-480" x1="416" />
            <rect width="64" x="416" y="-428" height="24" />
            <line x2="480" y1="-416" y2="-416" x1="416" />
            <rect width="64" x="416" y="-364" height="24" />
            <line x2="480" y1="-352" y2="-352" x1="416" />
            <rect width="64" x="416" y="-300" height="24" />
            <line x2="480" y1="-288" y2="-288" x1="416" />
            <rect width="64" x="416" y="-236" height="24" />
            <line x2="480" y1="-224" y2="-224" x1="416" />
            <rect width="64" x="416" y="-172" height="24" />
            <line x2="480" y1="-160" y2="-160" x1="416" />
            <rect width="64" x="416" y="-108" height="24" />
            <line x2="480" y1="-96" y2="-96" x1="416" />
            <rect width="64" x="416" y="-44" height="24" />
            <line x2="480" y1="-32" y2="-32" x1="416" />
        </blockdef>
        <blockdef name="and2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="144" ey="-144" sx="144" sy="-48" r="48" cx="144" cy="-96" />
            <line x2="64" y1="-48" y2="-48" x1="144" />
            <line x2="144" y1="-144" y2="-144" x1="64" />
            <line x2="64" y1="-48" y2="-144" x1="64" />
        </blockdef>
        <blockdef name="LUT_RAM_from_template">
            <timestamp>2012-11-24T16:49:54</timestamp>
            <rect width="256" x="64" y="-256" height="256" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-236" height="24" />
            <line x2="384" y1="-224" y2="-224" x1="320" />
        </blockdef>
        <blockdef name="BRAM4kx8">
            <timestamp>2012-11-28T16:14:36</timestamp>
            <rect width="256" x="64" y="-128" height="128" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-108" height="24" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
        </blockdef>
        <blockdef name="wiz_clkgen">
            <timestamp>2014-10-19T15:28:44</timestamp>
            <rect width="336" x="64" y="-256" height="256" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="464" y1="-224" y2="-224" x1="400" />
            <line x2="464" y1="-160" y2="-160" x1="400" />
            <line x2="464" y1="-96" y2="-96" x1="400" />
            <line x2="464" y1="-32" y2="-32" x1="400" />
        </blockdef>
        <blockdef name="SPYMASTER">
            <timestamp>2016-4-7T18:49:20</timestamp>
            <rect width="64" x="368" y="20" height="24" />
            <line x2="432" y1="32" y2="32" x1="368" />
            <rect width="64" x="0" y="-364" height="24" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <rect width="64" x="0" y="-300" height="24" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="368" y="-268" height="24" />
            <line x2="432" y1="-256" y2="-256" x1="368" />
            <line x2="432" y1="-160" y2="-160" x1="368" />
            <line x2="432" y1="-64" y2="-64" x1="368" />
            <rect width="304" x="64" y="-384" height="448" />
        </blockdef>
        <blockdef name="constant">
            <timestamp>2006-1-1T10:10:10</timestamp>
            <rect width="112" x="0" y="0" height="64" />
            <line x2="112" y1="32" y2="32" x1="144" />
        </blockdef>
        <block symbolname="mc8051_core" name="XLXI_1">
            <blockpin signalname="clk10mHz" name="clk" />
            <blockpin signalname="resetin" name="reset" />
            <blockpin signalname="ROMdata(7:0)" name="rom_data_i(7:0)" />
            <blockpin signalname="ram_dataout(7:0)" name="ram_data_i(7:0)" />
            <blockpin name="int0_i(0:0)" />
            <blockpin name="int1_i(0:0)" />
            <blockpin name="all_t0_i(0:0)" />
            <blockpin name="all_t1_i(0:0)" />
            <blockpin name="all_rxd_i(0:0)" />
            <blockpin signalname="P1in(7:0)" name="p0_i(7:0)" />
            <blockpin signalname="XLXN_40(7:0)" name="p1_i(7:0)" />
            <blockpin name="p2_i(7:0)" />
            <blockpin name="p3_i(7:0)" />
            <blockpin name="datax_i(7:0)" />
            <blockpin signalname="XLXN_9" name="ram_wr_o" />
            <blockpin signalname="XLXN_10" name="ram_en_o" />
            <blockpin name="wrx_o" />
            <blockpin name="p0_o(7:0)" />
            <blockpin signalname="P1out(7:0)" name="p1_o(7:0)" />
            <blockpin signalname="XLXN_43(7:0)" name="p2_o(7:0)" />
            <blockpin name="p3_o(7:0)" />
            <blockpin name="all_rxd_o(0:0)" />
            <blockpin name="all_txd_o(0:0)" />
            <blockpin name="all_rxdwr_o(0:0)" />
            <blockpin signalname="ROMaddr(15:0)" name="rom_adr_o(15:0)" />
            <blockpin signalname="ram_datain(7:0)" name="ram_data_o(7:0)" />
            <blockpin signalname="ram_addr(6:0)" name="ram_adr_o(6:0)" />
            <blockpin name="datax_o(7:0)" />
            <blockpin name="adrx_o(15:0)" />
        </block>
        <block symbolname="and2" name="XLXI_5">
            <blockpin signalname="XLXN_10" name="I0" />
            <blockpin signalname="XLXN_9" name="I1" />
            <blockpin signalname="XLXN_16" name="O" />
        </block>
        <block symbolname="LUT_RAM_from_template" name="XLXI_8">
            <blockpin signalname="XLXN_16" name="WE" />
            <blockpin signalname="clk10mHz" name="CLK" />
            <blockpin signalname="ram_datain(7:0)" name="DIN(7:0)" />
            <blockpin signalname="ram_addr(6:0)" name="ADDR(6:0)" />
            <blockpin signalname="ram_dataout(7:0)" name="DOUT(7:0)" />
        </block>
        <block symbolname="BRAM4kx8" name="XLXI_11">
            <blockpin signalname="clk10mHz" name="clkin" />
            <blockpin signalname="ROMaddr(11:0)" name="Addr(11:0)" />
            <blockpin signalname="ROMdata(7:0)" name="Dout(7:0)" />
        </block>
        <block symbolname="wiz_clkgen" name="XLXI_12">
            <blockpin signalname="clkin" name="CLKIN_IN" />
            <blockpin signalname="resetin" name="RST_IN" />
            <blockpin signalname="clk10mHz" name="CLKDV_OUT" />
            <blockpin name="CLKIN_IBUFG_OUT" />
            <blockpin name="CLK0_OUT" />
            <blockpin name="LOCKED_OUT" />
        </block>
        <block symbolname="SPYMASTER" name="SPYMASTER">
            <blockpin signalname="XLXN_45(0:1)" name="RSELIN(0:1)" />
            <blockpin signalname="clk10mHz" name="CLK" />
            <blockpin signalname="XLXN_43(7:0)" name="DI(0:7)" />
            <blockpin name="MISO" />
            <blockpin name="SSIN(0:1)" />
            <blockpin signalname="XLXN_45(0:1)" name="RSELOUT(0:1)" />
            <blockpin signalname="XLXN_40(7:0)" name="DO(0:7)" />
            <blockpin name="SSOUT(0:1)" />
            <blockpin name="MOSI" />
            <blockpin name="SCLK" />
        </block>
        <block symbolname="constant" name="XLXI_19">
            <attr value="00" name="CValue">
                <trait delete="all:1 sym:0" />
                <trait editname="all:1 sch:0" />
                <trait valuetype="BitVector 32 Hexadecimal" />
            </attr>
            <blockpin signalname="XLXN_45(0:1)" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1184" y="1696" name="XLXI_1" orien="R0">
        </instance>
        <instance x="1728" y="896" name="XLXI_5" orien="R0" />
        <branch name="XLXN_9">
            <wire x2="1728" y1="768" y2="768" x1="1664" />
        </branch>
        <branch name="XLXN_10">
            <wire x2="1728" y1="832" y2="832" x1="1664" />
        </branch>
        <branch name="XLXN_16">
            <wire x2="2704" y1="800" y2="800" x1="1984" />
        </branch>
        <instance x="2704" y="1024" name="XLXI_8" orien="R0">
        </instance>
        <branch name="ram_datain(7:0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1888" y="1472" type="branch" />
            <wire x2="1888" y1="1472" y2="1472" x1="1664" />
            <wire x2="2608" y1="1472" y2="1472" x1="1888" />
            <wire x2="2704" y1="928" y2="928" x1="2608" />
            <wire x2="2608" y1="928" y2="1472" x1="2608" />
        </branch>
        <branch name="ram_addr(6:0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1808" y="1536" type="branch" />
            <wire x2="1808" y1="1536" y2="1536" x1="1664" />
            <wire x2="2656" y1="1536" y2="1536" x1="1808" />
            <wire x2="2704" y1="992" y2="992" x1="2656" />
            <wire x2="2656" y1="992" y2="1536" x1="2656" />
        </branch>
        <branch name="ram_dataout(7:0)">
            <attrtext style="alignment:SOFT-TVCENTER;fontsize:28;fontname:Arial" attrname="Name" x="3152" y="704" type="branch" />
            <wire x2="3152" y1="560" y2="560" x1="944" />
            <wire x2="3152" y1="560" y2="704" x1="3152" />
            <wire x2="3152" y1="704" y2="800" x1="3152" />
            <wire x2="944" y1="560" y2="960" x1="944" />
            <wire x2="1184" y1="960" y2="960" x1="944" />
            <wire x2="3152" y1="800" y2="800" x1="3088" />
        </branch>
        <branch name="resetin">
            <wire x2="336" y1="688" y2="688" x1="240" />
            <wire x2="1072" y1="688" y2="688" x1="336" />
            <wire x2="1072" y1="688" y2="832" x1="1072" />
            <wire x2="1184" y1="832" y2="832" x1="1072" />
            <wire x2="448" y1="464" y2="464" x1="336" />
            <wire x2="336" y1="464" y2="688" x1="336" />
        </branch>
        <iomarker fontsize="28" x="240" y="688" name="resetin" orien="R180" />
        <branch name="ROMaddr(15:0)">
            <attrtext style="alignment:SOFT-VLEFT;fontsize:28;fontname:Arial" attrname="Name" x="1744" y="1376" type="branch" />
            <wire x2="1744" y1="1408" y2="1408" x1="1664" />
            <wire x2="1744" y1="1376" y2="1408" x1="1744" />
        </branch>
        <bustap x2="1840" y1="1408" y2="1408" x1="1744" />
        <branch name="ROMaddr(11:0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1872" y="1408" type="branch" />
            <wire x2="1872" y1="1408" y2="1408" x1="1840" />
            <wire x2="2080" y1="1408" y2="1408" x1="1872" />
        </branch>
        <instance x="2080" y="1440" name="XLXI_11" orien="R0">
        </instance>
        <instance x="448" y="496" name="XLXI_12" orien="R0">
        </instance>
        <branch name="clkin">
            <wire x2="448" y1="272" y2="272" x1="336" />
        </branch>
        <iomarker fontsize="28" x="336" y="272" name="clkin" orien="R180" />
        <branch name="clk10mHz">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1280" y="624" type="branch" />
            <wire x2="1104" y1="272" y2="272" x1="912" />
            <wire x2="1104" y1="272" y2="624" x1="1104" />
            <wire x2="1104" y1="624" y2="768" x1="1104" />
            <wire x2="1184" y1="768" y2="768" x1="1104" />
            <wire x2="1280" y1="624" y2="624" x1="1104" />
            <wire x2="2000" y1="624" y2="624" x1="1280" />
            <wire x2="2000" y1="624" y2="864" x1="2000" />
            <wire x2="2704" y1="864" y2="864" x1="2000" />
            <wire x2="2000" y1="864" y2="1344" x1="2000" />
            <wire x2="2080" y1="1344" y2="1344" x1="2000" />
            <wire x2="1104" y1="768" y2="768" x1="960" />
            <wire x2="960" y1="768" y2="2080" x1="960" />
            <wire x2="1760" y1="2080" y2="2080" x1="960" />
        </branch>
        <branch name="ROMdata(7:0)">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2496" y="1344" type="branch" />
            <wire x2="1184" y1="896" y2="896" x1="416" />
            <wire x2="416" y1="896" y2="1776" x1="416" />
            <wire x2="2528" y1="1776" y2="1776" x1="416" />
            <wire x2="2496" y1="1344" y2="1344" x1="2464" />
            <wire x2="2528" y1="1344" y2="1344" x1="2496" />
            <wire x2="2528" y1="1344" y2="1776" x1="2528" />
        </branch>
        <branch name="P1out(7:0)">
            <wire x2="2368" y1="1024" y2="1024" x1="1664" />
            <wire x2="2368" y1="1024" y2="1136" x1="2368" />
            <wire x2="3072" y1="1136" y2="1136" x1="2368" />
        </branch>
        <iomarker fontsize="28" x="3072" y="1136" name="P1out(7:0)" orien="R0" />
        <branch name="P1in(7:0)">
            <wire x2="1184" y1="1344" y2="1344" x1="1152" />
        </branch>
        <iomarker fontsize="28" x="1152" y="1344" name="P1in(7:0)" orien="R180" />
        <instance x="1760" y="2304" name="SPYMASTER" orien="R0">
        </instance>
        <branch name="XLXN_40(7:0)">
            <wire x2="1184" y1="1408" y2="1408" x1="1136" />
            <wire x2="1136" y1="1408" y2="1744" x1="1136" />
            <wire x2="2256" y1="1744" y2="1744" x1="1136" />
            <wire x2="2256" y1="1744" y2="2336" x1="2256" />
            <wire x2="2256" y1="2336" y2="2336" x1="2192" />
        </branch>
        <branch name="XLXN_43(7:0)">
            <wire x2="1712" y1="1088" y2="1088" x1="1664" />
            <wire x2="1712" y1="1088" y2="2208" x1="1712" />
            <wire x2="1760" y1="2208" y2="2208" x1="1712" />
        </branch>
        <instance x="1408" y="1952" name="XLXI_19" orien="R0">
        </instance>
        <branch name="XLXN_45(0:1)">
            <wire x2="1648" y1="1984" y2="1984" x1="1552" />
            <wire x2="1648" y1="1984" y2="2016" x1="1648" />
            <wire x2="1760" y1="2016" y2="2016" x1="1648" />
            <wire x2="1648" y1="1952" y2="1984" x1="1648" />
            <wire x2="1760" y1="1952" y2="1952" x1="1648" />
        </branch>
    </sheet>
</drawing>