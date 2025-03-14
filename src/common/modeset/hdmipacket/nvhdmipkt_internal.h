/*
 * SPDX-FileCopyrightText: Copyright (c) 2021 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * File:      nvhdmipkt_internal.h
 *
 * Purpose:   This files contains defines to be used by nvhdmipkt.c
 */

#ifndef _NVHDMIPKT_INTERNAL_H_
#define _NVHDMIPKT_INTERNAL_H_

/*************************************************************************************************
 *            NOTE * This header file to be used only inside this (Hdmi Packet) library.         *
 ************************************************************************************************/
#define toHdmiPktHandle(p)   ((NvHdmiPkt_Handle)(p))
#define fromHdmiPktHandle(h) ((NVHDMIPKT_CLASS*)(h))

// CTA infoframe max payload size
#define NVHDMIPKT_CTAIF_MAX_PKT_BYTES  31 // 3 bytes header + 28 bytes data

extern void initializeHdmiPktInterface0073(NVHDMIPKT_CLASS*);
extern void initializeHdmiPktInterface9171(NVHDMIPKT_CLASS*);
extern void initializeHdmiPktInterface9271(NVHDMIPKT_CLASS*);
extern void initializeHdmiPktInterface9471(NVHDMIPKT_CLASS*);
extern void initializeHdmiPktInterface9571(NVHDMIPKT_CLASS*);
extern void initializeHdmiPktInterfaceC371(NVHDMIPKT_CLASS*);
extern void initializeHdmiPktInterfaceC671(NVHDMIPKT_CLASS*);
extern void initializeHdmiPktInterfaceC771(NVHDMIPKT_CLASS*);
extern void initializeHdmiPktInterfaceC871(NVHDMIPKT_CLASS*);
extern void initializeHdmiPktInterfaceC971(NVHDMIPKT_CLASS*);
extern void initializeHdmiPktInterfaceCA71(NVHDMIPKT_CLASS*);

extern NvBool hdmiConstructor0073(NVHDMIPKT_CLASS*);
extern void   hdmiDestructor0073 (NVHDMIPKT_CLASS*);
extern NvBool hdmiConstructor9171(NVHDMIPKT_CLASS*);
extern void   hdmiDestructor9171 (NVHDMIPKT_CLASS*);
extern NvBool hdmiConstructor9271(NVHDMIPKT_CLASS*);
extern void   hdmiDestructor9271 (NVHDMIPKT_CLASS*);
extern NvBool hdmiConstructor9471(NVHDMIPKT_CLASS*);
extern void   hdmiDestructor9471 (NVHDMIPKT_CLASS*);
extern NvBool hdmiConstructor9571(NVHDMIPKT_CLASS*);
extern void   hdmiDestructor9571 (NVHDMIPKT_CLASS*);
extern NvBool hdmiConstructorC371(NVHDMIPKT_CLASS*);
extern void   hdmiDestructorC371 (NVHDMIPKT_CLASS*);
extern NvBool hdmiConstructorC671(NVHDMIPKT_CLASS*);
extern void   hdmiDestructorC671 (NVHDMIPKT_CLASS*);
extern NvBool hdmiConstructorC771(NVHDMIPKT_CLASS*);
extern void   hdmiDestructorC771 (NVHDMIPKT_CLASS*);
extern NvBool hdmiConstructorC871(NVHDMIPKT_CLASS*);
extern void   hdmiDestructorC871 (NVHDMIPKT_CLASS*);
extern NvBool isInfoframeOffsetAvailable(NvU32*     pBaseReg,
                                         NvU32      head,
                                         NvU32      requestedInfoframe);
extern NVHDMIPKT_RESULT disableInfoframeC871(NVHDMIPKT_CLASS*  pThis,
                                             NvU32*            pBaseReg,
                                             NvU32             head,
                                             NvU32             ifIndex);
extern NvBool hdmiConstructorC971(NVHDMIPKT_CLASS*);
extern void   hdmiDestructorC971 (NVHDMIPKT_CLASS*);
extern NvBool hdmiConstructorCA71(NVHDMIPKT_CLASS*);
extern void   hdmiDestructorCA71 (NVHDMIPKT_CLASS*);

#endif //_NVHDMIPKT_INTERNAL_H_
