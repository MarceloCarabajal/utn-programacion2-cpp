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
};
