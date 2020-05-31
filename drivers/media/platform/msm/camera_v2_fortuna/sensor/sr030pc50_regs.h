/* Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef	__SR030PC50_REGS_H__
#define __SR030PC50_REGS_H__

static struct msm_camera_i2c_reg_conf sr030pc50_init_regs[]= {
{0x03, 0x00,},
{0x01, 0x71,},
{0x01, 0x73,},
{0x01, 0x71,},
       
       
// PLL  Setting 
{0x03, 0x00,},                                     
       
{0x08, 0x0f,}, //Parallel NO Output_PAD Out
{0x10, 0x00,},
{0x11, 0x90,},
{0x12, 0x00,},
{0x14, 0x88,},
       
{0x0b, 0xaa,},                                                             
{0x0c, 0xaa,},                                                             
{0x0d, 0xaa,},                                                             
                                                                     
{0xc0, 0x95,},                                     
{0xc1, 0x18,},                                     
{0xc2, 0x91,},                                     
{0xc3, 0x00,},                                     
{0xc4, 0x01,},   
       
{0x03, 0x20,}, //page 20                                                   
{0x10, 0x1c,}, //ae off                                                    
{0x03, 0x22,}, //page 22                                                   
{0x10, 0x7b,}, //awb off                                                   
                                                                     
{0x03, 0x00,},
{0x12, 0x00,},
{0x20, 0x00,},
{0x21, 0x04,},
{0x22, 0x00,},
{0x23, 0x04,},
       
{0x40, 0x00,}, //Hblank 144                                                
{0x41, 0x90,},                                                             
{0x42, 0x00,}, //Vblank 154
{0x43, 0x9a,}, 
       
//BLC  
{0x80, 0x2e,}, //don't touch
{0x81, 0x7e,}, //don't touch
{0x82, 0x90,}, //don't touch
{0x83, 0x30,}, //don't touch
{0x84, 0x2c,}, //don't touch
{0x85, 0x4b,}, //don't touch
{0x86, 0x01,}, //don't touch
{0x88, 0x47,}, //don't touch
//0x89 48,//BLC hold
       
{0x90, 0x0c,}, //BLC_TIME_TH_ON
{0x91, 0x0c,}, //BLC_TIME_TH_OFF 
{0x92, 0x90,}, //BLC_AG_TH_ON
{0x93, 0x88,}, //BLC_AG_TH_OFF
       
{0x98, 0x38,}, //don't touch
{0x99, 0x40,}, //Out BLC
{0xa0, 0x02,}, //Dark BLC
{0xa8, 0x42,}, //Normal BLC 44
       
//Page 2 Last Update 12_01_20
{0x03, 0x02,},
{0x10, 0x00,},
{0x11, 0x00,},
{0x13, 0x40,}, 
{0x14, 0x04,}, 
{0x18, 0x1c,},
{0x19, 0x00,}, //01
{0x1a, 0x00,},
{0x1b, 0x08,},
{0x1c, 0x9c,},
{0x1d, 0x03,},
{0x20, 0x33,},
{0x21, 0x77,},
{0x22, 0xa7,},
{0x23, 0x32,},
{0x24, 0x33,},
{0x2b, 0x40,},
{0x2d, 0x32,},
{0x31, 0x99,},
{0x32, 0x00,},
{0x33, 0x00,},
{0x34, 0x3c,},
{0x35, 0x0d,},
{0x3b, 0x60,}, //80
       
//timi ng control 1 // //don't touch
{0x50, 0x21,},
{0x51, 0x1c,},
{0x52, 0xaa,},
{0x53, 0x5a,},
{0x54, 0x30,},
{0x55, 0x10,},
{0x56, 0x0c,},
{0x58, 0x00,},
{0x59, 0x0f,},
       
//timi ng control 2 // //don't touch
{0x60, 0x34,},
{0x61, 0x3a,},
{0x62, 0x34,},
{0x63, 0x39,},
{0x64, 0x34,},
{0x65, 0x39,},
{0x72, 0x35,},
{0x73, 0x38,},
{0x74, 0x35,},
{0x75, 0x38,},
{0x80, 0x02,},
{0x81, 0x2e,},
{0x82, 0x0d,},
{0x83, 0x10,},
{0x84, 0x0d,},
{0x85, 0x10,},
{0x92, 0x1d,},
{0x93, 0x20,},
{0x94, 0x1d,},
{0x95, 0x20,},
{0xa0, 0x03,},
{0xa1, 0x2d,},
{0xa4, 0x2d,},
{0xa5, 0x03,},
{0xa8, 0x12,},
{0xa9, 0x1b,},
{0xaa, 0x22,},
{0xab, 0x2b,},
{0xac, 0x10,},
{0xad, 0x0e,},
{0xb8, 0x33,},
{0xb9, 0x35,},
{0xbc, 0x0c,},
{0xbd, 0x0e,},
{0xc0, 0x3a,},
{0xc1, 0x3f,},
{0xc2, 0x3a,},
{0xc3, 0x3f,},
{0xc4, 0x3a,},
{0xc5, 0x3e,},
{0xc6, 0x3a,},
{0xc7, 0x3e,},
{0xc8, 0x3a,},
{0xc9, 0x3e,},
{0xca, 0x3a,},
{0xcb, 0x3e,},
{0xcc, 0x3b,},
{0xcd, 0x3d,},
{0xce, 0x3b,},
{0xcf, 0x3d,},
{0xd0, 0x33,},
{0xd1, 0x3f,},
       
//Page  10
{0x03, 0x10,},
{0x10, 0x01,}, //03, //ISPCTL1, YUV ORDER(FIX)
{0x11, 0x43,},
{0x12, 0x30,}, //Y offet, dy offseet enable
{0x40, 0x80,},
{0x41, 0x00,}, //00 DYOFS  00->10  _100318
{0x48, 0x88,}, //Contrast  88->84  _100318
{0x50, 0x48,}, //AGBRT
       
{0x60, 0x01,}, //7f //7c
{0x61, 0x00,}, //Use default
{0x62, 0x7c,}, //80 SATB_B  (1.4x)
{0x63, 0x80,}, //80 SATR_R  (1.2x)
{0x64, 0x48,}, //AGSAT
{0x66, 0x90,}, //wht_th2
{0x67, 0x36,}, //wht_gain  Dark (0.4x), Normal (0.75x)
       
{0x80, 0x00,},
       
//Page  11
//LPF  
{0x03, 0x11,},
{0x10, 0x25,},
{0x11, 0x07,},
{0x20, 0x00,},
{0x21, 0x60,},
{0x23, 0x0a,},
{0x60, 0x12,},
{0x61, 0x85,},
{0x62, 0x00,},
{0x63, 0x00,},
{0x64, 0x00,},
       
{0x67, 0x70,},
{0x68, 0x24,},
{0x69, 0x04,},
       
//Page  12
//2D   
{0x03, 0x12,},
{0x40, 0xd3,},
{0x41, 0x09,},
{0x50, 0x16,},
{0x51, 0x24,},
{0x70, 0x1f,},
{0x71, 0x00,},
{0x72, 0x00,},
{0x73, 0x00,},
{0x74, 0x12,},
{0x75, 0x12,},
{0x76, 0x20,},
{0x77, 0x80,},
{0x78, 0x88,},
{0x79, 0x18,},
       
////// /////////////////
{0x90, 0x3d,},
{0x91, 0x34,},
{0x99, 0x28,},
{0x9c, 0x05,}, //14 For defect
{0x9d, 0x08,}, //15 For defect
{0x9e, 0x28,},
{0x9f, 0x28,},
       
{0xb0, 0x7d,}, //75 White Defect
{0xb5, 0x44,},
{0xb6, 0x82,},
{0xb7, 0x52,},
{0xb8, 0x44,},
{0xb9, 0x15,},
////// /////////////////
       
//Edge 
{0x03, 0x13,},
{0x10, 0x01,},
{0x11, 0x89,},
{0x12, 0x14,},
{0x13, 0x19,},
{0x14, 0x08,},
{0x20, 0x03,},
{0x21, 0x05,},
{0x23, 0x25,},
{0x24, 0x21,},
{0x25, 0x08,},
{0x26, 0x40,},
{0x27, 0x00,},
{0x28, 0x08,},
{0x29, 0x50,},
{0x2a, 0xe0,},
{0x2b, 0x10,},
{0x2c, 0x28,},
{0x2d, 0x40,},
{0x2e, 0x00,},
{0x2f, 0x00,},
{0x30, 0x11,},
{0x80, 0x05,},
{0x81, 0x07,},
{0x90, 0x05,},
{0x91, 0x05,},
{0x92, 0x00,},
{0x93, 0x30,},
{0x94, 0x30,},
{0x95, 0x10,},
       
{0x03, 0x14,},
{0x10, 0x01,},
       
{0x22, 0x58,},
{0x23, 0x45,},
{0x24, 0x44,},
       
{0x27, 0x58,},
{0x28, 0x80,},
{0x29, 0x58,},
{0x2a, 0x80,},
{0x2b, 0x58,},
{0x2c, 0x80,},
       
//15pa ge//////////////////////////
{0x03, 0x15,},
{0x10, 0x03,},
       
{0x14, 0x52,},
{0x16, 0x3a,},
{0x17, 0x2f,},
       
//CMC  
{0x30, 0xf1,},
{0x31, 0x71,},
{0x32, 0x00,},
{0x33, 0x1f,},
{0x34, 0xe1,},
{0x35, 0x42,},
{0x36, 0x01,},
{0x37, 0x31,},
{0x38, 0x72,},
//CMC  OFS
{0x40, 0x90,},
{0x41, 0x82,},
{0x42, 0x12,},
{0x43, 0x86,},
{0x44, 0x92,},
{0x45, 0x18,},
{0x46, 0x84,},
{0x47, 0x02,},
{0x48, 0x02,},
       
{0x03, 0x16,},
{0x10, 0x01,},
{0x30, 0x00,},
{0x31, 0x06,},
{0x32, 0x21,},
{0x33, 0x36,},
{0x34, 0x58,},
{0x35, 0x75,},
{0x36, 0x8e,},
{0x37, 0xa3,},
{0x38, 0xb4,},
{0x39, 0xc3,},
{0x3a, 0xcf,},
{0x3b, 0xe2,},
{0x3c, 0xf0,},
{0x3d, 0xf9,},    
{0x3e, 0xff,},    
       
//Page  17 AE 
{0x03, 0x17,},
{0xc4, 0x3c,},
{0xc5, 0x32,},
       
//Page  20 AE 
{0x03, 0x20,},
{0x10, 0x1c,},
{0x11, 0x04,},
       
{0x20, 0x01,},
{0x28, 0x27,},
{0x29, 0xa1,},
       
{0x2a, 0xf0,},
{0x2b, 0xf4,},
{0x2c, 0x2b,}, 
       
{0x30, 0xf8,},
       
{0x3b, 0x22,},
{0x3c, 0xde,},
       
{0x39, 0x22,},
{0x3a, 0xde,},
{0x3b, 0x22,}, //23->22 _10_04_06 hhzin
{0x3c, 0xde,},
       
{0x60, 0x70,},
{0x61, 0x20,},
       
{0x62, 0x70,},
{0x63, 0x20,},
       
{0x68, 0x28,},
{0x69, 0x79,},
{0x6a, 0x2c,},
{0x6b, 0xc4,},
       
{0x70, 0x34,},//Y Targe 32
       
{0x76, 0x11,}, //Unlock bnd1
{0x77, 0x72,}, //Unlock bnd2 02->a2 _10_04_06 hhzin
       
{0x78, 0x12,}, //Yth 1
{0x79, 0x26,}, //Yth 2 26->27 _10_04_06 hhzin
{0x7a, 0x23,}, //Yth 3
       
{0x7c, 0x17,}, //1c->1d _10_04_06 hhzin
{0x7d, 0x22,},
       
//50Hz 
{0x83, 0x00,}, //EXP Normal 33.33 fps 
{0x84, 0xbd,},                                                             
{0x85, 0xd8,},                                                             
       
{0x86, 0x00,}, //EXPMin 8125.00 fps                                        
{0x87, 0xc8,},                                                             
       
//60Hz _8fps
{0x88, 0x03,}, //EXP Max 8.00 fps 
{0x89, 0x17,}, 
{0x8a, 0x04,}, 
       
//50Hz _8fps
{0xa0, 0x02,}, //EXP Max(100Hz) 8.33 fps 
{0xa1, 0xf7,},                                                             
{0xa2, 0x60,},                                                             
       
{0x8B, 0x3f,}, //EXP100                                                    
{0x8C, 0x48,},                                                             
{0x8D, 0x34,}, //EXP120                                                    
{0x8E, 0xbc,},                                                             
       
{0x98, 0x8C,},
{0x99, 0x23,},
       
{0x9c, 0x04,}, //EXP Limit 1354.17 fps 
{0x9d, 0xb0,}, 
{0x9e, 0x00,}, //EXP Unit 
{0x9f, 0xc8,},                                                          
       
{0xb0, 0x1d,},
{0xb1, 0x14,},
{0xb2, 0x98,},
{0xb3, 0x17,},
{0xb4, 0x17,},
{0xb5, 0x3e,},
{0xb6, 0x2b,},
{0xb7, 0x24,},
{0xb8, 0x21,},
{0xb9, 0x1f,},
{0xba, 0x1e,},
{0xbb, 0x1d,},
{0xbc, 0x1c,},
{0xbd, 0x1b,},
       
{0xc0, 0x1a,},
{0xc3, 0x48,},
{0xc4, 0x48,},
       
//Page  22 AWB
{0x03, 0x22,},
{0x10, 0xe2,},
{0x11, 0x2e,},
{0x20, 0x41,},
{0x21, 0x40,},
{0x24, 0xfe,},
       
{0x30, 0x80,},
{0x31, 0x80,},
{0x38, 0x12,},
{0x39, 0x33,},
{0x40, 0xf3,},
{0x41, 0x43,},
{0x42, 0x33,},
{0x43, 0xf3,},
{0x44, 0x88,},
{0x45, 0x66,},
{0x46, 0x08,},
{0x47, 0x63,},
       
{0x80, 0x38,},
{0x81, 0x20,},
{0x82, 0x38,},
       
{0x83, 0x5a,},
{0x84, 0x24,},
{0x85, 0x55,},
{0x86, 0x24,},
       
{0x87, 0x44,},
{0x88, 0x33,},
{0x89, 0x3e,},
{0x8a, 0x34,},
       
{0x8b, 0x03,},
{0x8d, 0x22,},
{0x8e, 0x21,},
       
{0x8f, 0x63,},
{0x90, 0x62,},
{0x91, 0x5e,},
{0x92, 0x5a,},
{0x93, 0x50,},
{0x94, 0x42,},
{0x95, 0x3b,},
{0x96, 0x34,},
{0x97, 0x2d,},
{0x98, 0x2b,},
{0x99, 0x29,},
{0x9a, 0x27,},
{0x9b, 0x0b,},
{0xb4, 0xbf,},
                   
////// /////////////////////// Page 48
{0x03, 0x48,},
{0x10, 0x05,},
{0x11, 0x00,},
{0x12, 0x00,},
{0x16, 0xc4,},
{0x17, 0x00,},
{0x19, 0x00,},
{0x1a, 0x06,},
{0x1c, 0x02,},
{0x1d, 0x04,},
{0x1e, 0x07,},
{0x1f, 0x04,},
{0x20, 0x00,},
{0x21, 0xb8,},
{0x22, 0x00,},
{0x23, 0x01,},
{0x30, 0x05,},
{0x31, 0x00,},
{0x32, 0x06,},
{0x34, 0x01,},
{0x35, 0x02,},
{0x36, 0x01,},
{0x37, 0x03,},
{0x38, 0x00,},
{0x39, 0x4a,},
{0x3c, 0x00,},
{0x3d, 0xfa,},
{0x3f, 0x10,},
{0x40, 0x00,},
{0x41, 0x20,},
{0x42, 0x00,},
       
{0x03, 0x22,},
{0x10, 0xfb,},
       
{0x03, 0x20,},
{0x10, 0x9c,},
       
{0x01, 0x70,},
{0xff, 0x0f,}, //15ms
{0xff, 0x14,}, //200ms
};
//==========================================================
//  EFFECT(6)
//==========================================================
static struct msm_camera_i2c_reg_conf sr030pc50_effect_normal_regs[] = {
{0x03, 0x10,},
{0x11, 0x03,},
{0x12, 0x30,},
{0x03, 0x13,},
{0x10, 0x3b,},
{0x20, 0x02,},
};
static struct msm_camera_i2c_reg_conf sr030pc50_effect_negative_regs[] = {
{0x03, 0x10,},
{0x11, 0x03,},
{0x12, 0x38,},
{0x03, 0x13,},
{0x10, 0x3b,},
{0x20, 0x02,},
};
static struct msm_camera_i2c_reg_conf sr030pc50_effect_sepia_regs[] = {
{0x03, 0x10,},
{0x11, 0x03,},
{0x12, 0x33,},
{0x44, 0x70,},
{0x45, 0x98,},
{0x03, 0x13,},
{0x10, 0x3b,},
{0x20, 0x02,},	
};
static struct msm_camera_i2c_reg_conf sr030pc50_effect_mono_regs[] = {
{0x03, 0x10,},
{0x11, 0x03,},
{0x12, 0x33,},
{0x44, 0x80,},
{0x45, 0x80,},
{0x03, 0x13,},
{0x10, 0x3b,},
{0x20, 0x02,},	
};


//==========================================================
// WB(5) -START
//==========================================================


static struct msm_camera_i2c_reg_conf sr030pc50_wb_auto_regs[] = {
{0x03, 0x22,},
{0x10, 0xe2,},
{0x11, 0x2e,},
{0x80, 0x3d,}, //3a //3c
{0x81, 0x20,},
{0x82, 0x40,},
{0x83, 0x5a,}, //RMAX
{0x84, 0x20,}, //(0216_kjh20>>23) RMIN
{0x85, 0x56,}, //(0216_kjh5c>>5a) BMAX //51
{0x86, 0x24,}, //BMIN //20
{0x10, 0xfb,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_wb_daylight_regs[] = {
{0x03, 0x22,}, //MWB Sunny
{0x10, 0x7b,},
{0x11, 0x26,},
{0x80, 0x3f,}, //52 R Gain
{0x81, 0x20,}, //G Gain
{0x82, 0x30,}, //B Gain
{0x83, 0x3a,}, //R Max //41
{0x84, 0x3a,}, //R Min
{0x85, 0x38,}, //B Max
{0x86, 0x2a,}, //B Min //2f
{0x10, 0xfb,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_wb_cloudy_regs[] = {
{0x03, 0x22,}, //MWB Cloudy
{0x10, 0x7b,},
{0x11, 0x26,},
{0x80, 0x4f,}, //R Gain
{0x81, 0x20,}, //G Gain
{0x82, 0x25,}, //B Gain
{0x83, 0x53,}, //R Max
{0x84, 0x48,}, //R Min
{0x85, 0x35,}, //B Max
{0x86, 0x2b,}, //B Min
{0x10, 0xfb,},
};
static struct msm_camera_i2c_reg_conf sr030pc50_wb_incandescent_regs[] = {
{0x03, 0x22,},
{0x10, 0x7b,},
{0x11, 0x26,},
{0x80, 0x20,},
{0x81, 0x20,},
{0x82, 0x57,},
{0x83, 0x21,},
{0x84, 0x1d,},
{0x85, 0x59,},
{0x86, 0x56,},
{0x10, 0xfb,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_wb_fluorescent_regs[] = {
{0x03, 0x22,},
{0x10, 0x7b,},
{0x11, 0x26,},
{0x80, 0x42,},
{0x81, 0x20,},
{0x82, 0x51,},
{0x83, 0x4a,},
{0x84, 0x3a,},
{0x85, 0x55,},
{0x86, 0x45,},
{0x10, 0xfb,},
};

//==========================================================
// WB(5)  --END
//==========================================================


//==========================================================
// BRIGHTNES(9) - START
//==========================================================

static struct msm_camera_i2c_reg_conf sr030pc50_ev_minus_4_regs[] = {
{0x03, 0x10,},
{0x40, 0xD0,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_ev_minus_3_regs[] = {
{0x03, 0x10,},
{0x40, 0xB0,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_ev_minus_2_regs[] = {
{0x03, 0x10,},
{0x40, 0xA0,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_ev_minus_1_regs[] = {
{0x03, 0x10,},
{0x40, 0x90,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_ev_default_regs[] = {
 {0x03, 0x10,},
 {0x40, 0x80,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_ev_plus_1_regs[] = {
{0x03, 0x10,},
{0x40, 0x10,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_ev_plus_2_regs[] = {
{0x03, 0x10,},
{0x40, 0x20,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_ev_plus_3_regs[] = {
{0x03, 0x10,},
{0x40, 0x30,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_ev_plus_4_regs[] = {
{0x03, 0x10,},
{0x40, 0x50,},
};
// ==========================================================
// BRIGHTNES(9) - END
//==========================================================

static struct msm_camera_i2c_reg_conf sr030pc50_fps_auto_normal_regs[] = {
{0x03, 0x00,},
{0x01, 0x71,}, //sleep
        
{0x03, 0x00,},
{0x11, 0x90,}, //fixed fps disable
{0x42, 0x00,}, //Vblank 154
{0x43, 0x9a,}, 
       
{0x90, 0x0c,}, //BLC_TIME_TH_ON
{0x91, 0x0c,}, //BLC_TIME_TH_OFF 
{0x92, 0x90,}, //BLC_AG_TH_ON
{0x93, 0x88,}, //BLC_AG_TH_OFF
       
{0x03, 0x20,},
{0x10, 0x1c,}, //ae off
{0x2a, 0xf0,}, //antibanding
{0x2b, 0xf4,},
{0x30, 0xf8,},
       
{0x88, 0x03,}, //EXP Max(120Hz) 8.00 fps 
{0x89, 0x17,}, 
{0x8a, 0x04,}, 
       
{0xa0, 0x02,}, //EXP Max(100Hz) 8.33 fps 
{0xa1, 0xf7,}, 
{0xa2, 0x60,}, 
       
{0xb2, 0x98,},
       
{0x03, 0x20,},                                                           
{0x10, 0x9c,}, //ae on
       
{0x03, 0x00,},
{0x01, 0x70,},
       
{0xff, 0x28,}, //delay 400ms
};     

static struct msm_camera_i2c_reg_conf sr030pc50_fps_auto_dark_regs[] = {
{0x03, 0x00,},
{0x01, 0x71,}, //sleep
        
{0x03, 0x00,},
{0x11, 0x90,}, //fixed fps disable
{0x42, 0x00,}, //Vblank 154
{0x43, 0x9a,}, 
       
{0x90, 0x0c,}, //BLC_TIME_TH_ON
{0x91, 0x0c,}, //BLC_TIME_TH_OFF 
{0x92, 0x90,}, //BLC_AG_TH_ON
{0x93, 0x88,}, //BLC_AG_TH_OFF
       
{0x03, 0x20,},
{0x10, 0x1c,}, //ae off
{0x2a, 0xf0,}, //antibanding
{0x2b, 0xf4,},
{0x30, 0xf8,},
       
{0x83, 0x02,}, //exp normal 8.33fps
{0x84, 0xf7,},
{0x85, 0x60,},
       
{0x88, 0x03,}, //EXP Max(120Hz) 8.00 fps 
{0x89, 0x17,}, 
{0x8a, 0x04,}, 
       
{0xa0, 0x02,}, //EXP Max(100Hz) 8.33 fps 
{0xa1, 0xf7,}, 
{0xa2, 0x60,}, 
       
{0xb2, 0x98,},
       
{0x03, 0x20,},                                                           
{0x10, 0x9c,}, //ae on
       
{0x03, 0x00,},
{0x01, 0x70,},
       
{0xff, 0x50,}, //delay 800ms
};

static struct msm_camera_i2c_reg_conf sr030pc50_fps_5_regs[] = {
{0x03, 0x00,},
{0x01, 0x71,},
{0x11, 0x90,},
{0x40, 0x00,}, //Hblank 144
{0x41, 0x90,}, 
{0x42, 0x00,}, //Vblank 20
{0x43, 0x14,}, 
       
{0x90, 0x14,}, //BLC_TIME_TH_ON
{0x91, 0x14,}, //BLC_TIME_TH_OFF 
{0x92, 0x90,}, //BLC_AG_TH_ON
{0x93, 0x88,}, //BLC_AG_TH_OFF
       
{0x03, 0x20,}, //Page 20
{0x10, 0x1c,},
       
{0x2a, 0x90,},
{0x2b, 0xf5,},
{0x30, 0xf8,},
       
{0x83, 0x00,}, //EXP Normal 33.33 fps 
{0x84, 0xbd,}, 
{0x85, 0xd8,}, 
       
{0x88, 0x03,}, //EXP Max(120Hz) 6.32 fps 
{0x89, 0xf4,}, 
{0x8a, 0x80,}, 
       
{0xa0, 0x03,}, //EXP Max(100Hz) 6.25 fps 
{0xa1, 0xf4,}, 
{0xa2, 0x80,}, 
       
{0x91, 0x04,}, //EXP Fix 5.00 fps
{0x92, 0xf5,}, 
{0x93, 0x88,}, 
       
{0x10, 0x9c,},
{0x03, 0x00,},
{0x11, 0x94,},
{0x01, 0x70,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_fps_7_regs[] = {
{0x03, 0x00,},
{0x01, 0x71,},
{0x11, 0x90,},
{0x40, 0x00,}, //Hblank 144
{0x41, 0x90,}, 
{0x42, 0x00,}, //Vblank 20
{0x43, 0x14,},
       
{0x90, 0x0e,}, //BLC_TIME_TH_ON
{0x91, 0x0e,}, //BLC_TIME_TH_OFF 
{0x92, 0x90,}, //BLC_AG_TH_ON
{0x93, 0x88,}, //BLC_AG_TH_OFF
       
{0x03, 0x20,}, //Page 20
{0x10, 0x1c,},
       
{0x2a, 0x90,},
{0x2b, 0xf5,},
{0x30, 0xf8,},
       
{0x83, 0x00,}, //EXP Normal 33.33 fps 
{0x84, 0xbd,}, 
{0x85, 0xd8,}, 
       
{0x88, 0x03,}, //EXP Max(120Hz) 7.50 fps 
{0x89, 0x75,}, 
{0x8a, 0xf0,}, 
       
{0xa0, 0x03,}, //EXP Max(100Hz) 7.14 fps 
{0xa1, 0x75,}, 
{0xa2, 0xf0,}, 
       
       
{0x91, 0x03,}, //EXP Fix 7.00 fps
{0x92, 0x8a,}, 
{0x93, 0xa4,}, 
       
{0x10, 0x9c,},
{0x03, 0x00,},
{0x11, 0x94,},
{0x01, 0x70,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_fps_10_regs[] = {
{0x03, 0x00,},
{0x01, 0x71,},
{0x11, 0x90,},
{0x40, 0x00,}, //Hblank 144
{0x41, 0x90,}, 
{0x42, 0x00,}, //Vblank 20
{0x43, 0x14,},
       
{0x90, 0x0a,}, //BLC_TIME_TH_ON
{0x91, 0x0a,}, //BLC_TIME_TH_OFF 
{0x92, 0x90,}, //BLC_AG_TH_ON
{0x93, 0x88,}, //BLC_AG_TH_OFF
       
{0x03, 0x20,}, //Page 20
{0x10, 0x1c,},
       
{0x2a, 0x90,},
{0x2b, 0xf5,},
{0x30, 0xf8,},
       
{0x83, 0x00,}, //EXP Normal 33.33 fps 
{0x84, 0xbd,}, 
{0x85, 0xd8,}, 
       
{0x88, 0x02,}, //EXP Max(120Hz) 12.00 fps 
{0x89, 0x39,}, 
{0x8a, 0x88,}, 
       
{0xa0, 0x02,}, //EXP Max(100Hz) 11.11 fps 
{0xa1, 0x39,}, 
{0xa2, 0x88,}, 
       
{0x91, 0x02,}, //EXP Fix 10.00 fps
{0x92, 0x7a,}, 
{0x93, 0xc4,}, 
       
{0x10, 0x9c,},
{0x03, 0x00,},
{0x11, 0x94,},
{0x01, 0x70,},
};

static struct msm_camera_i2c_reg_conf sr030pc50_fps_15_regs[] = {
{0x03, 0x00,},
{0x01, 0x71,},
{0x11, 0x90,},
{0x40, 0x00,}, //Hblank 144
{0x41, 0x90,}, 
{0x42, 0x00,}, //Vblank 20
{0x43, 0x14,}, 
       
{0x90, 0x06,}, //BLC_TIME_TH_ON
{0x91, 0x06,}, //BLC_TIME_TH_OFF 
{0x92, 0x90,}, //BLC_AG_TH_ON
{0x93, 0x88,}, //BLC_AG_TH_OFF
       
{0x03, 0x20,}, //Page 20
{0x10, 0x1c,},
       
{0x2a, 0x90,},
{0x2b, 0xf5,},
{0x30, 0xf8,},
       
{0x83, 0x00,}, //EXP Normal 33.33 fps 
{0x84, 0xbd,}, 
{0x85, 0xd8,}, 
       
{0x88, 0x01,}, //EXP Max(120Hz) 17.14 fps 
{0x89, 0x7b,}, 
{0x8a, 0xb0,}, 
       
{0xa0, 0x01,}, //EXP Max(100Hz) 16.67 fps 
{0xa1, 0x7b,}, 
{0xa2, 0xb0,}, 
       
{0x91, 0x01,}, //EXP Fix 15.00 fps
{0x92, 0xa7,}, 
{0x93, 0x0c,}, 
       
{0x10, 0x9c,},
{0x03, 0x00,},
{0x11, 0x94,},
{0x01, 0x70,},
{0xff, 0x28,}, //delay 400ms
};

static struct msm_camera_i2c_reg_conf sr030pc50_fps_20_regs[] = {
{0x03, 0x00,},
{0x01, 0x71,},
{0x11, 0x90,},
{0x40, 0x00,}, //Hblank 144
{0x41, 0x90,}, 
{0x42, 0x00,}, //Vblank 20
{0x43, 0x14,}, 
       
{0x90, 0x05,}, //BLC_TIME_TH_ON
{0x91, 0x05,}, //BLC_TIME_TH_OFF 
{0x92, 0x90,}, //BLC_AG_TH_ON
{0x93, 0x88,}, //BLC_AG_TH_OFF
       
       
{0x03, 0x20,}, //Page 20
{0x10, 0x1c,},
       
{0x2a, 0x90,},
{0x2b, 0xf5,},
{0x30, 0xf8,},
       
{0x83, 0x00,}, //EXP Normal 33.33 fps 
{0x84, 0xbd,}, 
{0x85, 0xd8,}, 
       
{0x88, 0x00,}, //EXP Max(120Hz) 30.00 fps 
{0x89, 0xfd,}, 
{0x8a, 0x20,}, 
       
{0xa0, 0x00,}, //EXP Max(100Hz) 25.00 fps 
{0xa1, 0xfd,}, 
{0xa2, 0x20,}, 
       
{0x91, 0x01,}, //EXP Fix 20.00 fps
{0x92, 0x3d,}, 
{0x93, 0x30,}, 
       
{0x10, 0x9c,},
{0x03, 0x00,},
{0x11, 0x94,},
{0x01, 0x70,},
{0xff, 0x28,}, //delay 400ms
};

static struct msm_camera_i2c_reg_conf sr030pc50_fps_25_regs[] = {
{0x03, 0x00,},
{0x01, 0x71,},
{0x11, 0x90,},
{0x40, 0x00,}, //Hblank 144
{0x41, 0x90,}, 
{0x42, 0x00,}, //Vblank 20
{0x43, 0x14,}, 
       
{0x90, 0x04,}, //BLC_TIME_TH_ON
{0x91, 0x04,}, //BLC_TIME_TH_OFF 
{0x92, 0x90,}, //BLC_AG_TH_ON
{0x93, 0x88,}, //BLC_AG_TH_OFF
       
{0x03, 0x20,}, //Page 20
{0x10, 0x1c,},
       
{0x2a, 0x90,},
{0x2b, 0xf5,},
{0x30, 0xf8,},
       
{0x83, 0x00,}, //EXP Normal 33.33 fps 
{0x84, 0xbd,}, 
{0x85, 0xd8,}, 
       
{0x88, 0x00,}, //EXP Max(120Hz) 40.00 fps 
{0x89, 0xbd,}, 
{0x8a, 0xd8,}, 
       
{0xa0, 0x00,}, //EXP Max(100Hz) 33.33 fps 
{0xa1, 0xbd,}, 
{0xa2, 0xd8,}, 
       
       
{0x91, 0x00,}, //EXP Fix 25.00 fps
{0x92, 0xfd,}, 
{0x93, 0xe8,}, 
       
{0x10, 0x9c,},
{0x03, 0x00,},
{0x11, 0x94,},
{0x01, 0x70,},
{0xff, 0x28,}, //delay 400ms
};

static struct msm_camera_i2c_reg_conf sr030pc50_fps_30_regs[] = {
{0x03, 0x00,},
{0x01, 0x71,},
{0x11, 0x90,},
{0x40, 0x00,}, //Hblank 144
{0x41, 0x90,}, 
{0x42, 0x00,}, //Vblank 20
{0x43, 0x14,}, 
       
{0x90, 0x04,}, //BLC_TIME_TH_ON
{0x91, 0x04,}, //BLC_TIME_TH_OFF 
{0x92, 0x90,}, //BLC_AG_TH_ON
{0x93, 0x88,}, //BLC_AG_TH_OFF
       
{0x03, 0x20,}, //Page 20
{0x10, 0x1c,},
       
{0x2a, 0x90,},
{0x2b, 0xf5,},
{0x30, 0xf8,},
       
{0x83, 0x00,}, //EXP Normal 33.33 fps 
{0x84, 0xbd,}, 
{0x85, 0xd8,}, 
       
{0x88, 0x00,}, //EXP Max(120Hz) 40.00 fps 
{0x89, 0xbd,}, 
{0x8a, 0xd8,}, 
       
{0xa0, 0x00,}, //EXP Max(100Hz) 33.33 fps 
{0xa1, 0xbd,}, 
{0xa2, 0xd8,},
       
{0x91, 0x00,}, //EXP Fix 30.04 fps
{0x92, 0xd3,}, 
{0x93, 0x54,}, 
       
{0x10, 0x9c,},
{0x03, 0x00,},
{0x11, 0x94,},
{0x01, 0x70,},
{0xff, 0x28,}, //delay 400ms
};

#endif
