#include "Postulante.h"


Postulante::Postulante(string nombre, int edad, string puesto, int experiencia){
    _nombre = nombre; // es lo mismo que usar this, por ejemplo: this->_nombre = nombre;
    _edad = edad;
    _puesto = puesto;
    _experiencia = experiencia;
}
// Getters
string Postulante::getNombre(){
    return _nombre;
}
int Postulante::getEdad(){
    return _edad;
}
string Postulante::getPuesto(){
    return _puesto;
}
int Postulante::getExperiencia(){
    return _experiencia;
}
