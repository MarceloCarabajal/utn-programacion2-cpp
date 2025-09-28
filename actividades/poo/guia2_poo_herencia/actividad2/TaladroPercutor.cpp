#include <iostream>
#include "TaladroPercutor.h"
using namespace std;

TaladroPercutor::TaladroPercutor(float peso, float longitud, float potencia, int golpesPorMinuto)
    : Taladro(peso, longitud, potencia){
        _nombre = "Taladro Percutor";
        _golpesPorMinuto = golpesPorMinuto;
}
//Getter y Setter
int TaladroPercutor::getGolpesPorMinuto() const{
    return _golpesPorMinuto;
}
void TaladroPercutor::setGolpesPorMinuto(int golpesPorMinuto){
    _golpesPorMinuto = golpesPorMinuto;
}
void TaladroPercutor::mostrarInformacion() const{
    Taladro::mostrarInformacion();
    cout << " | Golpes por minuto: " << _golpesPorMinuto << endl;
}
