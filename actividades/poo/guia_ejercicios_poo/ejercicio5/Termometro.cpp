#include "Termometro.h"

Termometro::Termometro(float tempInicial, char unidadInicial){
    _temperatura = tempInicial;
    _unidad = (unidadInicial == 'C' || unidadInicial == 'F') ? unidadInicial : 'C';
}

float Termometro::getTemperatura() const{
    return _temperatura;
}

void Termometro::setTemperatura(float temperatura){
    _temperatura = temperatura;
}

char Termometro::getUnidad() const {
    return _unidad;
}
void Termometro::cambiarUnidad(char nuevaUnidad){
    if (nuevaUnidad != _unidad) {
        if (nuevaUnidad == 'C' && _unidad == 'F') {
            //fahrenheit -> celsius
            _temperatura = (_temperatura - 32) * 5.0 / 9.0;
        } else if (nuevaUnidad == 'F' && _unidad == 'C') {
            //celsius a fahrenheit
            _temperatura = (_temperatura * 9.0 / 5.0) + 32;
        }
        _unidad = nuevaUnidad;
    }
}
