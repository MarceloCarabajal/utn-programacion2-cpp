#pragma once
#include <string>
#include "Herramienta.h"

class Destornillador: public Herramienta
{
private:
    std::string _tipoPunta;
public:
    Destornillador(float peso, float longitud, const std::string &tipoPunta);
    //Getter y Setter
    std::string getTipoPunta() const;
    void setTipoPunta(std::string &tipoPunta);
    void mostrarInformacion() const override;
};
