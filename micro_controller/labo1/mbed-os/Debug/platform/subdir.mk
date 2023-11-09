################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../platform/ATCmdParser.cpp \
../platform/CThunkBase.cpp \
../platform/CallChain.cpp \
../platform/FileBase.cpp \
../platform/FileHandle.cpp \
../platform/FilePath.cpp \
../platform/FileSystemHandle.cpp \
../platform/LocalFileSystem.cpp \
../platform/Stream.cpp \
../platform/mbed_alloc_wrappers.cpp \
../platform/mbed_mem_trace.cpp \
../platform/mbed_poll.cpp \
../platform/mbed_retarget.cpp \
../platform/mbed_rtc_time.cpp \
../platform/mbed_wait_api_rtos.cpp 

C_SRCS += \
../platform/mbed_application.c \
../platform/mbed_assert.c \
../platform/mbed_board.c \
../platform/mbed_critical.c \
../platform/mbed_error.c \
../platform/mbed_error_hist.c \
../platform/mbed_interface.c \
../platform/mbed_mktime.c \
../platform/mbed_mpu_mgmt.c \
../platform/mbed_sdk_boot.c \
../platform/mbed_semihost_api.c \
../platform/mbed_sleep_manager.c \
../platform/mbed_stats.c \
../platform/mbed_wait_api_no_rtos.c 

CPP_DEPS += \
./platform/ATCmdParser.d \
./platform/CThunkBase.d \
./platform/CallChain.d \
./platform/FileBase.d \
./platform/FileHandle.d \
./platform/FilePath.d \
./platform/FileSystemHandle.d \
./platform/LocalFileSystem.d \
./platform/Stream.d \
./platform/mbed_alloc_wrappers.d \
./platform/mbed_mem_trace.d \
./platform/mbed_poll.d \
./platform/mbed_retarget.d \
./platform/mbed_rtc_time.d \
./platform/mbed_wait_api_rtos.d 

C_DEPS += \
./platform/mbed_application.d \
./platform/mbed_assert.d \
./platform/mbed_board.d \
./platform/mbed_critical.d \
./platform/mbed_error.d \
./platform/mbed_error_hist.d \
./platform/mbed_interface.d \
./platform/mbed_mktime.d \
./platform/mbed_mpu_mgmt.d \
./platform/mbed_sdk_boot.d \
./platform/mbed_semihost_api.d \
./platform/mbed_sleep_manager.d \
./platform/mbed_stats.d \
./platform/mbed_wait_api_no_rtos.d 

OBJS += \
./platform/ATCmdParser.o \
./platform/CThunkBase.o \
./platform/CallChain.o \
./platform/FileBase.o \
./platform/FileHandle.o \
./platform/FilePath.o \
./platform/FileSystemHandle.o \
./platform/LocalFileSystem.o \
./platform/Stream.o \
./platform/mbed_alloc_wrappers.o \
./platform/mbed_application.o \
./platform/mbed_assert.o \
./platform/mbed_board.o \
./platform/mbed_critical.o \
./platform/mbed_error.o \
./platform/mbed_error_hist.o \
./platform/mbed_interface.o \
./platform/mbed_mem_trace.o \
./platform/mbed_mktime.o \
./platform/mbed_mpu_mgmt.o \
./platform/mbed_poll.o \
./platform/mbed_retarget.o \
./platform/mbed_rtc_time.o \
./platform/mbed_sdk_boot.o \
./platform/mbed_semihost_api.o \
./platform/mbed_sleep_manager.o \
./platform/mbed_stats.o \
./platform/mbed_wait_api_no_rtos.o \
./platform/mbed_wait_api_rtos.o 


