################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../cmsis/TARGET_CORTEX_M/mbed_fault_handler.c \
../cmsis/TARGET_CORTEX_M/mbed_tz_context.c 

C_DEPS += \
./cmsis/TARGET_CORTEX_M/mbed_fault_handler.d \
./cmsis/TARGET_CORTEX_M/mbed_tz_context.d 

OBJS += \
./cmsis/TARGET_CORTEX_M/mbed_fault_handler.o \
./cmsis/TARGET_CORTEX_M/mbed_tz_context.o 


# Each subdirectory must supply rules for building sources it contributes
cmsis/TARGET_CORTEX_M/%.o: ../cmsis/TARGET_CORTEX_M/%.c cmsis/TARGET_CORTEX_M/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -DDEVICE_FLASH=1 -DARM_MATH_CM3 -DDEVICE_DIGITALIN=1 -DDEVICE_SLEEP=1 -DTARGET_CORTEX -DTARGET_NXP -DCOMPONENT_NSPE=1 -DDEVICE_I2CSLAVE=1 -DDEVICE_PWMOUT=1 -DDEVICE_I2C=1 -DTARGET_CORTEX_M -DTOOLCHAIN_GCC -DTARGET_LIKE_MBED -D__CMSIS_RTOS -DDEVICE_MPU=1 -DDEVICE_DEBUG_AWARENESS=1 -DTOOLCHAIN_GCC_ARM -D__CORTEX_M3 -DTARGET_LPC1768 -DDEVICE_ANALOGIN=1 -DTARGET_M3 -DCOMPONENT_PSA_SRV_EMUL=1 -DDEVICE_SPISLAVE=1 -DDEVICE_INTERRUPTIN=1 -D__MBED_CMSIS_RTOS_CM -DCOMPONENT_PSA_SRV_IMPL=1 -DTARGET_LPC176X -DTARGET_LPCTarget -D__MBED__=1 -DDEVICE_ETHERNET=1 -DDEVICE_CAN=1 -DDEVICE_EMAC=1 -DDEVICE_DIGITALOUT=1 -DMBED_BUILD_TIMESTAMP=1570193752.760802 -DDEVICE_SEMIHOST=1 -DDEVICE_STDIO_MESSAGES=1 -DDEVICE_SPI=1 -DDEVICE_SERIAL=1 -DDEVICE_LOCALFILESYSTEM=1 -DTARGET_NXP_EMAC -DTARGET_MBED_LPC1768 -DTARGET_DEBUG -DDEVICE_PORTOUT=1 -DDEVICE_RTC=1 -DTARGET_LIKE_CORTEX_M3 -DDEVICE_ANALOGOUT=1 -DTARGET_hepialight2 -DDEVICE_SERIAL_FC=1 -DDEVICE_PORTIN=1 -DDEVICE_PORTINOUT=1 -DDEVICE_USTICKER=1 -D__NEWLIB__ -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/." -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/cmsis" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/cmsis/TARGET_CORTEX_M" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/drivers" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/hal" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/hal/storage_abstraction" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/platform" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/targets/TARGET_NXP" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/targets/TARGET_NXP/TARGET_LPC176X" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/targets/TARGET_NXP/TARGET_LPC176X/TARGET_MBED_LPC1768" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/targets/TARGET_NXP/TARGET_LPC176X/device" -include"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/mbed_config.h" -O0 -fmessage-length=0 -fno-exceptions -fno-builtin -ffunction-sections -fdata-sections -funsigned-char -fno-delete-null-pointer-checks -fomit-frame-pointer -g3 -Wall -Wextra -c -DMBED_DEBUG -DMBED_TRAP_ERRORS_ENABLED=1 -Wno-unused-parameter -Wno-missing-field-initializers -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m3 -mthumb -D__NEWLIB__ -fstack-usage -specs=nano.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-cmsis-2f-TARGET_CORTEX_M

clean-cmsis-2f-TARGET_CORTEX_M:
	-$(RM) ./cmsis/TARGET_CORTEX_M/mbed_fault_handler.d ./cmsis/TARGET_CORTEX_M/mbed_fault_handler.o ./cmsis/TARGET_CORTEX_M/mbed_tz_context.d ./cmsis/TARGET_CORTEX_M/mbed_tz_context.o

.PHONY: clean-cmsis-2f-TARGET_CORTEX_M

