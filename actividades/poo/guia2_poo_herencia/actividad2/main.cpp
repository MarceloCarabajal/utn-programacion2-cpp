/**
Estás desarrollando un sistema para gestionar un inventario de herramientas en un taller.
Cada herramienta tiene características comunes, pero algunas herramientas tienen atributos y comportamientos específicos.
Crea las siguientes clases:
Herramienta (clase base):
Atributos: nombre (string), peso (float, en kg), longitud (float, en cm)
Métodos:
Constructor que inicialice los atributos de peso y longitud. El nombre queda vacío.
Métodos getters y setters para los atributos de peso y longitud.
mostrarInformacion() → Imprime el nombre de la herramienta, el peso y la longitud.
Martillo (hereda de Herramienta):
Atributos: tipoCabeza (string, por ejemplo: "plana", "de bola").
Métodos:
Constructor que inicialice los atributos. Debe establecer "Martillo" como nombre de la herramienta.
Métodos getters y setters para el atributo tipoCabeza.
mostrarInformacion() → Imprime los detalles de la herramienta e indica el tipo de cabeza del martillo.
Destornillador (hereda de Herramienta):
Atributos: tipoPunta (string, por ejemplo: "plana", "estrella").
Métodos:
Constructor que inicialice los atributos. Debe establecer "Destornillador" como nombre de herramienta.
Métodos getters y setters para el tipoPunta..
mostrarInformacion() → Imprime los detalles de la herramienta e indica el tipo de punta del destornillador.
Taladro (hereda de Herramienta):
Atributos: potencia (float, en watts).
Métodos:
Constructor que inicialice los atributos. Debe establecer "Taladro" como nombre de herramienta.
Métodos getters y setters para los atributos de potencia.
mostrarInformacion() → Imprime los detalles de la herramienta e indica la potencia del taladro.
Instrucciones:
Crea la declaración de cada una de las clases en una archivo H distinto. Herramienta.h, Martillo.h, Destornillador.h y Taladro.h
Implementa las clases en un cpp distinto para cada una. Herramienta.cpp, Martillo.cpp, Destornillador.cpp y Taladro.cpp.
Crea un programa main() y declara al menos un objeto de cada tipo de herramienta (Martillo, Destornillador, Taladro).
Muestra los detalles de cada herramienta llamando al método mostrarInformacion().
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
