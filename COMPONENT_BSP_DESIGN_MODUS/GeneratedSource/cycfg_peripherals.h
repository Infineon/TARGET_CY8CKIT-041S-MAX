/*******************************************************************************
* File Name: cycfg_peripherals.h
*
* Description:
* Peripheral Hardware Block configuration
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

#if !defined(CYCFG_PERIPHERALS_H)
#define CYCFG_PERIPHERALS_H

#include "cycfg_notices.h"
#include "cy_sysclk.h"
#include "cy_msc.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define CYBSP_MSC0_ENABLED 1U
#define CY_MSC0_DMAC_BASE_ADDR DMAC
#define CY_MSC0_WR_DMA_CH_INDEX 0u
#define CY_MSC0_CHAIN_WR_DMA_CH_INDEX 1u
#define CY_MSC0_RD_DMA_CH_INDEX 3u
#define CY_MSC0_CHAIN_RD_DMA_CH_INDEX 2u
#define Shield0_PORT GPIO_PRT11
#define Button0_Sns0_PORT GPIO_PRT11
#define Touchpad0_Col8_PORT GPIO_PRT3
#define Touchpad0_Col9_PORT GPIO_PRT3
#define Touchpad0_Col10_PORT GPIO_PRT3
#define Touchpad0_Col11_PORT GPIO_PRT3
#define Touchpad0_Col12_PORT GPIO_PRT3
#define Touchpad0_Col13_PORT GPIO_PRT3
#define Touchpad0_Col14_PORT GPIO_PRT11
#define Touchpad0_Col15_PORT GPIO_PRT11
#define Touchpad0_Row5_PORT GPIO_PRT4
#define Touchpad0_Row6_PORT GPIO_PRT4
#define Touchpad0_Row7_PORT GPIO_PRT4
#define Touchpad0_Row8_PORT GPIO_PRT4
#define Touchpad0_Row9_PORT GPIO_PRT11
#define Shield0_PIN 3u
#define Button0_Sns0_PIN 2u
#define Touchpad0_Col8_PIN 0u
#define Touchpad0_Col9_PIN 1u
#define Touchpad0_Col10_PIN 4u
#define Touchpad0_Col11_PIN 5u
#define Touchpad0_Col12_PIN 6u
#define Touchpad0_Col13_PIN 7u
#define Touchpad0_Col14_PIN 0u
#define Touchpad0_Col15_PIN 1u
#define Touchpad0_Row5_PIN 7u
#define Touchpad0_Row6_PIN 6u
#define Touchpad0_Row7_PIN 5u
#define Touchpad0_Row8_PIN 4u
#define Touchpad0_Row9_PIN 4u
#define Shield0_PAD MSC0_SPAD0
#define Button0_Sns0_PAD MSC0_SPAD1
#define Touchpad0_Col8_PAD MSC0_SPAD2
#define Touchpad0_Col9_PAD MSC0_SPAD3
#define Touchpad0_Col10_PAD MSC0_SPAD4
#define Touchpad0_Col11_PAD MSC0_SPAD5
#define Touchpad0_Col12_PAD MSC0_SPAD6
#define Touchpad0_Col13_PAD MSC0_SPAD7
#define Touchpad0_Col14_PAD MSC0_SPAD8
#define Touchpad0_Col15_PAD MSC0_SPAD9
#define Touchpad0_Row5_PAD MSC0_SPAD10
#define Touchpad0_Row6_PAD MSC0_SPAD11
#define Touchpad0_Row7_PAD MSC0_SPAD12
#define Touchpad0_Row8_PAD MSC0_SPAD13
#define Touchpad0_Row9_PAD MSC0_SPAD14
#define Shield0_CH_INDEX 0u
#define Button0_Sns0_CH_INDEX 0u
#define Touchpad0_Col8_CH_INDEX 0u
#define Touchpad0_Col9_CH_INDEX 0u
#define Touchpad0_Col10_CH_INDEX 0u
#define Touchpad0_Col11_CH_INDEX 0u
#define Touchpad0_Col12_CH_INDEX 0u
#define Touchpad0_Col13_CH_INDEX 0u
#define Touchpad0_Col14_CH_INDEX 0u
#define Touchpad0_Col15_CH_INDEX 0u
#define Touchpad0_Row5_CH_INDEX 0u
#define Touchpad0_Row6_CH_INDEX 0u
#define Touchpad0_Row7_CH_INDEX 0u
#define Touchpad0_Row8_CH_INDEX 0u
#define Touchpad0_Row9_CH_INDEX 0u
#define CY_MSC0_Cmod1_PORT GPIO_PRT4
#define CY_MSC0_Cmod1_PIN 0u
#define CY_MSC0_Cmod1_PORT_NUM 4
#define CY_MSC0_Cmod1_PAD MSC0_CMOD1
#define CY_MSC0_Cmod1_CH_INDEX 0u
#define CY_MSC0_Cmod2_PORT GPIO_PRT4
#define CY_MSC0_Cmod2_PIN 1u
#define CY_MSC0_Cmod2_PORT_NUM 4
#define CY_MSC0_Cmod2_PAD MSC0_CMOD2
#define CY_MSC0_Cmod2_CH_INDEX 0u
#define CY_MSC0_HW MSC0
#define CY_MSC0_IRQ msc_0_interrupt_IRQn
#define CYBSP_CapSense_ENABLED 1U
#define CY_CAPSENSE_CPU_CLK 48000000u
#define CY_CAPSENSE_VDDA_MV 5000u
#define CY_CAPSENSE_PERI_CLK 48000000u
#define CY_CAPSENSE_PERI_DIV_TYPE CY_SYSCLK_DIV_16_BIT
#define CY_CAPSENSE_PERI_DIV_INDEX 0u
#define CY_CAPSENSE_CORE 0u
#define CY_MSC_SAMPLE_NUMBER 1u
#define CY_MSC_CONFIG_NUMBER 0u
#define CY_MSC_SENSE_PAD_NUMBER 16u
#define CY_MSC_CH_NUMBER 2u
#define CY_MSC_SENSE_MODE_NUMBER 3u
#define CY_MSC_LP_AOC_PRESENT 0u
#define CY_MSC_NP_PRESENT 0u
#define CY_MSC_CAP_PAD_NUMBER 4u
#define CY_CAPSENSE_MSC0_EN (1u)
#define CY_CAPSENSE_MSC1_EN (1u)
#define CY_MSC_CHIP_ID 0u
#define CY_MSC_ENABLED_CH_NUMBER 2u
#define CY_MSC_MASTER_CHIP_EN 0u
#define CY_MSC_COMM_CHIP_EN 0u
#define CY_MSC_LITE_CONFIG_EN 0u
#define CY_MSC_CHANNEL_OFFSET 0u
#define CY_CAPSENSE_DMA_CONFIGURED 1u
#define CYBSP_MSC1_ENABLED 1U
#define CY_MSC1_DMAC_BASE_ADDR DMAC
#define CY_MSC1_WR_DMA_CH_INDEX 4u
#define CY_MSC1_CHAIN_WR_DMA_CH_INDEX 5u
#define CY_MSC1_RD_DMA_CH_INDEX 7u
#define CY_MSC1_CHAIN_RD_DMA_CH_INDEX 6u
#define Shield1_PORT GPIO_PRT0
#define Button1_Sns0_PORT GPIO_PRT0
#define Touchpad0_Col0_PORT GPIO_PRT9
#define Touchpad0_Col1_PORT GPIO_PRT9
#define Touchpad0_Col2_PORT GPIO_PRT9
#define Touchpad0_Col3_PORT GPIO_PRT9
#define Touchpad0_Col4_PORT GPIO_PRT5
#define Touchpad0_Col5_PORT GPIO_PRT5
#define Touchpad0_Col6_PORT GPIO_PRT5
#define Touchpad0_Col7_PORT GPIO_PRT5
#define Touchpad0_Row0_PORT GPIO_PRT0
#define Touchpad0_Row1_PORT GPIO_PRT7
#define Touchpad0_Row2_PORT GPIO_PRT7
#define Touchpad0_Row3_PORT GPIO_PRT5
#define Touchpad0_Row4_PORT GPIO_PRT5
#define Shield1_PIN 2u
#define Button1_Sns0_PIN 3u
#define Touchpad0_Col0_PIN 0u
#define Touchpad0_Col1_PIN 1u
#define Touchpad0_Col2_PIN 2u
#define Touchpad0_Col3_PIN 3u
#define Touchpad0_Col4_PIN 0u
#define Touchpad0_Col5_PIN 3u
#define Touchpad0_Col6_PIN 4u
#define Touchpad0_Col7_PIN 5u
#define Touchpad0_Row0_PIN 0u
#define Touchpad0_Row1_PIN 7u
#define Touchpad0_Row2_PIN 6u
#define Touchpad0_Row3_PIN 7u
#define Touchpad0_Row4_PIN 6u
#define Shield1_PAD MSC1_SPAD0
#define Button1_Sns0_PAD MSC1_SPAD1
#define Touchpad0_Col0_PAD MSC1_SPAD2
#define Touchpad0_Col1_PAD MSC1_SPAD3
#define Touchpad0_Col2_PAD MSC1_SPAD4
#define Touchpad0_Col3_PAD MSC1_SPAD5
#define Touchpad0_Col4_PAD MSC1_SPAD6
#define Touchpad0_Col5_PAD MSC1_SPAD7
#define Touchpad0_Col6_PAD MSC1_SPAD8
#define Touchpad0_Col7_PAD MSC1_SPAD9
#define Touchpad0_Row0_PAD MSC1_SPAD10
#define Touchpad0_Row1_PAD MSC1_SPAD11
#define Touchpad0_Row2_PAD MSC1_SPAD12
#define Touchpad0_Row3_PAD MSC1_SPAD13
#define Touchpad0_Row4_PAD MSC1_SPAD14
#define Shield1_CH_INDEX 1u
#define Button1_Sns0_CH_INDEX 1u
#define Touchpad0_Col0_CH_INDEX 1u
#define Touchpad0_Col1_CH_INDEX 1u
#define Touchpad0_Col2_CH_INDEX 1u
#define Touchpad0_Col3_CH_INDEX 1u
#define Touchpad0_Col4_CH_INDEX 1u
#define Touchpad0_Col5_CH_INDEX 1u
#define Touchpad0_Col6_CH_INDEX 1u
#define Touchpad0_Col7_CH_INDEX 1u
#define Touchpad0_Row0_CH_INDEX 1u
#define Touchpad0_Row1_CH_INDEX 1u
#define Touchpad0_Row2_CH_INDEX 1u
#define Touchpad0_Row3_CH_INDEX 1u
#define Touchpad0_Row4_CH_INDEX 1u
#define CY_MSC1_Cmod1_PORT GPIO_PRT7
#define CY_MSC1_Cmod1_PIN 0u
#define CY_MSC1_Cmod1_PORT_NUM 7
#define CY_MSC1_Cmod1_PAD MSC1_CMOD1
#define CY_MSC1_Cmod1_CH_INDEX 1u
#define CY_MSC1_Cmod2_PORT GPIO_PRT7
#define CY_MSC1_Cmod2_PIN 1u
#define CY_MSC1_Cmod2_PORT_NUM 7
#define CY_MSC1_Cmod2_PAD MSC1_CMOD2
#define CY_MSC1_Cmod2_CH_INDEX 1u
#define CY_MSC1_HW MSC1
#define CY_MSC1_IRQ msc_1_interrupt_IRQn

extern cy_stc_msc_context_t cy_msc_0_context;
extern cy_stc_msc_context_t cy_msc_1_context;

void init_cycfg_peripherals(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PERIPHERALS_H */
