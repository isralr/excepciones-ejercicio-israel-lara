#include <iostream>
#include <locale>
#include <stdexcept>
#include <string>
#include<fstream>
#include "parte1/bandera_error.h"
#include "parte2/ejercicio2.h"
#include "parte3/ejercicio3.h"
#include "parte4/ejercicio4.h"
#include "parte5/ejercicio5.h"
#include "parte6/ejercicio6.h"
#include "parte7/ejercicio7.h"

int main() {
    std::setlocale(LC_ALL, "");
    std::wcout.imbue(std::locale(""));

    int result = divide(5, 0);

    if (errorFlag) {
        std::wcout << L"Ocurrió un error: división por cero." << std::endl;
        errorFlag = false;
    }

    int resultError = divideError(5, 0);
    if (resultError == -1) {
        std::wcout << L"Error: división por cero." << std::endl;
    }

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
    try {
        lanzaExcepcionParte4();
    }
    catch (const std::exception& e) {
        std::wcout << L"Excepción capturada: " << e.what() << std::endl;
    }
    try {
        try {
            lanzaExcepcionParte5();
        }
        catch (const std::runtime_error& e) {
            std::wcout << L"Excepción capturada y manejada. Reactivando..." << std::endl;
            throw;
        }
    }
    catch (const std::runtime_error& e) {
        std::wcout << L"Excepción reactivada capturada: " << e.what() << std::endl;
    }
    lanzaExcepcionParte6();

    std::ofstream file("archivo.txt");

    try {
        file.close(); // Cierra el archivo para simular un error
        escribeEnArchivo(file);
    }
    catch (const std::runtime_error& e) {
        std::wcout << L"Excepción capturada: " << e.what() << std::endl;
    }

    // Asegurarse de que el archivo esté cerrado
    if (file.is_open()) {
        file.close();
    }

    return 0;
}