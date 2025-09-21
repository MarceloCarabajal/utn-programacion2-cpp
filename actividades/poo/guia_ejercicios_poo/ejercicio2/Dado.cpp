#include "Dado.h"

Dado::Dado(){
    _valor = (rand()%6) + 1;
}
void Dado::lanzar(){
    _valor = (rand()%6 + 1);
}
int Dado::getValor() const{
    return _valor;
}
bool Dado::esMaximo() const{
    return _valor == 6;
}
bool Dado::esMinimo() const{
    return _valor == 1;
}
