#pragma once
#include <string>
using namespace std;

class Fecha{
private:
    int _dia, _mes, _anio;

    bool esBisiesto(int anio) const;
    int diasEnMes(int mes, int anio) const;
    bool fechaValida(int d, int m, int a) const;

    //Metodos privados
    void agregarDia();
    void restarDia();

public:
    //Constructores
    Fecha();
    Fecha(int dia, int mes, int anio);
    //Getters y Setter
    int getDia() const;
    int getMes() const;
    int getAnio() const;
    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);
    //Metodos publicos
    void agregarDias(int cantidad);
    string toString() const;
    
    /// Sobrecargas de operadores: Es un mecanismo que nos permite agregarle funcionalidades a los operadores del lenguaje.
    /// Esto se consigue escribiendo el codigo corresponidiente dentro de la clase
    bool operator ==(const Fecha &obj) const;
};
