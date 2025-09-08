/// Marcelo Carabajal
/// UTN FRGP - TUP
/// Tema: Memoria dinámica
/// Ejercicio n° 3

/// Hacer un programa que solicite al usuario 10 números y luego muestre
/// primero los números positivos y luego los negativos.
/// El programa debe crear dos arrays dinámicos con la cantidad exacta en
/// cada caso: uno para almacenar los números positivos y otro para los números negativos.


#include <iostream>

using namespace std;

int main()
{
    const int N = 10;
    int cantPos = 0, cantNeg = 0;
    int idxPos = 0, idxNeg = 0;

    int numeros[N]{};

    cout << "Ingrese " << N << " numeros: " << endl;

    for(int i=0; i<N ; i++){
        cout << "Numero #" << i+1 << ": ";
        cin >> numeros[i];

        if(numeros[i] >= 0){
        cantPos ++;
        } else {
        cantNeg ++;
        }
    }

    // creo arays dinamicos
    int* positivos = nullptr;
    int* negativos = nullptr;

    if(cantPos > 0){
        positivos = new int [cantPos];
    }
    if(cantNeg > 0){
        negativos = new int [cantNeg];
    }

    // cargo los arrays
    for (int i=0; i<N; i++){
        if(numeros[i] > 0){
            positivos[idxPos] = numeros[i];
            idxPos++;
        } else {
            negativos[idxNeg] = numeros[i];
            idxNeg++;
        }
    }

    // muestro los resultados
    cout << "\nNumeros positivos: " << endl;
    if (cantPos == 0) {
        cout << "No se ingresaron positivos" << endl;
    } else {
        for(int i=0; i<cantPos; i++){
            cout << positivos[i] << " ";
        }
    }

    cout << "\nNumeros negativos: " << endl;
    if(cantNeg == 0) {
        cout << "No se ingresaron negativos" << endl;
    } else {
        for(int i=0; i<cantNeg; i++){
            cout << negativos[i] << " ";
        }
    }

    cout << endl;

    // libero memoria
    delete[] positivos;
    delete[] negativos;

    return 0;
}
