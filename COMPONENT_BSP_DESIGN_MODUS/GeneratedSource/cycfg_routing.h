/*******************************************************************************
* File Name: cycfg_routing.h
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

#if !defined(CYCFG_ROUTING_H)
#define CYCFG_ROUTING_H

#if defined(__cplusplus)
extern "C" {
#endif

#include "cycfg_notices.h"
void init_cycfg_routing(void);
#define init_cycfg_connectivity() init_cycfg_routing()
#define ioss_0_port_0_pin_0_ANALOG P0_0_LPCOMP_IN_P0
#define ioss_0_port_0_pin_2_ANALOG P0_2_LPCOMP_IN_P1
#define ioss_0_port_0_pin_3_ANALOG P0_3_LPCOMP_IN_N1
#define ioss_0_port_3_pin_0_ANALOG P3_0_MSC0_S_PAD1
#define ioss_0_port_3_pin_1_ANALOG P3_1_MSC0_S_PAD2
#define ioss_0_port_3_pin_2_HSIOM P3_2_CPUSS_SWD_DATA
#define ioss_0_port_3_pin_3_HSIOM P3_3_CPUSS_SWD_CLK
#define ioss_0_port_3_pin_4_ANALOG P3_4_MSC0_S_PAD3
#define ioss_0_port_3_pin_5_ANALOG P3_5_MSC0_S_PAD4
#define ioss_0_port_3_pin_6_ANALOG P3_6_MSC0_S_PAD5
#define ioss_0_port_3_pin_7_ANALOG P3_7_MSC0_S_PAD6
#define ioss_0_port_4_pin_0_ANALOG P4_0_MSC0_CMOD3PADS
#define ioss_0_port_4_pin_1_ANALOG P4_1_MSC0_CMOD4PADS
#define ioss_0_port_4_pin_4_ANALOG P4_4_MSC0_S_PAD12
#define ioss_0_port_4_pin_5_ANALOG P4_5_MSC0_S_PAD13
#define ioss_0_port_4_pin_6_ANALOG P4_6_MSC0_S_PAD14
#define ioss_0_port_4_pin_7_ANALOG P4_7_MSC0_S_PAD15
#define ioss_0_port_5_pin_0_ANALOG P5_0_MSC1_S_PAD12
#define ioss_0_port_5_pin_3_ANALOG P5_3_MSC1_S_PAD13
#define ioss_0_port_5_pin_4_ANALOG P5_4_MSC1_S_PAD14
#define ioss_0_port_5_pin_5_ANALOG P5_5_MSC1_S_PAD15
#define ioss_0_port_5_pin_6_ANALOG P5_6_MSC1_S_PAD0
#define ioss_0_port_5_pin_7_ANALOG P5_7_MSC1_S_PAD1
#define ioss_0_port_7_pin_0_ANALOG P7_0_MSC1_CMOD3PADS
#define ioss_0_port_7_pin_1_ANALOG P7_1_MSC1_CMOD4PADS
#define ioss_0_port_7_pin_6_ANALOG P7_6_MSC1_S_PAD2
#define ioss_0_port_7_pin_7_ANALOG P7_7_MSC1_S_PAD3
#define ioss_0_port_9_pin_0_ANALOG P9_0_MSC1_S_PAD8
#define ioss_0_port_9_pin_1_ANALOG P9_1_MSC1_S_PAD9
#define ioss_0_port_9_pin_2_ANALOG P9_2_MSC1_S_PAD10
#define ioss_0_port_9_pin_3_ANALOG P9_3_MSC1_S_PAD11
#define ioss_0_port_11_pin_0_ANALOG P11_0_MSC0_S_PAD7
#define ioss_0_port_11_pin_1_ANALOG P11_1_MSC0_S_PAD8
#define ioss_0_port_11_pin_2_ANALOG P11_2_MSC0_S_PAD9
#define ioss_0_port_11_pin_3_ANALOG P11_3_MSC0_S_PAD10
#define ioss_0_port_11_pin_4_ANALOG P11_4_MSC0_S_PAD11

#define cpuss_0_dmac_0_chan_0_tr_in_0_TRIGGER_OUT TRIG0_OUT_CPUSS_DMAC_TR_IN0
#define cpuss_0_dmac_0_chan_0_tr_out_0_TRIGGER_IN TRIG3_IN_CPUSS_DMAC_TR_OUT0
#define cpuss_0_dmac_0_chan_1_tr_in_0_TRIGGER_OUT TRIG0_OUT_CPUSS_DMAC_TR_IN1
#define cpuss_0_dmac_0_chan_1_tr_out_0_TRIGGER_IN TRIG0_IN_CPUSS_DMAC_TR_OUT1
#define cpuss_0_dmac_0_chan_2_tr_in_0_TRIGGER_OUT TRIG0_OUT_CPUSS_DMAC_TR_IN2
#define cpuss_0_dmac_0_chan_2_tr_out_0_TRIGGER_IN TRIG0_IN_CPUSS_DMAC_TR_OUT2
#define cpuss_0_dmac_0_chan_3_tr_in_0_TRIGGER_OUT TRIG0_OUT_CPUSS_DMAC_TR_IN3
#define cpuss_0_dmac_0_chan_3_tr_out_0_TRIGGER_IN TRIG3_IN_CPUSS_DMAC_TR_OUT3
#define cpuss_0_dmac_0_chan_4_tr_in_0_TRIGGER_OUT TRIG0_OUT_CPUSS_DMAC_TR_IN4
#define cpuss_0_dmac_0_chan_4_tr_out_0_TRIGGER_IN TRIG3_IN_CPUSS_DMAC_TR_OUT4
#define cpuss_0_dmac_0_chan_5_tr_in_0_TRIGGER_OUT TRIG0_OUT_CPUSS_DMAC_TR_IN5
#define cpuss_0_dmac_0_chan_5_tr_out_0_TRIGGER_IN TRIG0_IN_CPUSS_DMAC_TR_OUT5
#define cpuss_0_dmac_0_chan_6_tr_in_0_TRIGGER_OUT TRIG0_OUT_CPUSS_DMAC_TR_IN6
#define cpuss_0_dmac_0_chan_6_tr_out_0_TRIGGER_IN TRIG0_IN_CPUSS_DMAC_TR_OUT6
#define cpuss_0_dmac_0_chan_7_tr_in_0_TRIGGER_OUT TRIG0_OUT_CPUSS_DMAC_TR_IN7
#define cpuss_0_dmac_0_chan_7_tr_out_0_TRIGGER_IN TRIG3_IN_CPUSS_DMAC_TR_OUT7
#define CYBSP_MSC0_tr_rd_req_in_0_TRIGGER_OUT TRIG3_OUT_MSC0_TR_RD_REQ_IN
#define CYBSP_MSC0_tr_rd_req_out_0_TRIGGER_IN TRIG0_IN_MSC0_TR_RD_REQ_OUT
#define CYBSP_MSC0_tr_wr_req_in_0_TRIGGER_OUT TRIG3_OUT_MSC0_TR_WR_REQ_IN
#define CYBSP_MSC0_tr_wr_req_out_0_TRIGGER_IN TRIG0_IN_MSC0_TR_WR_REQ_OUT
#define CYBSP_MSC1_tr_rd_req_in_0_TRIGGER_OUT TRIG3_OUT_MSC1_TR_RD_REQ_IN
#define CYBSP_MSC1_tr_rd_req_out_0_TRIGGER_IN TRIG0_IN_MSC1_TR_RD_REQ_OUT
#define CYBSP_MSC1_tr_wr_req_in_0_TRIGGER_OUT TRIG3_OUT_MSC1_TR_WR_REQ_IN
#define CYBSP_MSC1_tr_wr_req_out_0_TRIGGER_IN TRIG0_IN_MSC1_TR_WR_REQ_OUT

#define MSC0_CMOD1 3
#define MSC0_CMOD2 4
#define MSC0_SPAD0 10
#define MSC0_SPAD1 9
#define MSC0_SPAD2 1
#define MSC0_SPAD3 2
#define MSC0_SPAD4 3
#define MSC0_SPAD5 4
#define MSC0_SPAD6 5
#define MSC0_SPAD7 6
#define MSC0_SPAD8 7
#define MSC0_SPAD9 8
#define MSC0_SPAD10 15
#define MSC0_SPAD11 14
#define MSC0_SPAD12 13
#define MSC0_SPAD13 12
#define MSC0_SPAD14 11
#define MSC1_CMOD1 3
#define MSC1_CMOD2 4
#define MSC1_SPAD0 6
#define MSC1_SPAD1 7
#define MSC1_SPAD2 8
#define MSC1_SPAD3 9
#define MSC1_SPAD4 10
#define MSC1_SPAD5 11
#define MSC1_SPAD6 12
#define MSC1_SPAD7 13
#define MSC1_SPAD8 14
#define MSC1_SPAD9 15
#define MSC1_SPAD10 4
#define MSC1_SPAD11 3
#define MSC1_SPAD12 2
#define MSC1_SPAD13 1
#define MSC1_SPAD14 0

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_ROUTING_H */
