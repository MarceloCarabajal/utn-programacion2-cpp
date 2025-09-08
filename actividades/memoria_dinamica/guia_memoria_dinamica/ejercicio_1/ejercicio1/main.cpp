///Escribe un programa que solicite al usuario el tama�o de un array de enteros,
///lo cree din�micamente utilizando new, el usuario debe poder cargar el array
///y mostrarlo, y luego libere la memoria con delete

#include <iostream>

using namespace std;

int main()
{
    int TAMANIO;
    int *vec = nullptr;

    cout << "Ingrese tamanio del array: ";
    cin >> TAMANIO;

    vec = new int [TAMANIO];

    cout << "Tama�o del vector elegido: " << endl;

    for(int i = 0 ; i < TAMANIO ; i ++) {
        vec[i] = i + 1;
        cout << vec[i] << "\t";
    }

    delete []vec;

    system("pause");

    return 0;
}
