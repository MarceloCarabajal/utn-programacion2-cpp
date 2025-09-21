#include "Usuario.h"

Usuario::Usuario(std::string nombre, std::string clave, std::string rol){
    _nombre = nombre;
    _clave = clave;
    _rol = rol;
}

//Getters y Setters
std::string Usuario::getNombre() const{
    return _nombre;
}

std::string Usuario::getClave() const{
    return _clave;
}

std::string Usuario::getRol() const{
    return _rol;
}

void Usuario::setNombre(std::string nombre){
    _nombre = nombre;
}

void Usuario::setClave(std::string clave){
    _clave = clave;
}

void Usuario::setRol(std::string rol){
    _rol = rol;
}
