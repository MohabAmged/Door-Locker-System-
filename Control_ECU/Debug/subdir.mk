################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../BUZZER.c \
../Control_APP.c \
../DC_Motor.c \
../GPIO.c \
../LCD.c \
../Timer1.c \
../external_eeprom.c \
../keypad.c \
../twi.c \
../uart.c 

OBJS += \
./BUZZER.o \
./Control_APP.o \
./DC_Motor.o \
./GPIO.o \
./LCD.o \
./Timer1.o \
./external_eeprom.o \
./keypad.o \
./twi.o \
./uart.o 

C_DEPS += \
./BUZZER.d \
./Control_APP.d \
./DC_Motor.d \
./GPIO.d \
./LCD.d \
./Timer1.d \
./external_eeprom.d \
./keypad.d \
./twi.d \
./uart.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


