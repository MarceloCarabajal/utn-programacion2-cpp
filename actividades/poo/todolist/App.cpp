#include <iostream>
#include "App.h"
using namespace std;

App::App(){
    _cantidadOpciones = 1;
}
void App::run(){
    int opcion;

    do{
       system("cls");
       opcion = seleccionOpcion();
       system("cls");
       ejecutarOpcion(opcion);
    } while(opcion != 0);
}

void App::mostrarOpciones(){
    cout << "... Menu principal ..." << endl;
    cout << "1-  Tareas" << endl;
    cout << "0- Salir" << endl;
}
int App::seleccionOpcion(){
    int opcion;
    mostrarOpciones();
    cout << "----------------------" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    while (opcion < 0 || opcion > _cantidadOpciones){
        cout << "Opcion incorrecta..." << endl;
        cout << "Opcion: ";
        cin >> opcion;
    }
    return opcion;
}
void App::ejecutarOpcion(int opcion){
    switch(opcion){
    case 1:
        _tareaMenu.mostrar();
        break;
    case 0:
        cout << "Gracias por utilizar mi programa." << endl;
        break;
    default:
        cout << "Opcion incorrecta ..." << endl;
        break;
    }
}
