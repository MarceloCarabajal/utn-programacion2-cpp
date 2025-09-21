/// Marcelo Carabajal
/// UTN FRGP - TUP
/// Tema: POO
/// Ejercicio Actividad 1


#include <iostream>
#include "Postulante.h"
#include "Evaluador.h"
using namespace std;

int main()
{
    Evaluador evaluador;

    Postulante p1("Pepito", 25, "Programador", 3);
    Postulante p2("Juancito", 21, "Tester", 1);
    Postulante p3("Carlitos", 40, "Diseñador", 10);

    cout << p1.getNombre() << (evaluador.evaluar(p1) ? " PASO" : " NO PASO") << endl;
    cout << p2.getNombre() << (evaluador.evaluar(p2) ? " PASO" : " NO PASO") << endl;
    cout << p3.getNombre() << (evaluador.evaluar(p3) ? " PASO" : " NO PASO") << endl;

    cout << "\nTotal evaluados: " << evaluador.getTotalEvaluados() << endl;
    cout << "\nTotal rechazados: " << evaluador.getTotalRechazados() << endl;

    return 0;
}
