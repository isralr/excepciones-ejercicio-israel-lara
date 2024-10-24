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
        parte3/ejercicio3.cpp
        parte4/ejercicio4.h
        parte4/ejercicio4.cpp
        parte5/ejercicio5.h
        parte5/ejercicio5.cpp
        parte6/ejercicio6.h
        parte6/ejercicio6.cpp
        parte7/ejercicio7.h
        parte7/ejercicio7.cpp)
