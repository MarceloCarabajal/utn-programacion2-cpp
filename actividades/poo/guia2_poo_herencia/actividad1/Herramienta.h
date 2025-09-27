#pragma once
#include <string>

class Herramienta{
protected:
    std::string _nombre;
    float _peso;
    float _longitud;
public:
    Herramienta(float peso, float longitud);
    //Getters
    std::string getNombre() const;
    float getPeso() const;
    float getLongitud() const;
    //Setters
    void setNombre(std::string nombre);
    void setPeso(float peso);
    void setLongitud(float longitud);
    //Metodo
    virtual void mostrarInformacion() const;
};
