#include <iostream>
#include "funciones.h"
using namespace std;

void mostrar(int n){
    cout << n << endl;
}

void mostrarR(int &n){
    cout << n << endl;
}

void mostrarD(int *n){
    cout << *n << endl;
}

int sumar(int n, int m, int o){
    return n + m + o;
}

int sumar(int n, int m){
    return n + m;
}

float sumar(float n, float m){
    return n + m;
}


int main()
{
    // sobrecarga de valores
    cout << "La suma es: " << sumar(2.5f, 5.5f) << endl;
    cout << "La suma es: " << sumar(2, 5) << endl;
    cout << "La suma es: " << sumar(2, 5, 6) << endl;
//    linea(40, 'M');
//    int legajo = pedirNumero("Ingrese legajo: ");
//    int numero = pedirNumero();
//    int edad = pedirNumero("Ingrese edad: ");
//    linea(10);
//
//    cout << "El legajo es: " << legajo << endl;
    return 0;
}
