/**
Crear una clase llamada Dado que simule el comportamiento de un dado de seis caras. La clase debe contener los siguientes atributos:
valor (int): Almacena el valor actual del dado (un número entre 1 y 6).
Implementar los siguientes métodos públicos:
Dado(): Constructor que inicializa el dado con un valor aleatorio entre 1 y 6.
lanzar(): Simula el lanzamiento del dado, asignando un nuevo valor aleatorio entre 1 y 6 al atributo valor.
getValor(): Devuelve el valor actual del dado.
esMaximo(): Devuelve true si el valor del dado es 6, y false en caso contrario.
esMinimo(): Devuelve true si el valor del dado es 1, y false en caso contrario.
*/
#include <iostream>

#include "Dado.h"
using namespace std;

int main()
{
    srand(time(nullptr)); //inicio semilla

    Dado dado1;

    cout << "Valor inicial del dado: " << dado1.getValor() << endl;

    for (int i = 0; i < 5; i++) {
        dado1.lanzar();
        cout << "\nLanzamiento " << i+1 << ": " << dado1.getValor();

        if(dado1.esMaximo()) cout << " (es maximo)";
        if(dado1.esMinimo()) cout << " (es minimo)";
    }

    cout << endl;

    return 0;
}
