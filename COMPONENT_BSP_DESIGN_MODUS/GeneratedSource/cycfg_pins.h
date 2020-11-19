/*******************************************************************************
* File Name: cycfg_pins.h
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.2.0.2801
* mtb-pdl-cat2 1.0.0.2197
* personalities 3.0.0.0
* udd 3.0.0.717
*
********************************************************************************
* Copyright 2020 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "cy_gpio.h"
#if defined (CY_USING_HAL)
	#include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)
#include "cycfg_routing.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define ioss_0_port_0_pin_1_ENABLED 1U
#define ioss_0_port_0_pin_1_PORT GPIO_PRT0
#define ioss_0_port_0_pin_1_PORT_NUM 0U
#define ioss_0_port_0_pin_1_PIN 1U
#define ioss_0_port_0_pin_1_NUM 1U
#define ioss_0_port_0_pin_1_DRIVEMODE CY_GPIO_DM_ANALOG
#define ioss_0_port_0_pin_1_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_1_HSIOM
	#define ioss_0_port_0_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define ioss_0_port_0_pin_1_IRQ ioss_interrupts_gpio_0_IRQn
#if defined (CY_USING_HAL)
	#define ioss_0_port_0_pin_1_HAL_PORT_PIN P0_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_0_pin_1 P0_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_0_pin_1_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_0_pin_1_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_0_pin_1_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define ioss_0_port_0_pin_3_ENABLED 1U
#define ioss_0_port_0_pin_3_PORT GPIO_PRT0
#define ioss_0_port_0_pin_3_PORT_NUM 0U
#define ioss_0_port_0_pin_3_PIN 3U
#define ioss_0_port_0_pin_3_NUM 3U
#define ioss_0_port_0_pin_3_DRIVEMODE CY_GPIO_DM_ANALOG
#define ioss_0_port_0_pin_3_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_3_HSIOM
	#define ioss_0_port_0_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define ioss_0_port_0_pin_3_IRQ ioss_interrupts_gpio_0_IRQn
#if defined (CY_USING_HAL)
	#define ioss_0_port_0_pin_3_HAL_PORT_PIN P0_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_0_pin_3 P0_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_0_pin_3_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_0_pin_3_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_0_pin_3_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_DEBUG_UART_RX (P0_4)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_DEBUG_UART_TX (P0_5)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_DEBUG_UART_CTS (P0_6)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_DEBUG_UART_RTS (P0_7)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_D11 (P10_0)
	#define CYBSP_J3_4 CYBSP_D11
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_D12 (P10_1)
	#define CYBSP_J3_5 CYBSP_D12
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_D13 (P10_2)
	#define CYBSP_J3_6 CYBSP_D13
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_D10 (P10_3)
	#define CYBSP_J3_3 CYBSP_D10
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_D8 (P10_4)
	#define CYBSP_J3_1 CYBSP_D8
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_D9 (P10_5)
	#define CYBSP_J3_2 CYBSP_D9
#endif //defined (CY_USING_HAL)
#define ioss_0_port_11_pin_2_ENABLED 1U
#define ioss_0_port_11_pin_2_PORT GPIO_PRT11
#define ioss_0_port_11_pin_2_PORT_NUM 11U
#define ioss_0_port_11_pin_2_PIN 2U
#define ioss_0_port_11_pin_2_NUM 2U
#define ioss_0_port_11_pin_2_DRIVEMODE CY_GPIO_DM_ANALOG
#define ioss_0_port_11_pin_2_INIT_DRIVESTATE 1
#ifndef ioss_0_port_11_pin_2_HSIOM
	#define ioss_0_port_11_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#if defined (CY_USING_HAL)
	#define ioss_0_port_11_pin_2_HAL_PORT_PIN P11_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_11_pin_2 P11_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_11_pin_2_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_11_pin_2_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_11_pin_2_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SW2 (P11_5)
	#define CYBSP_USER_BTN CYBSP_SW2
	#define CYBSP_USER_BTN1 CYBSP_SW2
#endif //defined (CY_USING_HAL)
#define CYBSP_LED3_ENABLED 1U
#define CYBSP_LED_BTN1_ENABLED CYBSP_LED3_ENABLED
#define CYBSP_USER_LED3_ENABLED CYBSP_LED3_ENABLED
#define CYBSP_LED3_PORT GPIO_PRT12
#define CYBSP_LED_BTN1_PORT CYBSP_LED3_PORT
#define CYBSP_USER_LED3_PORT CYBSP_LED3_PORT
#define CYBSP_LED3_PORT_NUM 12U
#define CYBSP_LED_BTN1_PORT_NUM CYBSP_LED3_PORT_NUM
#define CYBSP_USER_LED3_PORT_NUM CYBSP_LED3_PORT_NUM
#define CYBSP_LED3_PIN 0U
#define CYBSP_LED_BTN1_PIN CYBSP_LED3_PIN
#define CYBSP_USER_LED3_PIN CYBSP_LED3_PIN
#define CYBSP_LED3_NUM 0U
#define CYBSP_LED_BTN1_NUM CYBSP_LED3_NUM
#define CYBSP_USER_LED3_NUM CYBSP_LED3_NUM
#define CYBSP_LED3_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define CYBSP_LED_BTN1_DRIVEMODE CYBSP_LED3_DRIVEMODE
#define CYBSP_USER_LED3_DRIVEMODE CYBSP_LED3_DRIVEMODE
#define CYBSP_LED3_INIT_DRIVESTATE 1
#define CYBSP_LED_BTN1_INIT_DRIVESTATE CYBSP_LED3_INIT_DRIVESTATE
#define CYBSP_USER_LED3_INIT_DRIVESTATE CYBSP_LED3_INIT_DRIVESTATE
#ifndef ioss_0_port_12_pin_0_HSIOM
	#define ioss_0_port_12_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_LED3_HSIOM ioss_0_port_12_pin_0_HSIOM
#define CYBSP_LED_BTN1_HSIOM CYBSP_LED3_HSIOM
#define CYBSP_USER_LED3_HSIOM CYBSP_LED3_HSIOM
#if defined (CY_USING_HAL)
	#define CYBSP_LED3_HAL_PORT_PIN P12_0
	#define CYBSP_LED_BTN1_HAL_PORT_PIN CYBSP_LED3_HAL_PORT_PIN
	#define CYBSP_USER_LED3_HAL_PORT_PIN CYBSP_LED3_HAL_PORT_PIN
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_LED3 P12_0
	#define CYBSP_LED_BTN1 CYBSP_LED3
	#define CYBSP_USER_LED3 CYBSP_LED3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_LED3_HAL_IRQ CYHAL_GPIO_IRQ_NONE
	#define CYBSP_LED_BTN1_HAL_IRQ CYBSP_LED3_HAL_IRQ
	#define CYBSP_USER_LED3_HAL_IRQ CYBSP_LED3_HAL_IRQ
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_LED3_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
	#define CYBSP_LED_BTN1_HAL_DIR CYBSP_LED3_HAL_DIR
	#define CYBSP_USER_LED3_HAL_DIR CYBSP_LED3_HAL_DIR
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_LED3_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
	#define CYBSP_LED_BTN1_HAL_DRIVEMODE CYBSP_LED3_HAL_DRIVEMODE
	#define CYBSP_USER_LED3_HAL_DRIVEMODE CYBSP_LED3_HAL_DRIVEMODE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_A15 (P12_1)
	#define CYBSP_J2_16 CYBSP_A15
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_I2C_SCL (P1_0)
	#define CYBSP_J3_10 CYBSP_I2C_SCL
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_I2C_SDA (P1_1)
	#define CYBSP_J3_9 CYBSP_I2C_SDA
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_A8 (P1_2)
	#define CYBSP_J2_2 CYBSP_A8
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_A9 (P1_3)
	#define CYBSP_J2_4 CYBSP_A9
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_A10 (P1_4)
	#define CYBSP_J2_6 CYBSP_A10
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_A11 (P1_5)
	#define CYBSP_J2_8 CYBSP_A11
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_A12 (P1_6)
	#define CYBSP_J2_10 CYBSP_A12
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define VREF (P1_7)
	#define CYBSP_J3_8 VREF
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_A0 (P2_0)
	#define CYBSP_J2_1 CYBSP_A0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_A1 (P2_1)
	#define CYBSP_J2_3 CYBSP_A1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_A2 (P2_2)
	#define CYBSP_J2_5 CYBSP_A2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_A3 (P2_3)
	#define CYBSP_J2_7 CYBSP_A3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_A4 (P2_4)
	#define CYBSP_J2_9 CYBSP_A4
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_A5 (P2_5)
	#define CYBSP_J2_11 CYBSP_A5
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_A6 (P2_6)
	#define CYBSP_J2_13 CYBSP_A6
	#define THERM_OUT CYBSP_A6
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_A7 (P2_7)
	#define CYBSP_J2_15 CYBSP_A7
#endif //defined (CY_USING_HAL)
#define CYBSP_SWDIO_ENABLED 1U
#define CYBSP_SWDIO_PORT GPIO_PRT3
#define CYBSP_SWDIO_PORT_NUM 3U
#define CYBSP_SWDIO_PIN 2U
#define CYBSP_SWDIO_NUM 2U
#define CYBSP_SWDIO_DRIVEMODE CY_GPIO_DM_STRONG
#define CYBSP_SWDIO_INIT_DRIVESTATE 1
#ifndef ioss_0_port_3_pin_2_HSIOM
	#define ioss_0_port_3_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_SWDIO_HSIOM ioss_0_port_3_pin_2_HSIOM
#define CYBSP_SWDIO_IRQ ioss_interrupts_gpio_3_IRQn
#if defined (CY_USING_HAL)
	#define CYBSP_SWDIO_HAL_PORT_PIN P3_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDIO P3_2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDIO_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDIO_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDIO_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define CYBSP_SWDCK_ENABLED 1U
#define CYBSP_SWDCK_PORT GPIO_PRT3
#define CYBSP_SWDCK_PORT_NUM 3U
#define CYBSP_SWDCK_PIN 3U
#define CYBSP_SWDCK_NUM 3U
#define CYBSP_SWDCK_DRIVEMODE CY_GPIO_DM_STRONG
#define CYBSP_SWDCK_INIT_DRIVESTATE 1
#ifndef ioss_0_port_3_pin_3_HSIOM
	#define ioss_0_port_3_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_SWDCK_HSIOM ioss_0_port_3_pin_3_HSIOM
#define CYBSP_SWDCK_IRQ ioss_interrupts_gpio_3_IRQn
#if defined (CY_USING_HAL)
	#define CYBSP_SWDCK_HAL_PORT_PIN P3_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDCK P3_3
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDCK_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDCK_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_SWDCK_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif //defined (CY_USING_HAL)
#define ioss_0_port_4_pin_0_ENABLED 1U
#define ioss_0_port_4_pin_0_PORT GPIO_PRT4
#define ioss_0_port_4_pin_0_PORT_NUM 4U
#define ioss_0_port_4_pin_0_PIN 0U
#define ioss_0_port_4_pin_0_NUM 0U
#define ioss_0_port_4_pin_0_DRIVEMODE CY_GPIO_DM_ANALOG
#define ioss_0_port_4_pin_0_INIT_DRIVESTATE 1
#ifndef ioss_0_port_4_pin_0_HSIOM
	#define ioss_0_port_4_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#if defined (CY_USING_HAL)
	#define ioss_0_port_4_pin_0_HAL_PORT_PIN P4_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_4_pin_0 P4_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_4_pin_0_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_4_pin_0_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_4_pin_0_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define ioss_0_port_4_pin_1_ENABLED 1U
#define ioss_0_port_4_pin_1_PORT GPIO_PRT4
#define ioss_0_port_4_pin_1_PORT_NUM 4U
#define ioss_0_port_4_pin_1_PIN 1U
#define ioss_0_port_4_pin_1_NUM 1U
#define ioss_0_port_4_pin_1_DRIVEMODE CY_GPIO_DM_ANALOG
#define ioss_0_port_4_pin_1_INIT_DRIVESTATE 1
#ifndef ioss_0_port_4_pin_1_HSIOM
	#define ioss_0_port_4_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#if defined (CY_USING_HAL)
	#define ioss_0_port_4_pin_1_HAL_PORT_PIN P4_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_4_pin_1 P4_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_4_pin_1_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_4_pin_1_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_4_pin_1_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_D4 (P6_0)
	#define CYBSP_J4_5 CYBSP_D4
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_D5 (P6_1)
	#define CYBSP_J4_6 CYBSP_D5
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_D6 (P6_2)
	#define CYBSP_J4_7 CYBSP_D6
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_D7 (P6_3)
	#define CYBSP_J4_8 CYBSP_D7
#endif //defined (CY_USING_HAL)
#define CYBSP_LED2_ENABLED 1U
#define CYBSP_LED_BTN0_ENABLED CYBSP_LED2_ENABLED
#define CYBSP_USER_LED2_ENABLED CYBSP_LED2_ENABLED
#define CYBSP_LED2_PORT GPIO_PRT6
#define CYBSP_LED_BTN0_PORT CYBSP_LED2_PORT
#define CYBSP_USER_LED2_PORT CYBSP_LED2_PORT
#define CYBSP_LED2_PORT_NUM 6U
#define CYBSP_LED_BTN0_PORT_NUM CYBSP_LED2_PORT_NUM
#define CYBSP_USER_LED2_PORT_NUM CYBSP_LED2_PORT_NUM
#define CYBSP_LED2_PIN 4U
#define CYBSP_LED_BTN0_PIN CYBSP_LED2_PIN
#define CYBSP_USER_LED2_PIN CYBSP_LED2_PIN
#define CYBSP_LED2_NUM 4U
#define CYBSP_LED_BTN0_NUM CYBSP_LED2_NUM
#define CYBSP_USER_LED2_NUM CYBSP_LED2_NUM
#define CYBSP_LED2_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define CYBSP_LED_BTN0_DRIVEMODE CYBSP_LED2_DRIVEMODE
#define CYBSP_USER_LED2_DRIVEMODE CYBSP_LED2_DRIVEMODE
#define CYBSP_LED2_INIT_DRIVESTATE 1
#define CYBSP_LED_BTN0_INIT_DRIVESTATE CYBSP_LED2_INIT_DRIVESTATE
#define CYBSP_USER_LED2_INIT_DRIVESTATE CYBSP_LED2_INIT_DRIVESTATE
#ifndef ioss_0_port_6_pin_4_HSIOM
	#define ioss_0_port_6_pin_4_HSIOM HSIOM_SEL_GPIO
#endif
#define CYBSP_LED2_HSIOM ioss_0_port_6_pin_4_HSIOM
#define CYBSP_LED_BTN0_HSIOM CYBSP_LED2_HSIOM
#define CYBSP_USER_LED2_HSIOM CYBSP_LED2_HSIOM
#if defined (CY_USING_HAL)
	#define CYBSP_LED2_HAL_PORT_PIN P6_4
	#define CYBSP_LED_BTN0_HAL_PORT_PIN CYBSP_LED2_HAL_PORT_PIN
	#define CYBSP_USER_LED2_HAL_PORT_PIN CYBSP_LED2_HAL_PORT_PIN
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_LED2 P6_4
	#define CYBSP_LED_BTN0 CYBSP_LED2
	#define CYBSP_USER_LED2 CYBSP_LED2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_LED2_HAL_IRQ CYHAL_GPIO_IRQ_NONE
	#define CYBSP_LED_BTN0_HAL_IRQ CYBSP_LED2_HAL_IRQ
	#define CYBSP_USER_LED2_HAL_IRQ CYBSP_LED2_HAL_IRQ
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_LED2_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
	#define CYBSP_LED_BTN0_HAL_DIR CYBSP_LED2_HAL_DIR
	#define CYBSP_USER_LED2_HAL_DIR CYBSP_LED2_HAL_DIR
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_LED2_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
	#define CYBSP_LED_BTN0_HAL_DRIVEMODE CYBSP_LED2_HAL_DRIVEMODE
	#define CYBSP_USER_LED2_HAL_DRIVEMODE CYBSP_LED2_HAL_DRIVEMODE
#endif //defined (CY_USING_HAL)
#define ioss_0_port_7_pin_0_ENABLED 1U
#define ioss_0_port_7_pin_0_PORT GPIO_PRT7
#define ioss_0_port_7_pin_0_PORT_NUM 7U
#define ioss_0_port_7_pin_0_PIN 0U
#define ioss_0_port_7_pin_0_NUM 0U
#define ioss_0_port_7_pin_0_DRIVEMODE CY_GPIO_DM_ANALOG
#define ioss_0_port_7_pin_0_INIT_DRIVESTATE 1
#ifndef ioss_0_port_7_pin_0_HSIOM
	#define ioss_0_port_7_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#if defined (CY_USING_HAL)
	#define ioss_0_port_7_pin_0_HAL_PORT_PIN P7_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_7_pin_0 P7_0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_7_pin_0_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_7_pin_0_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_7_pin_0_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#define ioss_0_port_7_pin_1_ENABLED 1U
#define ioss_0_port_7_pin_1_PORT GPIO_PRT7
#define ioss_0_port_7_pin_1_PORT_NUM 7U
#define ioss_0_port_7_pin_1_PIN 1U
#define ioss_0_port_7_pin_1_NUM 1U
#define ioss_0_port_7_pin_1_DRIVEMODE CY_GPIO_DM_ANALOG
#define ioss_0_port_7_pin_1_INIT_DRIVESTATE 1
#ifndef ioss_0_port_7_pin_1_HSIOM
	#define ioss_0_port_7_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#if defined (CY_USING_HAL)
	#define ioss_0_port_7_pin_1_HAL_PORT_PIN P7_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_7_pin_1 P7_1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_7_pin_1_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_7_pin_1_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define ioss_0_port_7_pin_1_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_A13 (P7_2)
	#define CYBSP_J2_12 CYBSP_A13
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_LED1 (P7_3)
	#define CYBSP_USER_LED CYBSP_LED1
	#define CYBSP_USER_LED1 CYBSP_LED1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_A14 (P7_5)
	#define CYBSP_J2_14 CYBSP_A14
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_D0 (P8_0)
	#define CYBSP_J4_1 CYBSP_D0
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_D1 (P8_1)
	#define CYBSP_J4_2 CYBSP_D1
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_D2 (P8_2)
	#define CYBSP_J4_3 CYBSP_D2
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
	#define CYBSP_D3 (P8_3)
	#define CYBSP_J4_4 CYBSP_D3
#endif //defined (CY_USING_HAL)

extern const cy_stc_gpio_pin_config_t ioss_0_port_0_pin_1_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ioss_0_port_0_pin_1_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ioss_0_port_0_pin_3_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ioss_0_port_0_pin_3_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ioss_0_port_11_pin_2_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ioss_0_port_11_pin_2_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_LED3_config;
#define CYBSP_LED_BTN1_config CYBSP_LED3_config
#define CYBSP_USER_LED3_config CYBSP_LED3_config
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t CYBSP_LED3_obj;
	#define CYBSP_LED_BTN1_obj CYBSP_LED3_obj
	#define CYBSP_USER_LED3_obj CYBSP_LED3_obj
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_SWDIO_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t CYBSP_SWDIO_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_SWDCK_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t CYBSP_SWDCK_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ioss_0_port_4_pin_0_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ioss_0_port_4_pin_0_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ioss_0_port_4_pin_1_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ioss_0_port_4_pin_1_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t CYBSP_LED2_config;
#define CYBSP_LED_BTN0_config CYBSP_LED2_config
#define CYBSP_USER_LED2_config CYBSP_LED2_config
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t CYBSP_LED2_obj;
	#define CYBSP_LED_BTN0_obj CYBSP_LED2_obj
	#define CYBSP_USER_LED2_obj CYBSP_LED2_obj
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ioss_0_port_7_pin_0_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ioss_0_port_7_pin_0_obj;
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t ioss_0_port_7_pin_1_config;
#if defined (CY_USING_HAL)
	extern const cyhal_resource_inst_t ioss_0_port_7_pin_1_obj;
#endif //defined (CY_USING_HAL)

void init_cycfg_pins(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */
