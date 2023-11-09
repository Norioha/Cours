################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../drivers/AnalogIn.cpp \
../drivers/BusIn.cpp \
../drivers/BusInOut.cpp \
../drivers/BusOut.cpp \
../drivers/CAN.cpp \
../drivers/Ethernet.cpp \
../drivers/FlashIAP.cpp \
../drivers/I2C.cpp \
../drivers/I2CSlave.cpp \
../drivers/InterruptIn.cpp \
../drivers/InterruptManager.cpp \
../drivers/MbedCRC.cpp \
../drivers/QSPI.cpp \
../drivers/RawSerial.cpp \
../drivers/SPI.cpp \
../drivers/SPISlave.cpp \
../drivers/Serial.cpp \
../drivers/SerialBase.cpp \
../drivers/TableCRC.cpp \
../drivers/Ticker.cpp \
../drivers/Timeout.cpp \
../drivers/Timer.cpp \
../drivers/TimerEvent.cpp \
../drivers/UARTSerial.cpp 

CPP_DEPS += \
./drivers/AnalogIn.d \
./drivers/BusIn.d \
./drivers/BusInOut.d \
./drivers/BusOut.d \
./drivers/CAN.d \
./drivers/Ethernet.d \
./drivers/FlashIAP.d \
./drivers/I2C.d \
./drivers/I2CSlave.d \
./drivers/InterruptIn.d \
./drivers/InterruptManager.d \
./drivers/MbedCRC.d \
./drivers/QSPI.d \
./drivers/RawSerial.d \
./drivers/SPI.d \
./drivers/SPISlave.d \
./drivers/Serial.d \
./drivers/SerialBase.d \
./drivers/TableCRC.d \
./drivers/Ticker.d \
./drivers/Timeout.d \
./drivers/Timer.d \
./drivers/TimerEvent.d \
./drivers/UARTSerial.d 

OBJS += \
./drivers/AnalogIn.o \
./drivers/BusIn.o \
./drivers/BusInOut.o \
./drivers/BusOut.o \
./drivers/CAN.o \
./drivers/Ethernet.o \
./drivers/FlashIAP.o \
./drivers/I2C.o \
./drivers/I2CSlave.o \
./drivers/InterruptIn.o \
./drivers/InterruptManager.o \
./drivers/MbedCRC.o \
./drivers/QSPI.o \
./drivers/RawSerial.o \
./drivers/SPI.o \
./drivers/SPISlave.o \
./drivers/Serial.o \
./drivers/SerialBase.o \
./drivers/TableCRC.o \
./drivers/Ticker.o \
./drivers/Timeout.o \
./drivers/Timer.o \
./drivers/TimerEvent.o \
./drivers/UARTSerial.o 


# Each subdirectory must supply rules for building sources it contributes
drivers/%.o: ../drivers/%.cpp drivers/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C++ Compiler'
	arm-none-eabi-c++ -std=gnu++98 -DDEVICE_FLASH=1 -DARM_MATH_CM3 -DDEVICE_DIGITALIN=1 -DDEVICE_SLEEP=1 -DTARGET_CORTEX -DTARGET_NXP -DCOMPONENT_NSPE=1 -DDEVICE_I2CSLAVE=1 -DDEVICE_PWMOUT=1 -DDEVICE_I2C=1 -DTARGET_CORTEX_M -DTOOLCHAIN_GCC -DTARGET_LIKE_MBED -D__CMSIS_RTOS -DDEVICE_MPU=1 -DDEVICE_DEBUG_AWARENESS=1 -DTOOLCHAIN_GCC_ARM -D__CORTEX_M3 -DTARGET_LPC1768 -DDEVICE_ANALOGIN=1 -DTARGET_M3 -DCOMPONENT_PSA_SRV_EMUL=1 -DDEVICE_SPISLAVE=1 -DDEVICE_INTERRUPTIN=1 -D__MBED_CMSIS_RTOS_CM -DCOMPONENT_PSA_SRV_IMPL=1 -DTARGET_LPC176X -DTARGET_LPCTarget -D__MBED__=1 -DDEVICE_ETHERNET=1 -DDEVICE_CAN=1 -DDEVICE_EMAC=1 -DDEVICE_DIGITALOUT=1 -DMBED_BUILD_TIMESTAMP=1570193752.760802 -DDEVICE_SEMIHOST=1 -DDEVICE_STDIO_MESSAGES=1 -DDEVICE_SPI=1 -DDEVICE_SERIAL=1 -DDEVICE_LOCALFILESYSTEM=1 -DTARGET_NXP_EMAC -DTARGET_MBED_LPC1768 -DTARGET_DEBUG -DDEVICE_PORTOUT=1 -DDEVICE_RTC=1 -DTARGET_LIKE_CORTEX_M3 -DDEVICE_ANALOGOUT=1 -DTARGET_hepialight2 -DDEVICE_SERIAL_FC=1 -DDEVICE_PORTIN=1 -DDEVICE_PORTINOUT=1 -DDEVICE_USTICKER=1 -D__NEWLIB__ -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/." -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/cmsis" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/cmsis/TARGET_CORTEX_M" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/drivers" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/hal" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/hal/storage_abstraction" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/platform" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/targets/TARGET_NXP" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/targets/TARGET_NXP/TARGET_LPC176X" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/targets/TARGET_NXP/TARGET_LPC176X/TARGET_MBED_LPC1768" -I"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/targets/TARGET_NXP/TARGET_LPC176X/device" -include"/home/pc/Desktop/Cours/micro_controller/labo1/mbed-os/mbed_config.h" -O0 -fno-rtti -fmessage-length=0 -fno-exceptions -fno-builtin -ffunction-sections -fdata-sections -funsigned-char -fno-delete-null-pointer-checks -fomit-frame-pointer -g3 -Wall -Wextra -c -DMBED_DEBUG -DMBED_TRAP_ERRORS_ENABLED=1 -Wno-unused-parameter -Wno-missing-field-initializers -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m3 -mthumb -D__NEWLIB__ -fstack-usage -specs=nano.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-drivers

clean-drivers:
	-$(RM) ./drivers/AnalogIn.d ./drivers/AnalogIn.o ./drivers/BusIn.d ./drivers/BusIn.o ./drivers/BusInOut.d ./drivers/BusInOut.o ./drivers/BusOut.d ./drivers/BusOut.o ./drivers/CAN.d ./drivers/CAN.o ./drivers/Ethernet.d ./drivers/Ethernet.o ./drivers/FlashIAP.d ./drivers/FlashIAP.o ./drivers/I2C.d ./drivers/I2C.o ./drivers/I2CSlave.d ./drivers/I2CSlave.o ./drivers/InterruptIn.d ./drivers/InterruptIn.o ./drivers/InterruptManager.d ./drivers/InterruptManager.o ./drivers/MbedCRC.d ./drivers/MbedCRC.o ./drivers/QSPI.d ./drivers/QSPI.o ./drivers/RawSerial.d ./drivers/RawSerial.o ./drivers/SPI.d ./drivers/SPI.o ./drivers/SPISlave.d ./drivers/SPISlave.o ./drivers/Serial.d ./drivers/Serial.o ./drivers/SerialBase.d ./drivers/SerialBase.o ./drivers/TableCRC.d ./drivers/TableCRC.o ./drivers/Ticker.d ./drivers/Ticker.o ./drivers/Timeout.d ./drivers/Timeout.o ./drivers/Timer.d ./drivers/Timer.o ./drivers/TimerEvent.d ./drivers/TimerEvent.o ./drivers/UARTSerial.d ./drivers/UARTSerial.o

.PHONY: clean-drivers

