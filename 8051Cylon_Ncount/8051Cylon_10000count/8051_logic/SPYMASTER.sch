<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3e" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="DO(0:7)" />
        <signal name="RSELIN(0:1)" />
        <signal name="CLK" />
        <signal name="SSOUT(0:1)" />
        <signal name="DI(0:7)" />
        <signal name="MISO" />
        <signal name="MOSI" />
        <signal name="RSELOUT(0:1)" />
        <signal name="XLXN_86(0:7)" />
        <signal name="XLXN_149(0:7)" />
        <signal name="XLXN_150(0:7)" />
        <signal name="SSIN(0:1)" />
        <signal name="SCLK" />
        <signal name="XLXN_164" />
        <signal name="XLXN_165" />
        <signal name="XLXN_166" />
        <signal name="XLXN_168" />
        <signal name="XLXN_169" />
        <signal name="XLXN_172" />
        <signal name="XLXN_174(0:7)" />
        <port polarity="Output" name="DO(0:7)" />
        <port polarity="Input" name="RSELIN(0:1)" />
        <port polarity="Input" name="CLK" />
        <port polarity="Output" name="SSOUT(0:1)" />
        <port polarity="Input" name="DI(0:7)" />
        <port polarity="Input" name="MISO" />
        <port polarity="Output" name="MOSI" />
        <port polarity="Input" name="RSELOUT(0:1)" />
        <port polarity="Input" name="SSIN(0:1)" />
        <port polarity="Output" name="SCLK" />
        <blockdef name="mux4_1">
            <timestamp>2016-4-7T18:20:53</timestamp>
            <rect width="64" x="0" y="20" height="24" />
            <line x2="0" y1="32" y2="32" x1="64" />
            <rect width="64" x="0" y="84" height="24" />
            <line x2="0" y1="96" y2="96" x1="64" />
            <rect width="64" x="0" y="148" height="24" />
            <line x2="0" y1="160" y2="160" x1="64" />
            <rect width="64" x="0" y="212" height="24" />
            <line x2="0" y1="224" y2="224" x1="64" />
            <rect width="64" x="320" y="20" height="24" />
            <line x2="384" y1="32" y2="32" x1="320" />
            <rect width="256" x="64" y="-320" height="576" />
            <line x2="-4" y1="-176" y2="-176" x1="60" />
            <rect width="64" x="0" y="-188" height="24" />
        </blockdef>
        <blockdef name="gnd">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-96" x1="64" />
            <line x2="52" y1="-48" y2="-48" x1="76" />
            <line x2="60" y1="-32" y2="-32" x1="68" />
            <line x2="40" y1="-64" y2="-64" x1="88" />
            <line x2="64" y1="-64" y2="-80" x1="64" />
            <line x2="64" y1="-128" y2="-96" x1="64" />
        </blockdef>
        <blockdef name="SPIREG">
            <timestamp>2016-4-7T19:47:38</timestamp>
            <line x2="0" y1="32" y2="32" x1="64" />
            <line x2="0" y1="96" y2="96" x1="64" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-352" y2="-352" x1="320" />
            <line x2="384" y1="-192" y2="-192" x1="320" />
            <rect width="64" x="324" y="-76" height="24" />
            <line x2="384" y1="-64" y2="-64" x1="320" />
            <rect width="256" x="64" y="-384" height="520" />
        </blockdef>
        <blockdef name="CLKDIV">
            <timestamp>2016-4-7T19:55:10</timestamp>
            <rect width="256" x="64" y="-128" height="128" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
        </blockdef>
        <blockdef name="MUX2_1_busout">
            <timestamp>2016-4-7T20:19:58</timestamp>
            <rect width="64" x="0" y="20" height="24" />
            <line x2="0" y1="32" y2="32" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-172" height="24" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <rect width="256" x="64" y="-192" height="256" />
        </blockdef>
        <blockdef name="vcc">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-64" x1="64" />
            <line x2="64" y1="0" y2="-32" x1="64" />
            <line x2="32" y1="-64" y2="-64" x1="96" />
        </blockdef>
        <blockdef name="constant">
            <timestamp>2006-1-1T10:10:10</timestamp>
            <rect width="112" x="0" y="0" height="64" />
            <line x2="112" y1="32" y2="32" x1="144" />
        </blockdef>
        <block symbolname="mux4_1" name="XLXI_14">
            <blockpin signalname="XLXN_86(0:7)" name="i0(0:7)" />
            <blockpin signalname="XLXN_149(0:7)" name="i1(0:7)" />
            <blockpin signalname="XLXN_150(0:7)" name="i2(0:7)" />
            <blockpin signalname="XLXN_174(0:7)" name="i3(0:7)" />
            <blockpin signalname="DO(0:7)" name="dout(0:7)" />
            <blockpin signalname="RSELOUT(0:1)" name="sel(0:1)" />
        </block>
        <block symbolname="SPIREG" name="SPDAT">
            <attr value="SPIREG" name="VeriModel" />
            <blockpin signalname="SCLK" name="CLK" />
            <blockpin signalname="MISO" name="DI" />
            <blockpin name="EN" />
            <blockpin signalname="XLXN_164" name="ID_0" />
            <blockpin signalname="XLXN_164" name="ID_1" />
            <blockpin signalname="DI(0:7)" name="PLD(0:7)" />
            <blockpin signalname="RSELIN(0:1)" name="RSELIN(0:1)" />
            <blockpin signalname="MOSI" name="DO" />
            <blockpin signalname="XLXN_172" name="READY" />
            <blockpin signalname="XLXN_86(0:7)" name="POUT(0:7)" />
        </block>
        <block symbolname="SPIREG" name="SPCON">
            <blockpin signalname="SCLK" name="CLK" />
            <blockpin name="DI" />
            <blockpin name="EN" />
            <blockpin signalname="XLXN_165" name="ID_0" />
            <blockpin signalname="XLXN_166" name="ID_1" />
            <blockpin signalname="DI(0:7)" name="PLD(0:7)" />
            <blockpin signalname="RSELIN(0:1)" name="RSELIN(0:1)" />
            <blockpin name="DO" />
            <blockpin name="READY" />
            <blockpin signalname="XLXN_149(0:7)" name="POUT(0:7)" />
        </block>
        <block symbolname="SPIREG" name="SPSTA">
            <blockpin signalname="SCLK" name="CLK" />
            <blockpin name="DI" />
            <blockpin name="EN" />
            <blockpin signalname="XLXN_168" name="ID_0" />
            <blockpin signalname="XLXN_169" name="ID_1" />
            <blockpin signalname="DI(0:7)" name="PLD(0:7)" />
            <blockpin signalname="RSELIN(0:1)" name="RSELIN(0:1)" />
            <blockpin name="DO" />
            <blockpin name="READY" />
            <blockpin signalname="XLXN_150(0:7)" name="POUT(0:7)" />
        </block>
        <block symbolname="CLKDIV" name="XLXI_23">
            <blockpin signalname="CLK" name="CLKIN" />
            <blockpin signalname="SSIN(0:1)" name="SS(0:1)" />
            <blockpin signalname="SCLK" name="CLKOUT" />
        </block>
        <block symbolname="MUX2_1_busout" name="slavemux">
            <blockpin signalname="XLXN_172" name="sel" />
            <blockpin signalname="SSIN(0:1)" name="i1(0:1)" />
            <blockpin signalname="SSOUT(0:1)" name="dout(0:1)" />
        </block>
        <block symbolname="gnd" name="XLXI_29">
            <blockpin signalname="XLXN_164" name="G" />
        </block>
        <block symbolname="gnd" name="XLXI_30">
            <blockpin signalname="XLXN_165" name="G" />
        </block>
        <block symbolname="gnd" name="XLXI_31">
            <blockpin signalname="XLXN_169" name="G" />
        </block>
        <block symbolname="vcc" name="XLXI_32">
            <blockpin signalname="XLXN_166" name="P" />
        </block>
        <block symbolname="vcc" name="XLXI_33">
            <blockpin signalname="XLXN_168" name="P" />
        </block>
        <block symbolname="constant" name="XLXI_34">
            <attr value="0" name="CValue">
                <trait delete="all:1 sym:0" />
                <trait editname="all:1 sch:0" />
                <trait valuetype="BitVector 32 Hexadecimal" />
            </attr>
            <blockpin signalname="XLXN_174(0:7)" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="2080" y="1280" name="XLXI_14" orien="R0">
        </instance>
        <branch name="SSOUT(0:1)">
            <wire x2="2528" y1="2224" y2="2224" x1="2384" />
            <wire x2="2544" y1="1888" y2="1888" x1="2528" />
            <wire x2="2528" y1="1888" y2="2224" x1="2528" />
        </branch>
        <iomarker fontsize="28" x="624" y="496" name="DI(0:7)" orien="R180" />
        <branch name="DI(0:7)">
            <wire x2="960" y1="496" y2="496" x1="624" />
            <wire x2="960" y1="496" y2="608" x1="960" />
            <wire x2="960" y1="608" y2="1264" x1="960" />
            <wire x2="960" y1="1264" y2="1872" x1="960" />
            <wire x2="1296" y1="1872" y2="1872" x1="960" />
            <wire x2="1296" y1="1264" y2="1264" x1="960" />
            <wire x2="1360" y1="608" y2="608" x1="960" />
        </branch>
        <branch name="MOSI">
            <wire x2="1712" y1="144" y2="160" x1="1712" />
            <wire x2="1760" y1="160" y2="160" x1="1712" />
            <wire x2="1760" y1="160" y2="352" x1="1760" />
            <wire x2="1760" y1="352" y2="352" x1="1744" />
        </branch>
        <iomarker fontsize="28" x="2544" y="1888" name="SSOUT(0:1)" orien="R0" />
        <iomarker fontsize="28" x="672" y="1952" name="SSIN(0:1)" orien="R180" />
        <iomarker fontsize="28" x="608" y="816" name="RSELIN(0:1)" orien="R180" />
        <branch name="RSELOUT(0:1)">
            <wire x2="2048" y1="240" y2="240" x1="640" />
            <wire x2="2048" y1="240" y2="1104" x1="2048" />
            <wire x2="2080" y1="1104" y2="1104" x1="2048" />
        </branch>
        <branch name="DO(0:7)">
            <wire x2="2576" y1="1312" y2="1312" x1="2464" />
        </branch>
        <iomarker fontsize="28" x="2576" y="1312" name="DO(0:7)" orien="R0" />
        <branch name="XLXN_86(0:7)">
            <wire x2="2064" y1="640" y2="640" x1="1744" />
            <wire x2="2064" y1="640" y2="1312" x1="2064" />
            <wire x2="2080" y1="1312" y2="1312" x1="2064" />
        </branch>
        <branch name="CLK">
            <wire x2="848" y1="2368" y2="2368" x1="608" />
        </branch>
        <branch name="RSELIN(0:1)">
            <wire x2="1168" y1="816" y2="816" x1="608" />
            <wire x2="1168" y1="816" y2="1328" x1="1168" />
            <wire x2="1168" y1="1328" y2="1936" x1="1168" />
            <wire x2="1296" y1="1936" y2="1936" x1="1168" />
            <wire x2="1296" y1="1328" y2="1328" x1="1168" />
            <wire x2="1360" y1="672" y2="672" x1="1168" />
            <wire x2="1168" y1="672" y2="816" x1="1168" />
        </branch>
        <branch name="MISO">
            <wire x2="1296" y1="144" y2="352" x1="1296" />
            <wire x2="1360" y1="352" y2="352" x1="1296" />
        </branch>
        <rect width="1720" x="744" y="176" height="2352" />
        <instance x="848" y="2464" name="XLXI_23" orien="R0">
        </instance>
        <iomarker fontsize="28" x="608" y="2368" name="CLK" orien="R180" />
        <instance x="2000" y="2384" name="slavemux" orien="R0">
        </instance>
        <instance x="1296" y="1360" name="SPCON" orien="R0">
            <attrtext style="fontsize:28;fontname:Arial" attrname="InstName" x="144" y="-256" type="instance" />
        </instance>
        <iomarker fontsize="28" x="1296" y="144" name="MISO" orien="R270" />
        <iomarker fontsize="28" x="1712" y="144" name="MOSI" orien="R270" />
        <iomarker fontsize="28" x="640" y="240" name="RSELOUT(0:1)" orien="R180" />
        <instance x="1296" y="1968" name="SPSTA" orien="R0">
            <attrtext style="fontsize:28;fontname:Arial" attrname="InstName" x="160" y="-240" type="instance" />
        </instance>
        <branch name="XLXN_149(0:7)">
            <wire x2="1872" y1="1296" y2="1296" x1="1680" />
            <wire x2="1872" y1="1296" y2="1376" x1="1872" />
            <wire x2="2080" y1="1376" y2="1376" x1="1872" />
        </branch>
        <branch name="SSIN(0:1)">
            <wire x2="784" y1="1952" y2="1952" x1="672" />
            <wire x2="784" y1="1952" y2="2208" x1="784" />
            <wire x2="784" y1="2208" y2="2432" x1="784" />
            <wire x2="848" y1="2432" y2="2432" x1="784" />
            <wire x2="1392" y1="2208" y2="2208" x1="784" />
            <wire x2="1392" y1="2208" y2="2416" x1="1392" />
            <wire x2="2000" y1="2416" y2="2416" x1="1392" />
        </branch>
        <instance x="1360" y="704" name="SPDAT" orien="R0">
            <attrtext style="fontsize:28;fontname:Arial" attrname="InstName" x="144" y="-240" type="instance" />
        </instance>
        <instance x="1040" y="1616" name="XLXI_30" orien="R0" />
        <iomarker fontsize="28" x="2608" y="2496" name="SCLK" orien="R0" />
        <branch name="SCLK">
            <wire x2="1248" y1="2368" y2="2368" x1="1232" />
            <wire x2="1248" y1="2368" y2="2496" x1="1248" />
            <wire x2="2608" y1="2496" y2="2496" x1="1248" />
            <wire x2="1360" y1="416" y2="416" x1="1248" />
            <wire x2="1248" y1="416" y2="1072" x1="1248" />
            <wire x2="1296" y1="1072" y2="1072" x1="1248" />
            <wire x2="1248" y1="1072" y2="1680" x1="1248" />
            <wire x2="1248" y1="1680" y2="2368" x1="1248" />
            <wire x2="1296" y1="1680" y2="1680" x1="1248" />
        </branch>
        <instance x="1056" y="2192" name="XLXI_31" orien="R0" />
        <instance x="1248" y="944" name="XLXI_29" orien="R0" />
        <branch name="XLXN_164">
            <wire x2="1360" y1="736" y2="736" x1="1312" />
            <wire x2="1312" y1="736" y2="800" x1="1312" />
            <wire x2="1312" y1="800" y2="816" x1="1312" />
            <wire x2="1360" y1="800" y2="800" x1="1312" />
        </branch>
        <branch name="XLXN_165">
            <wire x2="1296" y1="1392" y2="1392" x1="1104" />
            <wire x2="1104" y1="1392" y2="1488" x1="1104" />
        </branch>
        <instance x="992" y="1456" name="XLXI_32" orien="R0" />
        <branch name="XLXN_166">
            <wire x2="1056" y1="1456" y2="1472" x1="1056" />
            <wire x2="1152" y1="1472" y2="1472" x1="1056" />
            <wire x2="1152" y1="1456" y2="1472" x1="1152" />
            <wire x2="1296" y1="1456" y2="1456" x1="1152" />
        </branch>
        <instance x="992" y="2000" name="XLXI_33" orien="R0" />
        <branch name="XLXN_168">
            <wire x2="1296" y1="2000" y2="2000" x1="1056" />
        </branch>
        <branch name="XLXN_169">
            <wire x2="1296" y1="2064" y2="2064" x1="1120" />
        </branch>
        <branch name="XLXN_172">
            <wire x2="1936" y1="512" y2="512" x1="1744" />
            <wire x2="1936" y1="512" y2="2352" x1="1936" />
            <wire x2="2000" y1="2352" y2="2352" x1="1936" />
        </branch>
        <branch name="XLXN_150(0:7)">
            <wire x2="1872" y1="1904" y2="1904" x1="1680" />
            <wire x2="2080" y1="1440" y2="1440" x1="1872" />
            <wire x2="1872" y1="1440" y2="1504" x1="1872" />
            <wire x2="1872" y1="1504" y2="1904" x1="1872" />
        </branch>
        <instance x="1968" y="1664" name="XLXI_34" orien="R0">
        </instance>
        <branch name="XLXN_174(0:7)">
            <wire x2="2080" y1="1504" y2="1504" x1="2016" />
            <wire x2="2016" y1="1504" y2="1600" x1="2016" />
            <wire x2="2176" y1="1600" y2="1600" x1="2016" />
            <wire x2="2176" y1="1600" y2="1696" x1="2176" />
            <wire x2="2176" y1="1696" y2="1696" x1="2112" />
        </branch>
    </sheet>
</drawing>