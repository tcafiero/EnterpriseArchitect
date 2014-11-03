################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../System/A.cpp \
../System/B.cpp \
../System/C.cpp \
../System/D.cpp \
../System/F.cpp \
../System/G.cpp \
../System/H.cpp 

OBJS += \
./System/A.o \
./System/B.o \
./System/C.o \
./System/D.o \
./System/F.o \
./System/G.o \
./System/H.o 

CPP_DEPS += \
./System/A.d \
./System/B.d \
./System/C.d \
./System/D.d \
./System/F.d \
./System/G.d \
./System/H.d 


# Each subdirectory must supply rules for building sources it contributes
System/%.o: ../System/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -I"F:\workspace\ProvaEA\System" -O2 -g -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


