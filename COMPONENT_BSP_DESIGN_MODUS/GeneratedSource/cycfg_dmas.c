/*******************************************************************************
* File Name: cycfg_dmas.c
*
* Description:
* DMA configuration
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

#include "cycfg_dmas.h"

const cy_stc_dmac_channel_config_t cpuss_0_dmac_0_chan_0_channel_config = 
{
    .priority = 3UL,
    .enable = false,
    .descriptor = CY_DMAC_DESCRIPTOR_PING,
};
const cy_stc_dmac_descriptor_config_t cpuss_0_dmac_0_chan_0_ping_config = 
{
    .srcAddress = 0UL,
    .dstAddress = 0UL,
    .dataCount = 1UL,
    .dataSize = CY_DMAC_WORD,
    .srcTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .srcAddrIncrement = true,
    .dstTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .dstAddrIncrement = true,
    .retrigger = CY_DMAC_RETRIG_IM,
    .cpltState = false,
    .interrupt = true,
    .preemptable = true,
    .flipping = true,
    .triggerType = CY_DMAC_SINGLE_ELEMENT,
};
const cy_stc_dmac_descriptor_config_t cpuss_0_dmac_0_chan_0_pong_config = 
{
    .srcAddress = 0UL,
    .dstAddress = 0UL,
    .dataCount = 1UL,
    .dataSize = CY_DMAC_WORD,
    .srcTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .srcAddrIncrement = true,
    .dstTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .dstAddrIncrement = true,
    .retrigger = CY_DMAC_RETRIG_IM,
    .cpltState = false,
    .interrupt = true,
    .preemptable = true,
    .flipping = true,
    .triggerType = CY_DMAC_SINGLE_ELEMENT,
};
const cy_stc_dmac_channel_config_t cpuss_0_dmac_0_chan_1_channel_config = 
{
    .priority = 3UL,
    .enable = false,
    .descriptor = CY_DMAC_DESCRIPTOR_PING,
};
const cy_stc_dmac_descriptor_config_t cpuss_0_dmac_0_chan_1_ping_config = 
{
    .srcAddress = 0UL,
    .dstAddress = 0UL,
    .dataCount = 1UL,
    .dataSize = CY_DMAC_WORD,
    .srcTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .srcAddrIncrement = true,
    .dstTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .dstAddrIncrement = true,
    .retrigger = CY_DMAC_RETRIG_IM,
    .cpltState = false,
    .interrupt = true,
    .preemptable = true,
    .flipping = true,
    .triggerType = CY_DMAC_SINGLE_ELEMENT,
};
const cy_stc_dmac_descriptor_config_t cpuss_0_dmac_0_chan_1_pong_config = 
{
    .srcAddress = 0UL,
    .dstAddress = 0UL,
    .dataCount = 1UL,
    .dataSize = CY_DMAC_WORD,
    .srcTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .srcAddrIncrement = true,
    .dstTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .dstAddrIncrement = true,
    .retrigger = CY_DMAC_RETRIG_IM,
    .cpltState = false,
    .interrupt = true,
    .preemptable = true,
    .flipping = true,
    .triggerType = CY_DMAC_SINGLE_ELEMENT,
};
const cy_stc_dmac_channel_config_t cpuss_0_dmac_0_chan_2_channel_config = 
{
    .priority = 3UL,
    .enable = false,
    .descriptor = CY_DMAC_DESCRIPTOR_PING,
};
const cy_stc_dmac_descriptor_config_t cpuss_0_dmac_0_chan_2_ping_config = 
{
    .srcAddress = 0UL,
    .dstAddress = 0UL,
    .dataCount = 1UL,
    .dataSize = CY_DMAC_WORD,
    .srcTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .srcAddrIncrement = true,
    .dstTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .dstAddrIncrement = true,
    .retrigger = CY_DMAC_RETRIG_IM,
    .cpltState = false,
    .interrupt = true,
    .preemptable = true,
    .flipping = true,
    .triggerType = CY_DMAC_SINGLE_ELEMENT,
};
const cy_stc_dmac_descriptor_config_t cpuss_0_dmac_0_chan_2_pong_config = 
{
    .srcAddress = 0UL,
    .dstAddress = 0UL,
    .dataCount = 1UL,
    .dataSize = CY_DMAC_WORD,
    .srcTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .srcAddrIncrement = true,
    .dstTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .dstAddrIncrement = true,
    .retrigger = CY_DMAC_RETRIG_IM,
    .cpltState = false,
    .interrupt = true,
    .preemptable = true,
    .flipping = true,
    .triggerType = CY_DMAC_SINGLE_ELEMENT,
};
const cy_stc_dmac_channel_config_t cpuss_0_dmac_0_chan_3_channel_config = 
{
    .priority = 3UL,
    .enable = false,
    .descriptor = CY_DMAC_DESCRIPTOR_PING,
};
const cy_stc_dmac_descriptor_config_t cpuss_0_dmac_0_chan_3_ping_config = 
{
    .srcAddress = 0UL,
    .dstAddress = 0UL,
    .dataCount = 1UL,
    .dataSize = CY_DMAC_WORD,
    .srcTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .srcAddrIncrement = true,
    .dstTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .dstAddrIncrement = true,
    .retrigger = CY_DMAC_RETRIG_IM,
    .cpltState = false,
    .interrupt = true,
    .preemptable = true,
    .flipping = true,
    .triggerType = CY_DMAC_SINGLE_ELEMENT,
};
const cy_stc_dmac_descriptor_config_t cpuss_0_dmac_0_chan_3_pong_config = 
{
    .srcAddress = 0UL,
    .dstAddress = 0UL,
    .dataCount = 1UL,
    .dataSize = CY_DMAC_WORD,
    .srcTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .srcAddrIncrement = true,
    .dstTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .dstAddrIncrement = true,
    .retrigger = CY_DMAC_RETRIG_IM,
    .cpltState = false,
    .interrupt = true,
    .preemptable = true,
    .flipping = true,
    .triggerType = CY_DMAC_SINGLE_ELEMENT,
};
const cy_stc_dmac_channel_config_t cpuss_0_dmac_0_chan_4_channel_config = 
{
    .priority = 3UL,
    .enable = false,
    .descriptor = CY_DMAC_DESCRIPTOR_PING,
};
const cy_stc_dmac_descriptor_config_t cpuss_0_dmac_0_chan_4_ping_config = 
{
    .srcAddress = 0UL,
    .dstAddress = 0UL,
    .dataCount = 1UL,
    .dataSize = CY_DMAC_WORD,
    .srcTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .srcAddrIncrement = true,
    .dstTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .dstAddrIncrement = true,
    .retrigger = CY_DMAC_RETRIG_IM,
    .cpltState = false,
    .interrupt = true,
    .preemptable = true,
    .flipping = true,
    .triggerType = CY_DMAC_SINGLE_ELEMENT,
};
const cy_stc_dmac_descriptor_config_t cpuss_0_dmac_0_chan_4_pong_config = 
{
    .srcAddress = 0UL,
    .dstAddress = 0UL,
    .dataCount = 1UL,
    .dataSize = CY_DMAC_WORD,
    .srcTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .srcAddrIncrement = true,
    .dstTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .dstAddrIncrement = true,
    .retrigger = CY_DMAC_RETRIG_IM,
    .cpltState = false,
    .interrupt = true,
    .preemptable = true,
    .flipping = true,
    .triggerType = CY_DMAC_SINGLE_ELEMENT,
};
const cy_stc_dmac_channel_config_t cpuss_0_dmac_0_chan_5_channel_config = 
{
    .priority = 3UL,
    .enable = false,
    .descriptor = CY_DMAC_DESCRIPTOR_PING,
};
const cy_stc_dmac_descriptor_config_t cpuss_0_dmac_0_chan_5_ping_config = 
{
    .srcAddress = 0UL,
    .dstAddress = 0UL,
    .dataCount = 1UL,
    .dataSize = CY_DMAC_WORD,
    .srcTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .srcAddrIncrement = true,
    .dstTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .dstAddrIncrement = true,
    .retrigger = CY_DMAC_RETRIG_IM,
    .cpltState = false,
    .interrupt = true,
    .preemptable = true,
    .flipping = true,
    .triggerType = CY_DMAC_SINGLE_ELEMENT,
};
const cy_stc_dmac_descriptor_config_t cpuss_0_dmac_0_chan_5_pong_config = 
{
    .srcAddress = 0UL,
    .dstAddress = 0UL,
    .dataCount = 1UL,
    .dataSize = CY_DMAC_WORD,
    .srcTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .srcAddrIncrement = true,
    .dstTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .dstAddrIncrement = true,
    .retrigger = CY_DMAC_RETRIG_IM,
    .cpltState = false,
    .interrupt = true,
    .preemptable = true,
    .flipping = true,
    .triggerType = CY_DMAC_SINGLE_ELEMENT,
};
const cy_stc_dmac_channel_config_t cpuss_0_dmac_0_chan_6_channel_config = 
{
    .priority = 3UL,
    .enable = false,
    .descriptor = CY_DMAC_DESCRIPTOR_PING,
};
const cy_stc_dmac_descriptor_config_t cpuss_0_dmac_0_chan_6_ping_config = 
{
    .srcAddress = 0UL,
    .dstAddress = 0UL,
    .dataCount = 1UL,
    .dataSize = CY_DMAC_WORD,
    .srcTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .srcAddrIncrement = true,
    .dstTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .dstAddrIncrement = true,
    .retrigger = CY_DMAC_RETRIG_IM,
    .cpltState = false,
    .interrupt = true,
    .preemptable = true,
    .flipping = true,
    .triggerType = CY_DMAC_SINGLE_ELEMENT,
};
const cy_stc_dmac_descriptor_config_t cpuss_0_dmac_0_chan_6_pong_config = 
{
    .srcAddress = 0UL,
    .dstAddress = 0UL,
    .dataCount = 1UL,
    .dataSize = CY_DMAC_WORD,
    .srcTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .srcAddrIncrement = true,
    .dstTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .dstAddrIncrement = true,
    .retrigger = CY_DMAC_RETRIG_IM,
    .cpltState = false,
    .interrupt = true,
    .preemptable = true,
    .flipping = true,
    .triggerType = CY_DMAC_SINGLE_ELEMENT,
};
const cy_stc_dmac_channel_config_t cpuss_0_dmac_0_chan_7_channel_config = 
{
    .priority = 3UL,
    .enable = false,
    .descriptor = CY_DMAC_DESCRIPTOR_PING,
};
const cy_stc_dmac_descriptor_config_t cpuss_0_dmac_0_chan_7_ping_config = 
{
    .srcAddress = 0UL,
    .dstAddress = 0UL,
    .dataCount = 1UL,
    .dataSize = CY_DMAC_WORD,
    .srcTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .srcAddrIncrement = true,
    .dstTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .dstAddrIncrement = true,
    .retrigger = CY_DMAC_RETRIG_IM,
    .cpltState = false,
    .interrupt = true,
    .preemptable = true,
    .flipping = true,
    .triggerType = CY_DMAC_SINGLE_ELEMENT,
};
const cy_stc_dmac_descriptor_config_t cpuss_0_dmac_0_chan_7_pong_config = 
{
    .srcAddress = 0UL,
    .dstAddress = 0UL,
    .dataCount = 1UL,
    .dataSize = CY_DMAC_WORD,
    .srcTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .srcAddrIncrement = true,
    .dstTransferSize = CY_DMAC_TRANSFER_SIZE_WORD,
    .dstAddrIncrement = true,
    .retrigger = CY_DMAC_RETRIG_IM,
    .cpltState = false,
    .interrupt = true,
    .preemptable = true,
    .flipping = true,
    .triggerType = CY_DMAC_SINGLE_ELEMENT,
};

