<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<smc>
    <general version="2.0.0.0">
        <configuration active="true" id="${configurationTypeReleaseID}">
            <property id="com.renesas.smc.service.project.buildArtefactType" values="com.renesas.smc.service.project.buildArtefactType.exe"/>
            <toolchain id="${toolChainID}">
                <option id="com.renesas.smc.toolchain.option.buildArtefactType" key="com.renesas.smc.toolchain.option.buildArtefactType.exe"/>
                <option id="com.renesas.smc.toolchain.option.rtos" key="com.renesas.smc.toolchain.option.rtos.azurertos">
                    <item id="com.renesas.smc.toolchain.option.rtos.azurertos" value="${packageVersion}"/>
                </option>
            </toolchain>
        </configuration>
        <platform id="${targetDevice}"/>
    </general>
    <tool id="SWComponent" version="1.0.0.0">
        <configuration inuse="true" name="r_bsp">
            <component display="r_bsp" id="r_bsp7.20" version="7.20">
                <gridItem id="BSP_CFG_USER_CHARPUT_ENABLED" selectedIndex="1"/>
            </component>
            <source description="Components supporting Firmware Integration Technology" display="Firmware Integration Technology" id="com.renesas.smc.tools.swcomponent.fit.source"/>
        </configuration>
        <configuration inuse="true" name="r_cmt_rx">
            <component display="r_cmt_rx" id="r_cmt_rx5.20" version="5.20">
            </component>
            <source description="Components supporting Firmware Integration Technology" display="Firmware Integration Technology" id="com.renesas.smc.tools.swcomponent.fit.source"/>
        </configuration>
        <configuration enable="true" exclude="false" inuse="true" name="threadx">
            <component display="Azure RTOS ThreadX" id="threadx${packageVersion}" version="${packageVersion}">
            </component>
            <source description="Code generator for Real-time OS" display="RTOS Configurator" id="com.renesas.smc.tools.swcomponent.rtosconfigurator.source"/>
        </configuration>
        <configuration enable="true" exclude="false" inuse="true" name="netxduo_addons">
            <component display="Azure RTOS NetX Duo Addons" id="netxduo_addons${packageVersion}" version="${packageVersion}"/>
            <source description="Code generator for Real-time OS" display="RTOS Configurator" id="com.renesas.smc.tools.swcomponent.rtosconfigurator.source"/>
        </configuration>
        <configuration enable="true" exclude="false" inuse="true" name="netxduo">
            <component display="Azure RTOS NetX Duo" id="netxduo${packageVersion}" version="${packageVersion}">
            </component>
            <source description="Code generator for Real-time OS" display="RTOS Configurator" id="com.renesas.smc.tools.swcomponent.rtosconfigurator.source"/>
        </configuration>
        <configuration enable="true" exclude="false" inuse="true" name="filex">
            <component display="Azure RTOS FileX" id="filex${packageVersion}" version="${packageVersion}">
            </component>
            <source description="Code generator for Real-time OS" display="RTOS Configurator" id="com.renesas.smc.tools.swcomponent.rtosconfigurator.source"/>
        </configuration>
        <configuration inuse="true" name="Config_SCI5">
            <allocatable id="SCI5">
                <option enabled="true" id="Bitrate" selection="FreeValue">
                    <item id="FreeValue" input="115200" vlaue="115200"/>
                </option>
            </allocatable>
            <component detailDescription="" display="SCI/SCIF Asynchronous Mode" id="com.renesas.smc.tools.swcomponent.codegenerator.sciasyncmode" version="1.9.1"/>
            <allocator channelLevel0="5" channelLevel1="" channelLevel2="" channelLevel3="" channelLevel4="" channelLevel5="" description="SCI channel 5" display="SCI5" id="com.renesas.smc.tools.swcomponent.codegenerator.sciasync.rx651.sci5" type="">
                <context>
                    <option enabled="true" id="Mode" selection="BothMode">
                    </option>
                </context>
            </allocator>
            <source description="Code generator components provide peripheral drivers with customized generated source geared towards small code size" display="Code Generator" id="com.renesas.smc.tools.swcomponent.codegenerator.source"/>
        </configuration>
        <configuration inuse="true" name="r_byteq">
            <component detailDescription="Byte-based circular buffer library." display="r_byteq" id="r_byteq2.00" version="2.00">
            </component>
            <source description="Components supporting Firmware Integration Technology" display="Firmware Integration Technology" id="com.renesas.smc.tools.swcomponent.fit.source"/>
        </configuration>
        <configuration inuse="true" name="r_sci_rx">
            <component detailDescription="Multi-Channel Multi-Mode SCI Driver." display="r_sci_rx" id="r_sci_rx4.40" version="4.40">
            <gridItem id="RXD0/SMISO0/SSCL0" selectedIndex="1"/>
            <gridItem id="TXD0/SMOSI0/SSDA0" selectedIndex="1"/>
            <gridItem id="CTS0#/RTS0#/SS0#" selectedIndex="1"/>
            <gridItem id="SCI0" selectedIndex="1"/>
            <gridItem id="RXD1/SMISO1/SSCL1" selectedIndex="1"/>
            <gridItem id="TXD1/SMOSI1/SSDA1" selectedIndex="1"/>
            <gridItem id="SCI1" selectedIndex="1"/>
            <gridItem id="SCI_CFG_CH0_INCLUDED" selectedIndex="1"/>
            <gridItem id="SCI_CFG_CH1_INCLUDED" selectedIndex="1"/>
            <gridItem id="SCI_CFG_TEI_INCLUDED" selectedIndex="1"/>
            <gridItem id="SCI_CFG_CH0_RX_BUFSIZ" selectedIndex="3000"/>
            <gridItem id="SCI_CFG_CH1_RX_BUFSIZ" selectedIndex="3000"/>
            </component>
            <source description="Components supporting Firmware Integration Technology" display="Firmware Integration Technology" id="com.renesas.smc.tools.swcomponent.fit.source"/>
        </configuration>
        <configuration inuse="true" name="r_wifi_sx_ulpgn">
            <component detailDescription="WI-FI Module control functions for Renesas MCUs." display="r_wifi_sx_ulpgn" id="r_wifi_sx_ulpgn1.16" version="1.16">
            <gridItem id="WIFI_CFG_SCI_INTERRUPT_LEVEL" selectedIndex="14"/>
            <gridItem id="WIFI_CFG_SOCKETS_RECEIVE_BUFFER_SIZE" selectedIndex="4096"/>
            </component>
            <source description="Components supporting Firmware Integration Technology" display="Firmware Integration Technology" id="com.renesas.smc.tools.swcomponent.fit.source"/>
        </configuration>
    </tool>
</smc>
