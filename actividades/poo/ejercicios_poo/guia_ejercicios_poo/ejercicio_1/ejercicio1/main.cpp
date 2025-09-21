#include <iostream>
#include "Rectangulo.h"

using namespace std;

int main()
{
    Rectangulo r1(3, 5);

    cout << "Base: " << r1.getBase() << endl;
    cout << "Altura: " << r1.getAltura() << endl;
    cout << "Area: " << r1.calcularArea() << endl;
    cout << "Perimetro: " << r1.calcularPerimetro() << endl;

    //modifico valores
    r1.setBase(5);
    r1.setAltura(5);

    cout << "\nNuevo rectangulo:" << endl;
    cout << "Base: " << r1.getBase() << endl;
    cout << "Altura: " << r1.getAltura() << endl;
    cout << "Area: " << r1.calcularArea() << endl;
    cout << "Perimetro: " << r1.calcularPerimetro() << endl;

    return 0;
}
