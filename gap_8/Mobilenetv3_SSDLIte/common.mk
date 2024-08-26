NNTOOL=nntool
MODEL_SQ8=1
# MODEL_POW2=1
#MODEL_FP16=1
#MODEL_NE16=1


# MODEL_SUFFIX?=
# MODEL_PREFIX?=nanodet_192
# MODEL_PYTHON=python3
# MODEL_BUILD=BUILD_MODEL$(MODEL_SUFFIX)
# NNTOOL_PYTHON_SCRIPT=nntool_export.py

# MODEL_ID?=8
# ifeq ($(MODEL_ID), 0)
# TRAINED_MODEL=../models/ssd_mobv1_075_quant.tflite
# endif
# ifeq ($(MODEL_ID), 1)
# TRAINED_MODEL=../models/ssd_mobv1_quant.tflite
# endif
# ifeq ($(MODEL_ID), 2)
# TRAINED_MODEL=../models/ssd_mobv2_quant.tflite
# endif
# ifeq ($(MODEL_ID), 3)
# TRAINED_MODEL=models/SSD_tin_can_bottle.tflite
# endif
# ifeq ($(MODEL_ID), 4)
# TRAINED_MODEL=models/yolo_nano.onnx
# endif
# ifeq ($(MODEL_ID), 5)
# TRAINED_MODEL=models/nanodet.onnx
# endif
# ifeq ($(MODEL_ID), 6)
# TRAINED_MODEL=models/EfficientDet.onnx
# endif
# ifeq ($(MODEL_ID), 7)
# TRAINED_MODEL=models/dronet_pwdw_1.onnx
# endif
# ifeq ($(MODEL_ID), 8)
# TRAINED_MODEL=models/Lrelu.onnx
# endif
# ifeq ($(MODEL_ID), 9)
# TRAINED_MODEL=models/LeakyLrelu.onnx
# endif
# ifeq ($(MODEL_ID), 10)
# TRAINED_MODEL=models/EfficientDet2.onnx
# endif
# ifeq ($(MODEL_ID), 11)
# TRAINED_MODEL=models/Mobv3SSDLite.onnx
# endif
# ifeq ($(MODEL_ID), 12)
# TRAINED_MODEL=models/Mobilenet_v3SSDLite_COCO.onnx
# endif
# ifeq ($(MODEL_ID), 13)
# TRAINED_MODEL=models/nanodet_192.onnx
# endif
# ifeq ($(MODEL_ID), 14)
# TRAINED_MODEL=models/nanodet_320.onnx
# endif
# ifeq ($(MODEL_ID), 15)
# TRAINED_MODEL=models/EfficientDet_256.onnx
# endif
# ifeq ($(MODEL_ID), 16)
# TRAINED_MODEL=models/EfficientDet_384.onnx
# endif
# ifeq ($(MODEL_ID), 17)
# TRAINED_MODEL=models/yolo_nano_192.onnx
# endif
# ifeq ($(MODEL_ID), 18)
# TRAINED_MODEL=models/yolo_nano_320.onnx
# endif
# ifeq ($(MODEL_ID), 19)
# TRAINED_MODEL=models/EfficientDet_384_256.onnx
# endif
# ifeq ($(MODEL_ID), 20)
# TRAINED_MODEL=models/mobv3ft2.onnx
# endif

# MODEL_PREFIX= $(notdir $(patsubst %.onnx,%,$(TRAINED_MODEL)))
# AT_MODEL_DIR=AT_MODEL_FILES
# AT_MODEL_PATH=$(AT_MODEL_DIR)/model.c
# MODEL_EXPRESSIONS = $(AT_MODEL_DIR)/Expression_Kernels.c
# TENSORS_DIR = $(AT_MODEL_DIR)/tensors



# Memory sizes for cluster L1, SoC L2 and Flash
TARGET_L1_SIZE = 64000
TARGET_L2_SIZE = 250000
TARGET_L3_SIZE = 8000000

# Options for the memory settings: will require
# set l3_flash_device $(MODEL_L3_FLASH)
# set l3_ram_device $(MODEL_L3_RAM)
# in the nntool_script
# FLASH and RAM type
FLASH_TYPE = DEFAULT
RAM_TYPE   = DEFAULT

ifeq '$(FLASH_TYPE)' 'HYPER'
    MODEL_L3_FLASH=AT_MEM_L3_HFLASH
else ifeq '$(FLASH_TYPE)' 'MRAM'
    MODEL_L3_FLASH=AT_MEM_L3_MRAMFLASH
    READFS_FLASH = target/chip/soc/mram
else ifeq '$(FLASH_TYPE)' 'QSPI'
    MODEL_L3_FLASH=AT_MEM_L3_QSPIFLASH
    READFS_FLASH = target/board/devices/spiflash
else ifeq '$(FLASH_TYPE)' 'OSPI'
    MODEL_L3_FLASH=AT_MEM_L3_OSPIFLASH
else ifeq '$(FLASH_TYPE)' 'DEFAULT'
    MODEL_L3_FLASH=AT_MEM_L3_DEFAULTFLASH
endif

ifeq '$(RAM_TYPE)' 'HYPER'
    MODEL_L3_RAM=AT_MEM_L3_HRAM
else ifeq '$(RAM_TYPE)' 'QSPI'
    MODEL_L3_RAM=AT_MEM_L3_QSPIRAM
else ifeq '$(RAM_TYPE)' 'OSPI'
    MODEL_L3_RAM=AT_MEM_L3_OSPIRAM
else ifeq '$(RAM_TYPE)' 'DEFAULT'
    MODEL_L3_RAM=AT_MEM_L3_DEFAULTRAM
endif

ifeq '$(TARGET_CHIP_FAMILY)' 'GAP9'
    FREQ_CL?=370
    FREQ_FC?=370
    FREQ_PE?=370
else
    ifeq '$(TARGET_CHIP)' 'GAP8_V3'
    FREQ_CL?=175
    else
    FREQ_CL?=50
    endif
    FREQ_FC?=250
    FREQ_PE?=250
endif

# Cluster stack size for master core and other cores
CLUSTER_STACK_SIZE=4096
CLUSTER_SLAVE_STACK_SIZE=512

# define STD_FLOAT if float16 in use

# load math library if float expressions in use


NNTOOL_SCRIPT = nntool_script
$(info GEN ... $(CNN_GEN))
