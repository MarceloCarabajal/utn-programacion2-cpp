#include <iostream>

using namespace std;


bool * crearAsistentes(int &cantidad){
    bool * asistentes;

    cout << "ingrese la cantidad de asistentes: ";
    cin >> cantidad;

    asistentes = new bool[cantidad]{};

    if(asistentes == nullptr) {
        cout << "no hay memoria suficiente" << endl;
        exit(-1000);
    }

    return asistentes;
}

void marcarAsistente(bool asistentes[], int cantidadAsistentes){
    int nAsistente;
    cout << "ingrese num de asistente: ";
    cin >> nAsistente;

    if(nAsistente <= cantidadAsistentes && cantidadAsistentes >=1) {
        asistentes[nAsistente-1] = true;
    } else {
        cout << "asistente incorrecto!" << endl;
    }
}

void mostrarAsistentes(bool asistentes[], int cantidadAsistentes){
    for(int i=0; i <cantidadAsistentes; i++){
        if(asistentes[i]){
            cout << "asistente #" << i+1 << " asistio" << endl;
        } else {
            cout << "asistente #" << i+1 <<" no asistio" << endl;
        }
    }
}

int main()
{
    int opcion, cantidadAsistentes;
    bool *asistentes = nullptr;

    do {
        cout << "1 - cargar asistente" << endl;
        cout << "2 - marcar" << endl;
        cout << "3 - mostrar" << endl;
        cout << "0 - salir" << endl;

        cout << "opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                if(asistentes != nullptr){
                    delete [] asistentes;
                }
                asistentes = crearAsistentes(cantidadAsistentes);
                break;
            case 2:
                if(asistentes != nullptr){
                    delete [] asistentes;
                } else {
                    cout << "no hay asistentes" << endl;
                }
                marcarAsistente(asistentes, cantidadAsistentes);
                break;
            case 3:
                mostrarAsistentes(asistentes, cantidadAsistentes);
                break;
            case 0:
                cout << "gracias por usar mi app ..." << endl;
                if(asistentes != nullptr){
                    delete [] asistentes;
                }
                break;
            }

    } while(opcion != 0);
    return 0;
}
