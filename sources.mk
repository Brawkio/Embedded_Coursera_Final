#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

# One point (.) is used to go one directory forward, while two points (..) are
# used to go one directory backwards

#***************************Sources files*************************************
# Source files in case of selecting HOST
SOURCES = ./src/main.c \
	./src/memory.c \
	./src/stats.c \
	./src/course1.c \
	./src/data.c


# Source files in case of selecting the MSP432
SOURCES_MSP432 = ./src/main.c \
	./src/memory.c \
	./src/stats.c \
	./src/course1.c \
	./src/data.c \
	./src/startup_msp432p401r_gcc.c \
	./src/system_msp432p401r.c \
	./src/interrupts_msp432p401r_gcc.c
#*****************************************************************************


#************************Include paths****************************************
# Add your include paths to this variable in case of selecting HOST
INCLUDES = -I./src/ \
	-I./include/common/ \
	-I./

# Add your include paths to this variable in case of selecting the MSP432
INCLUDES_MSP432 = -I./src/ \
	-I./include/CMSIS/ \
	-I./include/msp432/ \
	-I./include/common/ \
	-I./
#*****************************************************************************
