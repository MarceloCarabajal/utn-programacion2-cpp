#include <iostream>
#include "Taladro.h"
using namespace std;

Taladro::Taladro(float peso, float longitud, float potencia): Herramienta(peso, longitud)
{
    _nombre = "Taladro";
    _potencia = potencia;
}
//Getter y Setter
float Taladro::getPotencia()
{
    return _potencia;
}
void Taladro::setPotencia(float potencia)
{
    _potencia = potencia;
}
void Taladro::mostrarInformacion() const
{
    Herramienta::mostrarInformacion();
    cout << " | Potencia: " << _potencia << " W" << endl;
}
