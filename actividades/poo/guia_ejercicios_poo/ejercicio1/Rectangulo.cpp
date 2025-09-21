#include "Rectangulo.h"

Rectangulo::Rectangulo(float base, float altura){
    _base = base;
    _altura = altura;
}

//Getters
float Rectangulo::getBase() const{
    return _base;
}
float Rectangulo::getAltura() const{
    return _altura;
}

//Setters
void Rectangulo::setBase(float base){
    _base = base;
}
void Rectangulo::setAltura(float altura){
    _altura = altura;
}

//Metodos
float Rectangulo::calcularArea() const{
    return _base*_altura;
}
float Rectangulo::calcularPerimetro() const{
    return 2*(_base+_altura);
}
