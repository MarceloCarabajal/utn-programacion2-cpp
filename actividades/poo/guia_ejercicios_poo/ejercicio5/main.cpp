/**
Crear una clase llamada Termometro que represente un termómetro digital. La clase debe contener los siguientes atributos:
temperatura (float): Almacena la temperatura actual medida por el termómetro.
unidad (char): Almacena la unidad de medida de la temperatura ('C' para Celsius, 'F' para Fahrenheit).
Implementar los siguientes métodos:
Termometro(float tempInicial, char unidadInicial): Constructor que inicializa la temperatura y la unidad de medida.
get y set de temperatura.
cambiarUnidad(char nuevaUnidad): Cambia la unidad de medida entre Celsius y Fahrenheit. Si la nueva unidad es diferente de la actual, convierte la temperatura a la nueva unidad.
Fórmula de conversión de Celsius a Fahrenheit: (C * 9/5) + 32
Fórmula de conversión de Fahrenheit a Celsius: (F - 32) * 5/9
getUnidad(): Devuelve la unidad actual de medida.


*/

#include <iostream>
#include "Termometro.h"

using namespace std;

int main()
{
    Termometro t1(25, 'C');

    cout << "Temperatura inicial: " << t1.getTemperatura() << " grados " << t1.getUnidad() << endl;

    t1.cambiarUnidad('F');
    cout << "Convertido a Farenheit: " << t1.getTemperatura() << " grados " << t1.getUnidad() << endl;

    t1.cambiarUnidad('C');
    cout << "Convertido nuevamente a Celsius: " << t1.getTemperatura() << " grados " << t1.getUnidad() << endl;

    return 0;
}
