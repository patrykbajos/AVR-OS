cmake_minimum_required(VERSION 3.10)
project(ModularOS C)

set(AVR_MCU atmega16)
set(MCU_SPEED 16000000UL)
set(CMAKE_C_STANDARD 99)

include(generic-gcc-avr.cmake)

# I haveto fix cmake recurse bug when using subdirs...
#add_subdirectory(modularos-core)
#add_subdirectory(modularos-usart)
include_directories(includes)

add_avr_library(ModularOSCore
        modularos-core/asm.c
        modularos-core/mutex.c
        modularos-core/queue.c
        modularos-core/scheduler.c
        modularos-core/system.c
        modularos-core/tasks.c)

add_avr_library(ModularOSUsart modularos-usart/usart.c)