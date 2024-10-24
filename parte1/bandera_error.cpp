
#include "bandera_error.h"
#include<iostream>

// Variable global que actúa como bandera de error
bool errorFlag = false;

int divide(int a, int b) {
    if (b == 0) {
        // Si ocurre un error, se establece la bandera de error
        std::cout << "Ocurrió un error: división por cero." << std::endl;
        errorFlag = true;
        return 0;
    }
    else {
        return a / b;
    }
}