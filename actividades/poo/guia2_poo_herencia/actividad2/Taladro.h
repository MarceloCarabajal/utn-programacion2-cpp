#pragma once
#include "Herramienta.h"

class Taladro: public Herramienta
{
protected:
    float _potencia;
public:
    Taladro(float peso, float longitud, float potencia);
    //Getter y Setter
    float getPotencia();
    void setPotencia(float potencia);
    void mostrarInformacion() const override;
};
