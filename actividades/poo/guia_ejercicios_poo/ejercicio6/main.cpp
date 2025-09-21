/**
Crear una clase llamada Punto que represente un punto en un plano cartesiano. La clase debe contener los siguientes atributos:
x (float): Almacena la coordenada en el eje X.
y (float): Almacena la coordenada en el eje Y.
Implementar los siguientes métodos públicos:
Punto(float xInicial, float yInicial): Constructor que inicializa las coordenadas x y y del punto.
Getters y Setters para cada atributo.
calcularDistancia(Punto otroPunto): Devuelve la distancia entre el punto actual y otro punto dado.
La fórmula para calcular la distancia entre dos puntos (x1, y1) y (x2, y2) es: sqrt((x2 - x1)^2 + (y2 - y1)^2).
mover(float deltaX, float deltaY): Mueve el punto sumando deltaX a x y deltaY a y.
*/

#include <iostream>
#include "Punto.h"

using namespace std;

int main()
{
    Punto p1(0, 0);
    Punto p2(3, 0);

    cout << "Distancia entre p1 y p2: " << p1.calcularDistancia(p2) << endl;

    p1.mover(2,2);
    cout << "Nueva posicion de p1: (" << p1.getX() << ", " << p1.getY() << ")" << endl;

    return 0;
}
