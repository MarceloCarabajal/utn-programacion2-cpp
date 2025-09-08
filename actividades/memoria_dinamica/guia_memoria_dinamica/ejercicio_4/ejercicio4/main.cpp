/// Marcelo Carabajal
/// UTN FRGP - TUP
/// Tema: Memoria dinámica
/// Ejercicio n° 4

///Hacer una función que reciba un vector de enteros y su tamaño y
///devuelva la cantidad de números distintos que se repiten en el vector.

// 1 3 3 4 5 5
// 1 -> 1 vez
// 3 -> 2 veces
// 4 -> 1 vez
// 5 -> 2 veces

//2 -> 3 y 5


#include <iostream>

using namespace std;

int contarRepetidos(int* vec, int tamanio) {
    int cantidad = 0;

    for(int i= 0; i<tamanio; i++) {
        bool yaContado = false;

        for(int j=0; j<i; j++){
            if (vec[i] == vec[j]){
                yaContado = true;
                break;
            }
        }

        if (!yaContado) {
            int apariciones = 0;

            for (int m=0; m<tamanio; m++){
                if(vec[i] == vec[m]){
                    apariciones++;
                }
            }
            if(apariciones >1) {
                cantidad++;
            }
        }

    }

    return cantidad;

}

int main()
{
    int tamanio;
    cout << "ingrese cantidad de numeros: " << endl;
    cin >> tamanio;

    int* vec = nullptr;
    vec = new int[tamanio];
    cout << "ingrese los numeros: " << endl;
    for (int i=0; i<tamanio; i++){
        cout << "num #" << i+1 << ": ";
        cin >> vec[i];
    }

    int repetidos = contarRepetidos(vec, tamanio);

    cout << "\nCantidad de numeros distintos que se repiten: " << repetidos << endl;

    delete [] vec;

    return 0;
}
