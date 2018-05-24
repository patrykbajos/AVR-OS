cmake_minimum_required(VERSION 3.10)
project(ModularOSCore C)

set(SRC asm.c mutex.c queue.c scheduler.c system.c tasks.c)

add_avr_library(ModularOSCore ${SRC})