# Each subdirectory must supply rules for building sources it contributes
platform/%.o: ../platform/%.cpp platform/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C++ Compiler'
	arm-none-eabi-c++ -std=gnu++98 -DDEVICE_FLASH=1 -DARM_MATH_CM3 -DDEVICE_DIGITALIN=1 -DDEVICE_SLEEP=1 -DTARGET_CORTEX -DTARGET_NXP -DCOMPONENT_NSPE=1 -DDEVICE_I2CSLAVE=1 -DDEVICE_PWMOUT=1 -DDEVICE_I2C=1 -DTARGET_CORTEX_M -DTOOLCHAIN_GCC -DTARGET_LIKE_MBED -D__CMSIS_RTOS -DDEVICE_MPU=1 -DDEVICE_DEBUG_AWARENESS=1 -DTOOLCHAIN_GCC_ARM -D__CORTEX_M3 -DTARGET_LPC1768 -DDEVICE_ANALOGIN=1 -DTARGET_M3 -DCOMPONENT_PSA_SRV_EMUL=1 -DDEVICE_SPISLAVE=1 -DDEVICE_INTERRUPTIN=1 -D__MBED_CMSIS_RTOS_CM -DCOMPONENT_PSA_SRV_IMPL=1 -DTARGET_LPC176X -DTARGET_LPCTarget -D__MBED__=1 -DDEVICE_ETHERNET=1 -DDEVICE_CAN=1 -DDEVICE_EMAC=1 -DDEVICE_DIGITALOUT=1 -DMBED_BUILD_TIMESTAMP=1570193752.760802 -DDEVICE_SEMIHOST=1 -DDEVICE_STDIO_MESSAGES=1 -DDEVICE_SPI=1 -DDEVICE_SERIAL=1 -DDEVICE_LOCALFILESYSTEM=1 -DTARGET_NXP_EMAC -DTARGET_MBED_LPC1768 -DTARGET_DEBUG -DDEVICE_PORTOUT=1 -DDEVICE_RTC=1 -DTARGET_LIKE_CORTEX_M3 -DDEVICE_ANALOGOUT=1 -DTARGET_hepialight2 -DDEVICE_SERIAL_FC=1 -DDEVICE_PORTIN=1 -DDEVICE_PORTINOUT=1 -DDEVICE_USTICKER=1 -D__NEWLIB__ -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/." -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/cmsis" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/cmsis/TARGET_CORTEX_M" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/drivers" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/hal" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/hal/storage_abstraction" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/platform" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/targets/TARGET_NXP" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/targets/TARGET_NXP/TARGET_LPC176X" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/targets/TARGET_NXP/TARGET_LPC176X/TARGET_MBED_LPC1768" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/targets/TARGET_NXP/TARGET_LPC176X/device" -include"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/mbed_config.h" -O0 -fno-rtti -fmessage-length=0 -fno-exceptions -fno-builtin -ffunction-sections -fdata-sections -funsigned-char -fno-delete-null-pointer-checks -fomit-frame-pointer -g3 -Wall -Wextra -c -DMBED_DEBUG -DMBED_TRAP_ERRORS_ENABLED=1 -Wno-unused-parameter -Wno-missing-field-initializers -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m3 -mthumb -D__NEWLIB__ -fstack-usage -specs=nano.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

