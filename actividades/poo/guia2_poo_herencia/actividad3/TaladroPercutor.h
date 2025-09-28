#pragma once
#include "Taladro.h"

class TaladroPercutor : public Taladro{
private:
    int _golpesPorMinuto;
public:
    TaladroPercutor(float peso, float longitud, float potencia, int golpesPorMinuto);
    //Getter y Setter
    int getGolpesPorMinuto() const;
    void setGolpesPorMinuto(int golpesPorMinuto);
    void mostrarInformacion() const override;
};
