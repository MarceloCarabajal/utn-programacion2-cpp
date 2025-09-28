#include <iostream>
#include "Herramienta.h"
using namespace std;

Herramienta::Herramienta(float peso, float longitud, float precioCompra){
    _nombre = "";
    _peso = peso;
    _longitud = longitud;
    _precioDeCompra = precioCompra;
}
//Getters
string Herramienta::getNombre() const{
    return _nombre;
}
float Herramienta::getPeso() const{
    return _peso;
}
float Herramienta::getLongitud() const{
    return _longitud;
}
float Herramienta::getPrecioCompra() const{
    return _precioDeCompra;
}
//Setters
void Herramienta::setNombre(string nombre){
    _nombre = nombre;
}
void Herramienta::setPeso(float peso){
    _peso = peso;
}
void Herramienta::setLongitud(float longitud){
    _longitud = longitud;
}
void Herramienta::setPrecioCompra(float precioCompra){
    _precioDeCompra = precioCompra;
}
//Metodo
void Herramienta::mostrarInformacion() const{
    cout << "Herramienta: " << _nombre
        << " | Peso: " << _peso << " Kg"
        << " | Longitud: " << _longitud << " cm"
        << " | Precio de compra: $" << _precioDeCompra;
}
