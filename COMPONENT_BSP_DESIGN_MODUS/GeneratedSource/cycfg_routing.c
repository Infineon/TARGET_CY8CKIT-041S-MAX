/*******************************************************************************
* File Name: cycfg_routing.c
*
* Description:
* Establishes all necessary connections between hardware elements.
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

#include "cycfg_routing.h"

#include "cy_trigmux.h"

#include "stdbool.h"

void init_cycfg_routing(void)
{
    Cy_TrigMux_Connect(TRIG0_IN_CPUSS_DMAC_TR_OUT1, TRIG0_OUT_CPUSS_DMAC_TR_IN0);
    Cy_TrigMux_Connect(TRIG0_IN_CPUSS_DMAC_TR_OUT2, TRIG0_OUT_CPUSS_DMAC_TR_IN3);
    Cy_TrigMux_Connect(TRIG0_IN_CPUSS_DMAC_TR_OUT5, TRIG0_OUT_CPUSS_DMAC_TR_IN4);
    Cy_TrigMux_Connect(TRIG0_IN_CPUSS_DMAC_TR_OUT6, TRIG0_OUT_CPUSS_DMAC_TR_IN7);
    Cy_TrigMux_Connect(TRIG0_IN_MSC0_TR_RD_REQ_OUT, TRIG0_OUT_CPUSS_DMAC_TR_IN2);
    Cy_TrigMux_Connect(TRIG0_IN_MSC0_TR_WR_REQ_OUT, TRIG0_OUT_CPUSS_DMAC_TR_IN1);
    Cy_TrigMux_Connect(TRIG0_IN_MSC1_TR_RD_REQ_OUT, TRIG0_OUT_CPUSS_DMAC_TR_IN6);
    Cy_TrigMux_Connect(TRIG0_IN_MSC1_TR_WR_REQ_OUT, TRIG0_OUT_CPUSS_DMAC_TR_IN5);
    Cy_TrigMux_Connect(TRIG3_IN_CPUSS_DMAC_TR_OUT0, TRIG3_OUT_MSC0_TR_WR_REQ_IN);
    Cy_TrigMux_Connect(TRIG3_IN_CPUSS_DMAC_TR_OUT3, TRIG3_OUT_MSC0_TR_RD_REQ_IN);
    Cy_TrigMux_Connect(TRIG3_IN_CPUSS_DMAC_TR_OUT4, TRIG3_OUT_MSC1_TR_WR_REQ_IN);
    Cy_TrigMux_Connect(TRIG3_IN_CPUSS_DMAC_TR_OUT7, TRIG3_OUT_MSC1_TR_RD_REQ_IN);
}
