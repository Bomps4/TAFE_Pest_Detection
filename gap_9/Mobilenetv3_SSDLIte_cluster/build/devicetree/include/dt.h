// ############################################################################# 
// Device tree content
// Generation time : 31/01/2024 09:55:10 
//
// THIS IS A GENERATED FILE, DO NOT EDIT !
//
// This file is the static output of the device tree. It aims to define all 
// available features from the board you are using. It is generated from the 
// device tree generator python script : dtGenerator.py.
// #############################################################################

#pragma once

#include "pmsis_types.h"
#include "pmsis/pmsis_types.h"
#include "pmsis/errno.h"

// BSP includes ****************************************************************

#include "bsp/boards/bsp_gap9_v2_virtual.h"

// hyperram ********************************************************************

#include "bsp/ram/hyperram.h"

#define DT_HYPERRAM_RESERVE_ADDR_0   ( 1 )
#define DT_HYPERRAM_BAUDRATE         ( 0 )
#define DT_HYPERRAM_RAM_SIZE         (8<<20)
#define DT_HYPERRAM_RAM_START        ( 0 )
#define DT_HYPERRAM_XIP_EN           ( 0 )
#define DT_HYPERRAM_SKIP_PADS_CONFIG ( 0 )
#define DT_HYPERRAM_HYPER_CS         ( 0 )
#define DT_HYPERRAM_HYPER_ITF        ( 0 )

extern pi_device_t hyperram_dev;

// hyperflash ******************************************************************

#include "bsp/flash/hyperflash.h"

#define DT_HYPERFLASH_XIP_EN           ( 0 )
#define DT_HYPERFLASH_BAUDRATE         ( 0 )
#define DT_HYPERFLASH_SKIP_PADS_CONFIG ( 0 )
#define DT_HYPERFLASH_HYPER_CS         ( 1 )
#define DT_HYPERFLASH_HYPER_ITF        ( 0 )

extern pi_device_t hyperflash_dev;

// mram ************************************************************************

#include "bsp/flash/mram.h"

#define DT_MRAM_ITF      ( 0 )
#define DT_MRAM_BAUDRATE ( 34000000 )
#define DT_MRAM_XIP_EN   ( 0 )

extern pi_device_t mram_dev;

// Devices pointers ************************************************************

#define DEVICE_PTR_RAM_HYPERRAM &hyperram_dev
#define DEVICE_PTR_FLASH_HYPERFLASH &hyperflash_dev
#define DEVICE_PTR_FLASH_MRAM &mram_dev

#define DEVICE_PTR_RAM_DEFAULT DEVICE_PTR_RAM_HYPERRAM
#define DEVICE_PTR_FLASH_DEFAULT DEVICE_PTR_FLASH_HYPERFLASH

// Devices enum ****************************************************************

typedef enum {
	PI_RAM_HYPERRAM,
	PI_RAM_DEFAULT,
	PI_FLASH_HYPERFLASH,
	PI_FLASH_DEFAULT,
	PI_FLASH_MRAM,
} pi_device_e;


// Devices FPV2 register *******************************************************

#if defined(CONFIG_DRIVER_FLASH_PARTITION_V2)
pi_err_t pi_register_fpv2_flashs(void);

#endif
// Devices API *****************************************************************

pi_err_t pi_open(pi_device_e device_enum, pi_device_t** device_ptr);

pi_err_t pi_close(pi_device_e device_enum);

// Padfun registers ************************************************************

#define PADFUN0_INIT ( 0x54000000 )
#define PADFUN1_INIT ( 0x55555555 )
#define PADFUN2_INIT ( 0x55555555 )
#define PADFUN3_INIT ( 0x55555555 )
#define PADFUN4_INIT ( 0x55555555 )
#define PADFUN5_INIT ( 0x55555555 )

// Reprog registers ************************************************************

#define REPROG0_INIT ( 0x040C2040 )
#define REPROG1_INIT ( 0x0C289206 )
#define REPROG2_INIT ( 0x144D240E )
#define REPROG3_INIT ( 0x2179B616 )

// Pads define *****************************************************************

#define PAD_HYPERRAM_RWDS   ( PI_PAD_012 )
#define PAD_HYPERRAM_CSN1   ( PI_PAD_011 )
#define PAD_HYPERRAM_SN0    ( PI_PAD_010 )
#define PAD_HYPERRAM_DQ7    ( PI_PAD_009 )
#define PAD_HYPERRAM_DQ6    ( PI_PAD_008 )
#define PAD_HYPERRAM_DQ5    ( PI_PAD_007 )
#define PAD_HYPERRAM_DQ4    ( PI_PAD_006 )
#define PAD_HYPERRAM_DQ3    ( PI_PAD_005 )
#define PAD_HYPERRAM_DQ2    ( PI_PAD_004 )
#define PAD_HYPERRAM_DQ1    ( PI_PAD_003 )
#define PAD_HYPERRAM_DQ0    ( PI_PAD_002 )
#define PAD_HYPERRAM_CK     ( PI_PAD_001 )
#define PAD_HYPERRAM_CKN    ( PI_PAD_000 )
#define PAD_HYPERFLASH_RWDS ( PI_PAD_012 )
#define PAD_HYPERFLASH_CSN1 ( PI_PAD_011 )
#define PAD_HYPERFLASH_SN0  ( PI_PAD_010 )
#define PAD_HYPERFLASH_DQ7  ( PI_PAD_009 )
#define PAD_HYPERFLASH_DQ6  ( PI_PAD_008 )
#define PAD_HYPERFLASH_DQ5  ( PI_PAD_007 )
#define PAD_HYPERFLASH_DQ4  ( PI_PAD_006 )
#define PAD_HYPERFLASH_DQ3  ( PI_PAD_005 )
#define PAD_HYPERFLASH_DQ2  ( PI_PAD_004 )
#define PAD_HYPERFLASH_DQ1  ( PI_PAD_003 )
#define PAD_HYPERFLASH_DQ0  ( PI_PAD_002 )
#define PAD_HYPERFLASH_CK   ( PI_PAD_001 )
#define PAD_HYPERFLASH_CKN  ( PI_PAD_000 )

