################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS += \
../cmsis/TARGET_CORTEX_M/TOOLCHAIN_GCC/except.S 

OBJS += \
./cmsis/TARGET_CORTEX_M/TOOLCHAIN_GCC/except.o 


# Each subdirectory must supply rules for building sources it contributes
cmsis/TARGET_CORTEX_M/TOOLCHAIN_GCC/%.o: ../cmsis/TARGET_CORTEX_M/TOOLCHAIN_GCC/%.S cmsis/TARGET_CORTEX_M/TOOLCHAIN_GCC/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU Assembler'
	arm-none-eabi-gcc -c -DMBED_DEBUG -DMBED_TRAP_ERRORS_ENABLED=1 -D__NEWLIB__ -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/." -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/cmsis" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/cmsis/TARGET_CORTEX_M" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/drivers" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/hal" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/hal/storage_abstraction" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/platform" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/targets/TARGET_NXP" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/targets/TARGET_NXP/TARGET_LPC176X" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/targets/TARGET_NXP/TARGET_LPC176X/TARGET_MBED_LPC1768" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/targets/TARGET_NXP/TARGET_LPC176X/device" -g3 -mcpu=cortex-m3 -mthumb -D__NEWLIB__ -specs=nano.specs -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-cmsis-2f-TARGET_CORTEX_M-2f-TOOLCHAIN_GCC

clean-cmsis-2f-TARGET_CORTEX_M-2f-TOOLCHAIN_GCC:
	-$(RM) ./cmsis/TARGET_CORTEX_M/TOOLCHAIN_GCC/except.o

.PHONY: clean-cmsis-2f-TARGET_CORTEX_M-2f-TOOLCHAIN_GCC

