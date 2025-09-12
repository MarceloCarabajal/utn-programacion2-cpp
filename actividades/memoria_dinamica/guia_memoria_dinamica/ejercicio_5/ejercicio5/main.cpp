/// Marcelo Carabajal
/// UTN FRGP - TUP
/// Tema: Memoria dinámica
/// Ejercicio n° 5

/**
Hacer una función que reciba un vector de enteros y su tamaño y
luego muestre el vector ordenado de forma ascendente, tener en
cuenta que el vector enviado como argumento no debe ser modificado.
*/

#include <iostream>

using namespace std;

void mostrarVectorAsc(int *v, int tam){
    int* copia = nullptr;
    copia = new int[tam];

    for(int i=0; i<tam; i++){
        copia[i] = v[i];
    }

    // burbuja por simplicidad
    for(int i=0; i<tam; i++){
        for(int j=0; j<tam-i-1; j++){
            if(copia[j] > copia[j+1]){
                int temp = copia[j];
                copia[j] = copia[j+1];
                copia[j+1] = temp;
            }
        }
    }

    cout << "vector ordendado ascendentemente: ";
    for (int i=0; i<tam; i++){
        cout << copia[i] << " ";
    }
    cout << endl;

    delete[] copia;

}

int main()
{
    int tamanio;
    cout << "ingrese tamanio: ";
    cin >> tamanio;

    int* vec = nullptr;
    vec = new int[tamanio];

    cout << "Ingrese los numeros: " << endl;
    for (int i=0; i<tamanio; i++){
        cout << "-- num#" << i+1 << " :";
        cin >> vec[i];
    }

    cout << "Vector original: ";
    for (int i=0; i<tamanio; i++){
        cout << vec[i] << " ";
    }

    cout << endl;

    mostrarVectorAsc(vec, tamanio);

    cout << "Vector original despues de la funcion: ";
    for (int i=0; i<tamanio; i++){
        cout << vec[i] << " ";
    }

    delete[] vec;

    return 0;
}
