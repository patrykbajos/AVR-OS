cmake_minimum_required(VERSION 3.10)
project(ModularOSUsart C)

set(SRC usart.c)

add_avr_library(ModularOSUsart ${SRC})