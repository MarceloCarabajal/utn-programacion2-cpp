#include "Triangulo.h"

Triangulo::Triangulo(float l1, float l2, float l3){
    _lados[0] = l1;
    _lados[1] = l2;
    _lados[2] = l3;
}

float Triangulo::getLado(int numero) const {
    if(numero >=1 && numero <=3) {
        return _lados[numero-1];
    }
    return 0;
}

void Triangulo::setLado(int numero, float valor){
    if (numero >=1 && numero <=3){
        _lados[numero-1] = valor;
    }
}

int Triangulo::getTipo() const{ // 1=equilatero, 2=isosceles, 3=escaleno
    if(_lados[0] == _lados[1] && _lados[1] == _lados[2]){
        return 1;
    } else if (_lados[0] == _lados[1] || _lados[0] == _lados[2] || _lados[1] == _lados[2]){
        return 2;
    } else {
        return 3;
    }
}

bool Triangulo::isEquilatero() const{
    return getTipo() == 1;
}

bool Triangulo::isIsosceles() const{
    return getTipo() == 2;
}

bool Triangulo::isEscaleno() const{
    return getTipo() == 3;
}
