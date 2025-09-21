/**
Crear una clase llamada Triangulo que represente un tri�ngulo. La clase debe contener un vector de 3
elementos, donde cada elemento corresponde a la longitud de un lado del tri�ngulo. Implementar los siguientes m�todos:
getLado(int numero): Devuelve la longitud del valor del lado correspondiente al n�mero proporcionado (1, 2, o 3). Si el n�mero es incorrecto (fuera del rango 1-3), devuelve cero.
setLado(int numero, float valor): Establece el valor del lado correspondiente al n�mero proporcionado (1, 2, o 3). Si el n�mero es incorrecto (fuera del rango 1-3), no realiza ninguna acci�n.
getTipo(): Devuelve el tipo de tri�ngulo seg�n sus lados:
1 para un tri�ngulo equil�tero (todos los lados iguales).
2 para un tri�ngulo is�sceles (dos lados iguales).
3 para un tri�ngulo escaleno (todos los lados diferentes).
isEscaleno(): Devuelve true si el tri�ngulo es escaleno, false en caso contrario.
isIsosceles(): Devuelve true si el tri�ngulo es is�sceles, false en caso contrario.
isEquilatero(): Devuelve true si el tri�ngulo es equil�tero, false en caso contrario.
*/

#include <iostream>
#include "Triangulo.h"

using namespace std;

int main()
{
    Triangulo t1(3, 3, 3), t2(5, 5, 2), t3(3, 5, 6);

    cout << "Triangulo 1: tipo " << t1.getTipo()
         << " (Equilatero? " << (t1.isEquilatero() ? "Si" : "No") << ")\n";

    cout << "Triangulo 2: tipo " << t2.getTipo()
         << " (Equilatero? " << (t2.isIsosceles() ? "Si" : "No") << ")\n";

    cout << "Triangulo 3: tipo " << t3.getTipo()
         << " (Equilatero? " << (t3.isEscaleno() ? "Si" : "No") << ")\n";

    cout << "---------------------------------" << endl;
    cout << "Lado 1 de triangulo 3: " << t3.getLado(1) << endl;
    t3.setLado(1, 5);
    cout << "Nuevo lado 1 del triangulo 3: " << t3.getLado(1) << endl;

    return 0;
}