platform/%.o: ../platform/%.c platform/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -DDEVICE_FLASH=1 -DARM_MATH_CM3 -DDEVICE_DIGITALIN=1 -DDEVICE_SLEEP=1 -DTARGET_CORTEX -DTARGET_NXP -DCOMPONENT_NSPE=1 -DDEVICE_I2CSLAVE=1 -DDEVICE_PWMOUT=1 -DDEVICE_I2C=1 -DTARGET_CORTEX_M -DTOOLCHAIN_GCC -DTARGET_LIKE_MBED -D__CMSIS_RTOS -DDEVICE_MPU=1 -DDEVICE_DEBUG_AWARENESS=1 -DTOOLCHAIN_GCC_ARM -D__CORTEX_M3 -DTARGET_LPC1768 -DDEVICE_ANALOGIN=1 -DTARGET_M3 -DCOMPONENT_PSA_SRV_EMUL=1 -DDEVICE_SPISLAVE=1 -DDEVICE_INTERRUPTIN=1 -D__MBED_CMSIS_RTOS_CM -DCOMPONENT_PSA_SRV_IMPL=1 -DTARGET_LPC176X -DTARGET_LPCTarget -D__MBED__=1 -DDEVICE_ETHERNET=1 -DDEVICE_CAN=1 -DDEVICE_EMAC=1 -DDEVICE_DIGITALOUT=1 -DMBED_BUILD_TIMESTAMP=1570193752.760802 -DDEVICE_SEMIHOST=1 -DDEVICE_STDIO_MESSAGES=1 -DDEVICE_SPI=1 -DDEVICE_SERIAL=1 -DDEVICE_LOCALFILESYSTEM=1 -DTARGET_NXP_EMAC -DTARGET_MBED_LPC1768 -DTARGET_DEBUG -DDEVICE_PORTOUT=1 -DDEVICE_RTC=1 -DTARGET_LIKE_CORTEX_M3 -DDEVICE_ANALOGOUT=1 -DTARGET_hepialight2 -DDEVICE_SERIAL_FC=1 -DDEVICE_PORTIN=1 -DDEVICE_PORTINOUT=1 -DDEVICE_USTICKER=1 -D__NEWLIB__ -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/." -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/cmsis" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/cmsis/TARGET_CORTEX_M" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/drivers" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/hal" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/hal/storage_abstraction" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/platform" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/targets/TARGET_NXP" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/targets/TARGET_NXP/TARGET_LPC176X" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/targets/TARGET_NXP/TARGET_LPC176X/TARGET_MBED_LPC1768" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/targets/TARGET_NXP/TARGET_LPC176X/device" -include"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/mbed_config.h" -O0 -fmessage-length=0 -fno-exceptions -fno-builtin -ffunction-sections -fdata-sections -funsigned-char -fno-delete-null-pointer-checks -fomit-frame-pointer -g3 -Wall -Wextra -c -DMBED_DEBUG -DMBED_TRAP_ERRORS_ENABLED=1 -Wno-unused-parameter -Wno-missing-field-initializers -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m3 -mthumb -D__NEWLIB__ -fstack-usage -specs=nano.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-platform

clean-platform:
	-$(RM) ./platform/ATCmdParser.d ./platform/ATCmdParser.o ./platform/CThunkBase.d ./platform/CThunkBase.o ./platform/CallChain.d ./platform/CallChain.o ./platform/FileBase.d ./platform/FileBase.o ./platform/FileHandle.d ./platform/FileHandle.o ./platform/FilePath.d ./platform/FilePath.o ./platform/FileSystemHandle.d ./platform/FileSystemHandle.o ./platform/LocalFileSystem.d ./platform/LocalFileSystem.o ./platform/Stream.d ./platform/Stream.o ./platform/mbed_alloc_wrappers.d ./platform/mbed_alloc_wrappers.o ./platform/mbed_application.d ./platform/mbed_application.o ./platform/mbed_assert.d ./platform/mbed_assert.o ./platform/mbed_board.d ./platform/mbed_board.o ./platform/mbed_critical.d ./platform/mbed_critical.o ./platform/mbed_error.d ./platform/mbed_error.o ./platform/mbed_error_hist.d ./platform/mbed_error_hist.o ./platform/mbed_interface.d ./platform/mbed_interface.o ./platform/mbed_mem_trace.d ./platform/mbed_mem_trace.o ./platform/mbed_mktime.d ./platform/mbed_mktime.o ./platform/mbed_mpu_mgmt.d ./platform/mbed_mpu_mgmt.o ./platform/mbed_poll.d ./platform/mbed_poll.o ./platform/mbed_retarget.d ./platform/mbed_retarget.o ./platform/mbed_rtc_time.d ./platform/mbed_rtc_time.o ./platform/mbed_sdk_boot.d ./platform/mbed_sdk_boot.o ./platform/mbed_semihost_api.d ./platform/mbed_semihost_api.o ./platform/mbed_sleep_manager.d ./platform/mbed_sleep_manager.o ./platform/mbed_stats.d ./platform/mbed_stats.o ./platform/mbed_wait_api_no_rtos.d ./platform/mbed_wait_api_no_rtos.o ./platform/mbed_wait_api_rtos.d ./platform/mbed_wait_api_rtos.o

.PHONY: clean-platform

