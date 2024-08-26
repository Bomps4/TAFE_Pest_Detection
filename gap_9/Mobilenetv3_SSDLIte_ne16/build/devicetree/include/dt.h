// ############################################################################# 
// Device tree content
// Generation time : 28/11/2023 18:09:14 
//
// THIS IS A GENERATED FILE, DO NOT EDIT !
//
// This file is the static output of the device tree. It aims to define all 
// available features from the board you are using. It is generated from the 
// device tree generator python script : dtGenerator.py.
// #############################################################################

#pragma once

#include "pmsis/pmsis_types.h"
#include "pmsis/errno.h"

// BSP includes ****************************************************************

#include "bsp/boards/bsp_gap9mod_v1_0_b.h"
#include "bsp/boards/bsp_gap9evk_v1_3.h"

// aps256xxn *******************************************************************

#include "bsp/ram/aps256xxn.h"

#define DT_APS256XXN_BAUDRATE  ( 0 )
#define DT_APS256XXN_RAM_SIZE  ( 33554432 )
#define DT_APS256XXN_RAM_START ( 0 )
#define DT_APS256XXN_SPI_CS    ( 1 )
#define DT_APS256XXN_SPI_ITF   ( 0 )

extern pi_device_t aps256xxn_dev;

// mx25u51245g *****************************************************************

#include "bsp/flash/mx25u51245g.h"

#define DT_MX25U51245G_BAUDRATE    ( 0 )
#define DT_MX25U51245G_XIP_EN      ( 0 )
#define DT_MX25U51245G_SECTOR_SIZE ( 4096 )
#define DT_MX25U51245G_SIZE        ( 8388608 )
#define DT_MX25U51245G_SPI_CS      ( 0 )
#define DT_MX25U51245G_SPI_ITF     ( 0 )

extern pi_device_t mx25u51245g_dev;

// Devices pointers ************************************************************

#define DEVICE_PTR_RAM_APS256XXN &aps256xxn_dev
#define DEVICE_PTR_FLASH_MX25U51245G &mx25u51245g_dev

#define DEVICE_PTR_RAM_DEFAULT DEVICE_PTR_RAM_APS256XXN
#define DEVICE_PTR_FLASH_DEFAULT DEVICE_PTR_FLASH_MX25U51245G

// Devices enum ****************************************************************

typedef enum {
	PI_RAM_APS256XXN,
	PI_RAM_DEFAULT,
	PI_FLASH_MX25U51245G,
	PI_FLASH_DEFAULT,
} pi_device_e;

// Devices API *****************************************************************

pi_err_t pi_open(pi_device_e device_enum, pi_device_t** device_ptr);

pi_err_t pi_close(pi_device_e device_enum);

// Pads registers **************************************************************

#define PADFUN0_INIT ( 0x54000001 )
#define PADFUN1_INIT ( 0x55555555 )
#define PADFUN2_INIT ( 0x55555555 )
#define PADFUN3_INIT ( 0x55555555 )
#define PADFUN4_INIT ( 0x55555555 )
#define PADFUN5_INIT ( 0x55555001 )

// Pads define *****************************************************************

#define PAD_APS256XXN_RWDS ( PI_PAD_012 )
#define PAD_APS256XXN_CSN1 ( PI_PAD_011 )
#define PAD_APS256XXN_SN0  ( PI_PAD_010 )
#define PAD_APS256XXN_DQ7  ( PI_PAD_009 )
#define PAD_APS256XXN_DQ6  ( PI_PAD_008 )
#define PAD_APS256XXN_DQ5  ( PI_PAD_007 )
#define PAD_APS256XXN_DQ4  ( PI_PAD_006 )
#define PAD_APS256XXN_DQ3  ( PI_PAD_005 )
#define PAD_APS256XXN_DQ2  ( PI_PAD_004 )
#define PAD_APS256XXN_DQ1  ( PI_PAD_003 )
#define PAD_APS256XXN_DQ0  ( PI_PAD_002 )
#define PAD_APS256XXN_CK   ( PI_PAD_001 )
#define PAD_JTAG_TRST      ( PI_PAD_085 )
#define PAD_JTAG_TMS       ( PI_PAD_084 )
#define PAD_JTAG_TDO       ( PI_PAD_083 )
#define PAD_JTAG_TDI       ( PI_PAD_082 )
#define PAD_JTAG_TCK       ( PI_PAD_081 )

