#include <iostream>
#include "Martillo.h"
using namespace std;

Martillo::Martillo(float peso, float longitud, const string &tipoCabeza) : Herramienta(peso, longitud){
    _nombre = "Martillo";
    _tipoCabeza = tipoCabeza;
}
//Getter y Setter
string Martillo::getTipoCabeza() const{
    return _tipoCabeza;
}
void Martillo::setTipoCabeza(const string &tipoCabeza){
    _tipoCabeza = tipoCabeza;
}

void Martillo::mostrarInformacion() const{
    Herramienta::mostrarInformacion();
    cout << " | Tipo de cabeza: " << _tipoCabeza << endl;
}
