#include "Fecha.h"

bool Fecha::esBisiesto(int anio) const{
    return (anio%4 == 0 && anio%100 != 0) || (anio%400 == 0);
}

int Fecha::diasEnMes(int mes, int anio) const{
    switch(mes){
    case 1: return 31;
    case 2: return esBisiesto(anio) ? 29 : 28;
    case 3: return 31;
    case 4: return 30;
    case 5: return 31;
    case 6: return 30;
    case 7: return 31;
    case 8: return 31;
    case 9: return 30;
    case 10: return 31;
    case 11: return 30;
    case 12: return 31;
    default: return 0;
    }
}
bool Fecha::fechaValida(int d, int m, int a) const{
    if(a<1 || m <1 || m>12) return false;
    if(d<1 || d > diasEnMes(m, a)) return false;
    return true;
}
//Constructores
Fecha::Fecha(){
    _dia = 1;
    _mes = 1;
    _anio = 2023;
}
Fecha::Fecha(int dia, int mes, int anio){
    if(fechaValida(dia, mes, anio)){
        _dia = dia;
        _mes = mes;
        _anio = anio;
    } else {
        _dia = 1;
        _mes = 1;
        _anio = 2023;
    }
}
//Getters y Setter
int Fecha::getDia() const{
    return _dia;
}
int Fecha::getMes() const{
    return _mes;
}
int Fecha::getAnio() const{
    return _anio;
}
void Fecha::setDia(int dia){
    _dia = dia;
}
void Fecha::setMes(int mes){
    _mes = mes;
}
void Fecha::setAnio(int anio){
    _anio = anio;
}
//Metodos
void Fecha::agregarDia(){
    _dia++;
    if(_dia > diasEnMes(_mes, _anio)) {
        _dia = 1;
        _mes++;
        if (_mes > 12) {
            _mes = 1;
            _anio++;
        }
    }
}
void Fecha::restarDia(){
    _dia--;
    if(_dia <1){
        _mes--;
        if(_mes <1){
            _mes = 12;
            _anio--;
        }
        _dia = diasEnMes(_mes, _anio);
    }
}

void Fecha::agregarDias(int cantidad){
    if(cantidad > 0){
        for (int i=0; i<cantidad; i++){
            agregarDia();
        }
    } else if(cantidad <0){
        for (int i=0; i< -cantidad; i++){
            restarDia();
        }
    }
}

//Sobrecargas de operadores
bool Fecha::operator==(const Fecha &obj) const{
    if(_dia!=obj._dia) return false;
    if(_mes!=obj._mes) return false;
    if(_anio!=obj._anio) return false;
    return true;
}

string Fecha::toString() const{
    return to_string(_dia) + "/" + to_string(_mes) + "/" + to_string(_anio);
}
