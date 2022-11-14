################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GPIO.c \
../HMI_APP.c \
../LCD.c \
../Timer1.c \
../keypad.c \
../uart.c 

OBJS += \
./GPIO.o \
./HMI_APP.o \
./LCD.o \
./Timer1.o \
./keypad.o \
./uart.o 

C_DEPS += \
./GPIO.d \
./HMI_APP.d \
./LCD.d \
./Timer1.d \
./keypad.d \
./uart.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"G:\03- IMT SDK\IMT_SDK_Win_64\WinAVR" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


