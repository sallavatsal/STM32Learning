################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Drivers/CMSIS/DSP/DSP_Lib_TestSuite/Common/Startup/startup_stm32l412kbux.s 

OBJS += \
./Drivers/CMSIS/DSP/DSP_Lib_TestSuite/Common/Startup/startup_stm32l412kbux.o 


# Each subdirectory must supply rules for building sources it contributes
Drivers/CMSIS/DSP/DSP_Lib_TestSuite/Common/Startup/%.o: ../Drivers/CMSIS/DSP/DSP_Lib_TestSuite/Common/Startup/%.s
	arm-none-eabi-gcc -mcpu=cortex-m4 -g3 -c -x assembler-with-cpp --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" "$<"

