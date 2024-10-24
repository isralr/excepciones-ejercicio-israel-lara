#include <iostream>
#include "parte1/bandera_error.h"
#include <locale>
#include <codecvt>
#include <stdexcept>
#include "parte2/ejercicio2.h"
#include "parte3/ejercicio3.h"

int main() {
    std::setlocale(LC_ALL, "");
    std::wcout.imbue(std::locale(""));

    int result = divide(5, 0);

    // Se verifica regularmente la bandera de error
    if (errorFlag) {
        std::wcout << L"Ocurrió un error: división por cero." << std::endl;
        // Se maneja el error y se reinicia la bandera
        errorFlag = false;
    }

    // Uso de la versión que devuelve un valor de error
    int resultError = divideError(5, 0);
    if (resultError == -1) {
        std::wcout << L"Error: división por cero." << std::endl;
    }

    // Uso de la versión que lanza una excepción
    try {
        int resultException = divideException(5, 0);
    }
    catch (const std::invalid_argument& e) {
        std::wcout << L"Excepción: " << e.what() << std::endl;
    }

    try {
        func1();
    }
    catch (const std::runtime_error& e) {
        std::wcout << L"Excepción capturada en main: " << e.what() << std::endl;
    }

    return 0;
}