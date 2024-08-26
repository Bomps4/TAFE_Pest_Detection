# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# compile ASM with /usr/lib/gap_riscv_toolchain/bin/riscv32-unknown-elf-gcc
# compile C with /usr/lib/gap_riscv_toolchain/bin/riscv32-unknown-elf-gcc
ASM_DEFINES = -DCONFIG_DRIVER_FLASH_PARTITION_V2=1 -DUSE_FLASH_PARTITION_V2=1

ASM_INCLUDES = -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/os/freeRTOS/vendors/gwt/gap9/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/os/freeRTOS/vendors/gwt/gap9/config -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/os/freeRTOS/vendors/gwt/gap9/pmsis/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/os/freeRTOS/vendors/gwt/gap9/pmsis/include/cores/TARGET_RISCV_32 -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/os/freeRTOS/vendors/gwt/gap9/pmsis/include/pmsis/implem -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/os/freeRTOS/vendors/gwt/pmsis/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/os/freeRTOS/vendors/gwt/libs/printf -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/api/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/api/include/pmsis/chips -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/api/include/pmsis/chips/gap9 -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/os/freeRTOS/freertos_kernel/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/os/freeRTOS/freertos_kernel/portable/GCC/RI5CY-GAP9 -I/home/bomps/Scrivania/workfile/test_run_MobileNetSSDLite/test_run_8_bits_ne16_not_active/build/devicetree/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/bsp/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/archi/chips/gap9_v2/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/os/freeRTOS/vendors/gwt/libs/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/pmsis_archi -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/maestro/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/i2s/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/efuse/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/fll/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/cluster/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/udma_core/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/timer/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/fc_event/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/pad/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/gpio/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/ffc/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/perf/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/watchdog/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/i2c/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/i3c/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/udma_datamove/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/spim/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/udma_timeout/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/udma_timestamp/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/dmacpy/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/pwm/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/rtc/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/xip/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/udma_hyperbus/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/udma_octospi/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/udma_aes/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/udma_aes_dual_core/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/udma_cpi/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/udma_csi2/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/udma_uart/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/udma_fifo/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/udma_sdio/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/quiddikey/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/os/freeRTOS/vendors/gwt/pmsis/rtos/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/os/freeRTOS/vendors/gwt/pmsis/rtos

ASM_FLAGS =  -x assembler-with-cpp -DASSEMBLY_LANGUAGE -Os -DPREEMPTION=1 -DCHIP_FAMILY=9 -D__GAP9__ -DCHIP_VERSION=2 -D__AUTOTILER_APP__ -I/home/bomps/Scrivania/workfile/gap_sdk_private/tools/autotiler_v3/Autotiler -I/home/bomps/Scrivania/workfile/gap_sdk_private/tools/autotiler_v3/Emulation -DF16_DSP_BFLOAT -O3 -DCONFIG_FREERTOS_USE_TRACE_FACILITIES=0 -DconfigMAX_PRIORITIES=3 -D__FREERTOS__ -D__USE_TCDM_MALLOC__=1 -DPMSIS_DRIVERS=1 -D__FC_MALLOC_NATIVE__=0 -D__L2_MALLOC_NATIVE__=0 -D__PMSIS_L2_MALLOC_NATIVE__=0 -D__riscv__ -D__GAP__ -D__RISCV_ARCH_GAP__=1 -DFEATURE_CLUSTER=1 -DGAP_SDK_VERSION=release-v5.16.0 -D__PLATFORM_BOARD__ -D__PLATFORM__=ARCHI_PLATFORM_BOARD -DRTOS_TICK_RATE_HZ=100 -DPI_CL_CC_STACK_SIZE=4096 -DPI_CL_SLAVE_STACK_SIZE=1024 -DPMSIS_TASK_EVENT_KERNEL_SIZE=256 -D__SEMIHOSTING__ -DPRINTF_SEMIHOST -DPRINTF_DISABLE_SUPPORT_FLOAT -DPRINTF_DISABLE_SUPPORT_EXPONENTIAL -DFC_APP_MAIN_STACK_SIZE=2048 -DPI_LOG_DEFAULT_LEVEL=PI_LOG_NONE -DCONFIG_FLL_MAXDCO_FREQ=900000000 -DCONFIG_FREQUENCY_PERIPH=160000000 -DCONFIG_FREQUENCY_FC=50000000 -DCONFIG_FREQUENCY_CLUSTER=50000000 -DCONFIG_FREQUENCY_SFU=50000000 -DCONFIG_FREQUENCY_FPGA=50000000 -DCONFIG_FAST_OSC_FREQUENCY=24576063 -DCONFIG_DEVICE_TREE -D__GAP_BOARD_GAP9_V2_VIRTUAL__=1 -DCONFIG_MRAM=1 -DCONFIG_HYPERFLASH=1 -D__GAP_DRIVER_HYPERFLASH_DEFAULT__=1 -D__GAP_DRIVER_HOSTFS__=1 -D__GAP_DRIVER_READFS__=1 -DCONFIG_DRIVER_FLASH_PARTITION_V2=1 -DCONFIG_HYPERRAM=1 -D__GAP_DRIVER_HYPERRAM_DEFAULT__=1 -D__GAP10_ARCHI__=1

C_DEFINES = -DCONFIG_DRIVER_FLASH_PARTITION_V2=1 -DUSE_FLASH_PARTITION_V2=1

