/***********************************************************************************************************************
 * DISCLAIMER
 * This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products. No
 * other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all
 * applicable laws, including copyright laws.
 * THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING
 * THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED. TO THE MAXIMUM
 * EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES
 * SHALL BE LIABLE FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS
 * SOFTWARE, EVEN IF RENESAS OR ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
 * Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability of
 * this software. By using this software, you agree to the additional terms and conditions found by accessing the
 * following link:
 * http://www.renesas.com/disclaimer
 *
 * Copyright (C) 2021 Renesas Electronics Corporation. All rights reserved.
 **********************************************************************************************************************/
/**********************************************************************************************************************
 * File Name     : r_fwup_config.h
 * Description   : Configures the Firmware update module.
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * History : DD.MM.YYYY Version Description
 *           16.02.2021 1.00    First Release
 *           19.05.2021 1.01    Added support for RX72N,RX66T,RX130
 *           08.07.2021 1.02    Added support for RX671 and GCC
 *           10.08.2021 1.03    Added support for IAR
 *********************************************************************************************************************/
#ifndef FWUP_CONFIG_H
#define FWUP_CONFIG_H

#include "platform.h"

/***********************************************************************************************************************
Configuration Options
***********************************************************************************************************************/
/* Select the implementation environment.
    0 = Bootloader. (default)
    1 = Firmware update w/o OS.
    2 = Firmware update with Amazon FreeRTOS(OTA).
    3 = Firmware update with other FreeRTOS.
*/
#define FWUP_CFG_IMPLEMENTATION_ENVIRONMENT     (0)

/* Select the communication function.
    0 = SCI connection. (default)
    1 = Ethernet connection.
    2 = USB connection.
    3 = SDHI connection.
    4 = QSPI connection.
*/
#define FWUP_CFG_COMMUNICATION_FUNCTION        (0)

/* Set whether to use external memory (ex. serial flash) as a buffer for update firmware.
    0 = Not use. (default)
    1 = Use.
 */
#define FWUP_CFG_USE_SERIAL_FLASH_FOR_BUFFER    (0)

/* Select the algorithm of signature verification.
    0 = ECDSA. (default)
*/
#define FWUP_CFG_SIGNATURE_VERIFICATION         (0)

/* Enable Boot Protect Setting.
    0 = Disable.(Prohibit) (default)
    1 = Enable.(Allow)     [Note]

    [Note]
    When enabled (1), FAW.FSPR bit = 0 is set. After this setting,
    the area other than the area specified in FAW can never be rewritten.
    Be careful when setting this variable.
 */
#define FWUP_CFG_BOOT_PROTECT_ENABLE     (0)

/* Disable Printf Output Setting.
   Disables the character output by printf to the terminal software.
    0 = Enable. (default)
    1 = Disable.
 */
#define FWUP_CFG_PRINTF_DISABLE     (0)

/* This macro is used to select which SCI channel used for debug serial terminal.
 */
#define FWUP_CFG_SERIAL_TERM_SCI                  (10)

/* This macro is used to select which SCI bit-rate.
 */
#define FWUP_CFG_SERIAL_TERM_SCI_BITRATE          (115200)

/* This macro is used to select which SCI interrupt priority.
   0(low) - 15(high)
 */
#define FWUP_CFG_SERIAL_TERM_SCI_INTERRUPT_PRIORITY   (15)


/* Specifies the UART receive wait time after the transmission is
   stopped (with RTS set to HIGH). 
   Set in microseconds.
 */
#define FWUP_CFG_SCI_RECEIVE_WAIT     (300) 

/* Set the port symbol of the I / O port used for RTS, which is the receive
   request terminal of UART.
   The default value is "PORTC" for RSK-RX231.
 */
#define FWUP_CFG_PORT_SYMBOL          PORTC

/* Set the bit symbol of the I / O port used for RTS, which is the receive
   request terminal of UART.
   The default value is "B4" for RSK-RX231.
 */
#define FWUP_CFG_BIT_SYMBOL           B4



#endif /* FWUP_CONFIG_H */
