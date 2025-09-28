#pragma once
#include <string>

class Herramienta
{
protected:
    std::string _nombre;
    float _peso;
    float _longitud;
    float _precioDeCompra;
public:
    Herramienta(float peso, float longitud, float precioCompra = 0);
    //Getters
    std::string getNombre() const;
    float getPeso() const;
    float getLongitud() const;
    float getPrecioCompra() const;
    //Setters
    void setNombre(std::string nombre);
    void setPeso(float peso);
    void setLongitud(float longitud);
    void setPrecioCompra(float precioCompra);
    //Metodo
    virtual void mostrarInformacion() const;
};