C_INCLUDES = -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/os/freeRTOS/vendors/gwt/gap9/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/os/freeRTOS/vendors/gwt/gap9/config -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/os/freeRTOS/vendors/gwt/gap9/pmsis/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/os/freeRTOS/vendors/gwt/gap9/pmsis/include/cores/TARGET_RISCV_32 -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/os/freeRTOS/vendors/gwt/gap9/pmsis/include/pmsis/implem -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/os/freeRTOS/vendors/gwt/pmsis/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/os/freeRTOS/vendors/gwt/libs/printf -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/api/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/api/include/pmsis/chips -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/api/include/pmsis/chips/gap9 -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/os/freeRTOS/freertos_kernel/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/os/freeRTOS/freertos_kernel/portable/GCC/RI5CY-GAP9 -I/home/bomps/Scrivania/workfile/test_run_MobileNetSSDLite/test_run_8_bits_ne16_not_active/build/devicetree/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/bsp/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/archi/chips/gap9_v2/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/os/freeRTOS/vendors/gwt/libs/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/pmsis_archi -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/maestro/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/i2s/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/efuse/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/fll/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/cluster/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/udma_core/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/timer/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/fc_event/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/pad/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/gpio/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/ffc/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/perf/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/watchdog/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/i2c/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/i3c/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/udma_datamove/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/spim/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/udma_timeout/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/udma_timestamp/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/dmacpy/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/pwm/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/rtc/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/xip/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/udma_hyperbus/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/udma_octospi/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/udma_aes/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/udma_aes_dual_core/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/udma_cpi/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/udma_csi2/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/udma_uart/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/udma_fifo/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/udma_sdio/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/implem/chips/gap9/quiddikey/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/os/freeRTOS/vendors/gwt/pmsis/rtos/include -I/home/bomps/Scrivania/workfile/gap_sdk_private/rtos/pmsis/os/freeRTOS/vendors/gwt/pmsis/rtos

C_FLAGS =  -march=rv32imcxgap9 -mPE=8 -mFC=1 -mint64  -fcommon -fno-jump-tables -fno-tree-loop-distribute-patterns -fno-delete-null-pointer-checks -fomit-frame-pointer -Os -fmessage-length=0 -fno-exceptions -ffunction-sections -fdata-sections -funsigned-char -Wall -Wextra -Werror -Wno-unused-parameter -Wno-unused-function -Wno-unused-variable -Wno-unused-but-set-variable -Wno-implicit-fallthrough  -Wno-discarded-qualifiers -DPREEMPTION=1 -DCHIP_FAMILY=9 -D__GAP9__ -DCHIP_VERSION=2 -D__AUTOTILER_APP__ -I/home/bomps/Scrivania/workfile/gap_sdk_private/tools/autotiler_v3/Autotiler -I/home/bomps/Scrivania/workfile/gap_sdk_private/tools/autotiler_v3/Emulation -DF16_DSP_BFLOAT -O3 -DCONFIG_FREERTOS_USE_TRACE_FACILITIES=0 -DconfigMAX_PRIORITIES=3 -D__FREERTOS__ -D__USE_TCDM_MALLOC__=1 -DPMSIS_DRIVERS=1 -D__FC_MALLOC_NATIVE__=0 -D__L2_MALLOC_NATIVE__=0 -D__PMSIS_L2_MALLOC_NATIVE__=0 -D__riscv__ -D__GAP__ -D__RISCV_ARCH_GAP__=1 -DFEATURE_CLUSTER=1 -DGAP_SDK_VERSION=release-v5.16.0 -D__PLATFORM_BOARD__ -D__PLATFORM__=ARCHI_PLATFORM_BOARD -DRTOS_TICK_RATE_HZ=100 -DPI_CL_CC_STACK_SIZE=4096 -DPI_CL_SLAVE_STACK_SIZE=1024 -DPMSIS_TASK_EVENT_KERNEL_SIZE=256 -D__SEMIHOSTING__ -DPRINTF_SEMIHOST -DPRINTF_DISABLE_SUPPORT_FLOAT -DPRINTF_DISABLE_SUPPORT_EXPONENTIAL -DFC_APP_MAIN_STACK_SIZE=2048 -DPI_LOG_DEFAULT_LEVEL=PI_LOG_NONE -DCONFIG_FLL_MAXDCO_FREQ=900000000 -DCONFIG_FREQUENCY_PERIPH=160000000 -DCONFIG_FREQUENCY_FC=50000000 -DCONFIG_FREQUENCY_CLUSTER=50000000 -DCONFIG_FREQUENCY_SFU=50000000 -DCONFIG_FREQUENCY_FPGA=50000000 -DCONFIG_FAST_OSC_FREQUENCY=24576063 -DCONFIG_DEVICE_TREE -D__GAP_BOARD_GAP9_V2_VIRTUAL__=1 -DCONFIG_MRAM=1 -DCONFIG_HYPERFLASH=1 -D__GAP_DRIVER_HYPERFLASH_DEFAULT__=1 -D__GAP_DRIVER_HOSTFS__=1 -D__GAP_DRIVER_READFS__=1 -DCONFIG_DRIVER_FLASH_PARTITION_V2=1 -DCONFIG_HYPERRAM=1 -D__GAP_DRIVER_HYPERRAM_DEFAULT__=1 -D__GAP10_ARCHI__=1 -std=gnu99

