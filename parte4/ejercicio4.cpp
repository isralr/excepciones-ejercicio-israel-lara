//
// Created by israe on 24/10/2024.
//

#include "ejercicio4.h"
#include <exception>
#include <string>

class MiExcepcion : public std::exception {
private:
    std::string mensaje;
public:
    explicit MiExcepcion(const std::string& msg) : mensaje(msg) {}
    const char* what() const noexcept override {
        return mensaje.c_str();
    }
};

void lanzaExcepcionParte4() {
    throw MiExcepcion("Ocurrió un error en la función lanzaExcepcionParte4");
}