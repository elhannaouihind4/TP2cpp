################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Etudiant.cpp \
../Filiere.cpp \
../Main.cpp 

CPP_DEPS += \
./Etudiant.d \
./Filiere.d \
./Main.d 

OBJS += \
./Etudiant.o \
./Filiere.o \
./Main.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./Etudiant.d ./Etudiant.o ./Filiere.d ./Filiere.o ./Main.d ./Main.o

.PHONY: clean--2e-

