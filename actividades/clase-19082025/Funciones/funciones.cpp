#include <iostream>
#include "funciones.h"
using namespace std;

void linea(int cantidad, char simbolo) {
    for(int i=0; i<cantidad; i++){
        cout << simbolo;
    }
    cout << endl;
}

int pedirNumero(string mensaje){
    int n;
    cout << mensaje;
    cin >> n;

    return n;
}
