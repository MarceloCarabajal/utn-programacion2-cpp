#include <cmath>
#include "Punto.h"

Punto::Punto(float xInicial, float yInicial){
    _x = xInicial;
    _y = yInicial;
}

//Getters
float Punto::getX() const{
    return _x;
}

float Punto::getY() const{
    return _y;
}

//Setters
void Punto::setX(float x){
    _x = x;
}
void Punto::setY(float y){
    _y = y;
}

//Metodos
float Punto::calcularDistancia(const Punto &otroPunto) const{
    float dx = otroPunto.getX() - _x;
    float dy = otroPunto.getY() - _y;
    return std::sqrt(dx * dx + dy * dy);
}
void Punto::mover(float deltaX, float deltaY){
    _x = deltaX;
    _y = deltaY;
}
