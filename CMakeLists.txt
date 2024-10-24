cmake_minimum_required(VERSION 3.29)
project(excepciones_ejercicio_israel_lara)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(excepciones_ejercicio_israel_lara
        parte1/bandera_error.cpp
        parte1/bandera_error.h
        main.h
        main.cpp
        parte2/ejercicio2.h
        parte2/ejercicio2.cpp
        parte3/ejercicio3.h
        parte3/ejercicio3.cpp)
