#pragma once

class Termometro{
private:
    float _temperatura;
    char _unidad;
public:
    Termometro(float tempInicial, char unidadInicial);
    float getTemperatura() const;
    void setTemperatura(float temperatura);
    char getUnidad() const;
    void cambiarUnidad(char nuevaUnidad);
};

