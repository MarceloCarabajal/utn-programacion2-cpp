/**
Actividad 3
Modifica la clase Herramienta y agrega un atributo llamado precioDeCompra (float).
Crea un setter y getter para precio de compra.
También modifica el constructor de herramienta para que reciba como tercer parámetro el precio de compra pero por defecto el valor sea 0.
Modifica el método mostrarInformacion() de herramienta de manera que muestre el precio de compra.
Instrucciones:
No modifiques absolutamente nada en el programa main. ¿Cuál es la salida por pantalla?

*/


#include <iostream>
#include "Martillo.h"
#include "Destornillador.h"
#include "Taladro.h"
#include "TaladroPercutor.h"
using namespace std;

int main()
{
    Martillo m1(5, 15, "de bola");
    Destornillador d1(2, 10, "plana");
    Taladro t1(10.0f, 20.0f, 500.0f);
    TaladroPercutor tp1(13, 30, 600, 2500);

    m1.mostrarInformacion();
    d1.mostrarInformacion();
    t1.mostrarInformacion();
    tp1.mostrarInformacion();

    return 0;
}
