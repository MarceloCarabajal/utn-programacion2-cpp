/// Marcelo Carabajal
/// UTN FRGP - TUP
/// Tema: Memoria dinámica
/// Ejercicio n° 6

/**
Escribe un programa que solicite al usuario ingresar una lista
de 10 números enteros. Luego, el programa debe mostrar los números
pares distintos que se ingresaron. Para resolver este ejercicio,
deberás implementar una función que reciba un vector de enteros y
su tamaño, y que devuelva un puntero a un vector dinámico que
contenga solo los números pares distintos del vector recibido.

*/

/*
Ejemplo: numeros[10] = {1, 22, 4, 22, 5, 6, 6, 8, 9, 11);

Mostraria -> {4, 8}
*/


#include <iostream>

using namespace std;


int* obtenerParesDistintos(int* vec, int tam, int& cantPares){
    int* aux = new int[tam];
    cantPares = 0;

    for(int i=0; i<tam; i++){
        if(vec[i]%2 == 0){
            bool yaExiste = false;

            for(int j=0; j<cantPares; j++){
                if(aux[j] == vec[i]) {
                    yaExiste = true;
                    break;
                }
            }

            if(!yaExiste){
                aux[cantPares] = vec[i];
                cantPares++;
            }
        }
    }

    int* paresDistintos = nullptr;
    if(cantPares > 0){
        paresDistintos = new int[cantPares];
        for(int i=0; i<cantPares; i++) {
            paresDistintos[i] = aux[i];
        }
    }

    delete[] aux;
    return paresDistintos;
}


int main()
{
    const int N = 10;
    int numeros[N];

    cout << "Ingrese " << N << " numeros enteros: "<< endl;
    for(int i=0; i<N; i++){
        cout << "-- Num #" << i+1 << ": ";
        cin >> numeros[i];
    }

    int cantPares = 0;
    int* pares = nullptr;
    pares = obtenerParesDistintos(numeros, N, cantPares);

    cout << "\nNumeros de pares distintos ingresados: ";
    if(cantPares == 0){
        cout << "No se ingresaron numeros pares";
    } else {
        for(int i=0; i<cantPares; i++){
            cout << pares[i] << " ";
        }
    }

    cout << endl;

    delete[] pares;
    return 0;
}
