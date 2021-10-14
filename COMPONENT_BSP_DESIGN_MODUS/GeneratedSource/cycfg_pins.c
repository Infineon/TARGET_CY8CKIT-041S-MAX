/*******************************************************************************
* File Name: cycfg_pins.c
*
* Description:
* Pin configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.4.0.5880
* mtb-pdl-cat2 1.4.0.5508
* personalities 5.0.0.0
* udd 3.0.0.1434
*
********************************************************************************
* Copyright 2021 Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.
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

#include "cycfg_pins.h"

const cy_stc_gpio_pin_config_t CYBSP_CSX_TP_RX0_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_TP_RX0_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_TP_RX0_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_TP_RX0_PORT_NUM,
        .channel_num = CYBSP_CSX_TP_RX0_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_BTN_RX_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_BTN_RX_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_BTN_RX_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_BTN_RX_PORT_NUM,
        .channel_num = CYBSP_CSX_BTN_RX_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_SHIELD1_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_SHIELD1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_SHIELD1_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_SHIELD1_PORT_NUM,
        .channel_num = CYBSP_SHIELD1_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_BTN1_TX_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_BTN1_TX_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_BTN1_TX_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_BTN1_TX_PORT_NUM,
        .channel_num = CYBSP_CSX_BTN1_TX_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_TP_TX14_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_TP_TX14_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_TP_TX14_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_TP_TX14_PORT_NUM,
        .channel_num = CYBSP_CSX_TP_TX14_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_TP_TX15_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_TP_TX15_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_TP_TX15_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_TP_TX15_PORT_NUM,
        .channel_num = CYBSP_CSX_TP_TX15_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_BTN0_TX_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_BTN0_TX_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_BTN0_TX_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_BTN0_TX_PORT_NUM,
        .channel_num = CYBSP_CSX_BTN0_TX_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_SHIELD0_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_SHIELD0_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_SHIELD0_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_SHIELD0_PORT_NUM,
        .channel_num = CYBSP_SHIELD0_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_TP_RX9_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_TP_RX9_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_TP_RX9_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_TP_RX9_PORT_NUM,
        .channel_num = CYBSP_CSX_TP_RX9_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_I2C_SCL_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_OD_DRIVESLOW,
    .hsiom = CYBSP_I2C_SCL_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_I2C_SCL_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_I2C_SCL_PORT_NUM,
        .channel_num = CYBSP_I2C_SCL_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_I2C_SDA_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_OD_DRIVESLOW,
    .hsiom = CYBSP_I2C_SDA_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_I2C_SDA_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_I2C_SDA_PORT_NUM,
        .channel_num = CYBSP_I2C_SDA_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_TP_TX8_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_TP_TX8_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_TP_TX8_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_TP_TX8_PORT_NUM,
        .channel_num = CYBSP_CSX_TP_TX8_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_TP_TX9_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_TP_TX9_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_TP_TX9_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_TP_TX9_PORT_NUM,
        .channel_num = CYBSP_CSX_TP_TX9_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_SWDIO_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CYBSP_SWDIO_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_SWDIO_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_SWDIO_PORT_NUM,
        .channel_num = CYBSP_SWDIO_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_SWDCK_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = CYBSP_SWDCK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_SWDCK_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_SWDCK_PORT_NUM,
        .channel_num = CYBSP_SWDCK_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_TP_TX10_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_TP_TX10_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_TP_TX10_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_TP_TX10_PORT_NUM,
        .channel_num = CYBSP_CSX_TP_TX10_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_TP_TX11_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_TP_TX11_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_TP_TX11_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_TP_TX11_PORT_NUM,
        .channel_num = CYBSP_CSX_TP_TX11_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_TP_TX12_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_TP_TX12_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_TP_TX12_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_TP_TX12_PORT_NUM,
        .channel_num = CYBSP_CSX_TP_TX12_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_TP_TX13_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_TP_TX13_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_TP_TX13_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_TP_TX13_PORT_NUM,
        .channel_num = CYBSP_CSX_TP_TX13_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_MSC0_CMOD1_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_MSC0_CMOD1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_MSC0_CMOD1_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_MSC0_CMOD1_PORT_NUM,
        .channel_num = CYBSP_MSC0_CMOD1_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_MSC0_CMOD2_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_MSC0_CMOD2_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_MSC0_CMOD2_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_MSC0_CMOD2_PORT_NUM,
        .channel_num = CYBSP_MSC0_CMOD2_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_TP_RX8_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_TP_RX8_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_TP_RX8_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_TP_RX8_PORT_NUM,
        .channel_num = CYBSP_CSX_TP_RX8_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_TP_RX7_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_TP_RX7_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_TP_RX7_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_TP_RX7_PORT_NUM,
        .channel_num = CYBSP_CSX_TP_RX7_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_TP_RX6_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_TP_RX6_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_TP_RX6_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_TP_RX6_PORT_NUM,
        .channel_num = CYBSP_CSX_TP_RX6_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_TP_RX5_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_TP_RX5_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_TP_RX5_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_TP_RX5_PORT_NUM,
        .channel_num = CYBSP_CSX_TP_RX5_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_TP_TX4_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_TP_TX4_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_TP_TX4_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_TP_TX4_PORT_NUM,
        .channel_num = CYBSP_CSX_TP_TX4_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_TP_TX5_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_TP_TX5_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_TP_TX5_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_TP_TX5_PORT_NUM,
        .channel_num = CYBSP_CSX_TP_TX5_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_TP_TX6_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_TP_TX6_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_TP_TX6_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_TP_TX6_PORT_NUM,
        .channel_num = CYBSP_CSX_TP_TX6_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_TP_TX7_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_TP_TX7_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_TP_TX7_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_TP_TX7_PORT_NUM,
        .channel_num = CYBSP_CSX_TP_TX7_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_TP_RX4_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_TP_RX4_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_TP_RX4_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_TP_RX4_PORT_NUM,
        .channel_num = CYBSP_CSX_TP_RX4_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_TP_RX3_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_TP_RX3_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_TP_RX3_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_TP_RX3_PORT_NUM,
        .channel_num = CYBSP_CSX_TP_RX3_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_MSC1_CMOD1_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_MSC1_CMOD1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_MSC1_CMOD1_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_MSC1_CMOD1_PORT_NUM,
        .channel_num = CYBSP_MSC1_CMOD1_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_MSC1_CMOD2_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_MSC1_CMOD2_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_MSC1_CMOD2_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_MSC1_CMOD2_PORT_NUM,
        .channel_num = CYBSP_MSC1_CMOD2_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_TP_RX2_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_TP_RX2_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_TP_RX2_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_TP_RX2_PORT_NUM,
        .channel_num = CYBSP_CSX_TP_RX2_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_TP_RX1_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_TP_RX1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_TP_RX1_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_TP_RX1_PORT_NUM,
        .channel_num = CYBSP_CSX_TP_RX1_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_TP_TX0_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_TP_TX0_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_TP_TX0_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_TP_TX0_PORT_NUM,
        .channel_num = CYBSP_CSX_TP_TX0_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_TP_TX1_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_TP_TX1_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_TP_TX1_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_TP_TX1_PORT_NUM,
        .channel_num = CYBSP_CSX_TP_TX1_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_TP_TX2_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_TP_TX2_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_TP_TX2_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_TP_TX2_PORT_NUM,
        .channel_num = CYBSP_CSX_TP_TX2_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t CYBSP_CSX_TP_TX3_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = CYBSP_CSX_TP_TX3_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t CYBSP_CSX_TP_TX3_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = CYBSP_CSX_TP_TX3_PORT_NUM,
        .channel_num = CYBSP_CSX_TP_TX3_PIN,
    };
#endif //defined (CY_USING_HAL)


void init_cycfg_pins(void)
{
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_TP_RX0_obj);
#endif //defined (CY_USING_HAL)

    Cy_GPIO_Pin_Init(CYBSP_CSX_BTN_RX_PORT, CYBSP_CSX_BTN_RX_PIN, &CYBSP_CSX_BTN_RX_config);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_BTN_RX_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_SHIELD1_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_BTN1_TX_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_TP_TX14_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_TP_TX15_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_BTN0_TX_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_SHIELD0_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_TP_RX9_obj);
#endif //defined (CY_USING_HAL)

    Cy_GPIO_Pin_Init(CYBSP_I2C_SCL_PORT, CYBSP_I2C_SCL_PIN, &CYBSP_I2C_SCL_config);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_I2C_SCL_obj);
#endif //defined (CY_USING_HAL)

    Cy_GPIO_Pin_Init(CYBSP_I2C_SDA_PORT, CYBSP_I2C_SDA_PIN, &CYBSP_I2C_SDA_config);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_I2C_SDA_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_TP_TX8_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_TP_TX9_obj);
#endif //defined (CY_USING_HAL)

    Cy_GPIO_Pin_Init(CYBSP_SWDIO_PORT, CYBSP_SWDIO_PIN, &CYBSP_SWDIO_config);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_SWDIO_obj);
#endif //defined (CY_USING_HAL)

    Cy_GPIO_Pin_Init(CYBSP_SWDCK_PORT, CYBSP_SWDCK_PIN, &CYBSP_SWDCK_config);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_SWDCK_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_TP_TX10_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_TP_TX11_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_TP_TX12_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_TP_TX13_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_MSC0_CMOD1_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_MSC0_CMOD2_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_TP_RX8_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_TP_RX7_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_TP_RX6_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_TP_RX5_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_TP_TX4_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_TP_TX5_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_TP_TX6_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_TP_TX7_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_TP_RX4_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_TP_RX3_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_MSC1_CMOD1_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_MSC1_CMOD2_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_TP_RX2_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_TP_RX1_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_TP_TX0_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_TP_TX1_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_TP_TX2_obj);
#endif //defined (CY_USING_HAL)

#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&CYBSP_CSX_TP_TX3_obj);
#endif //defined (CY_USING_HAL)
}
