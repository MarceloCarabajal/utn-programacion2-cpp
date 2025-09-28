#pragma once
#include <string>
#include "Herramienta.h"

class Martillo: public Herramienta
{
private:
    std::string _tipoCabeza;
public:
    Martillo(float peso, float longitud, const std::string &tipoCabeza);
    //Getter y Setter
    std::string getTipoCabeza() const;
    void setTipoCabeza(const std::string &tipoCabeza);

    void mostrarInformacion() const override;
};
