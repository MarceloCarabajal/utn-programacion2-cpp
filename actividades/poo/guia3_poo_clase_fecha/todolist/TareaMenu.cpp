#include <iostream>
#include "TareaMenu.h"
using namespace std;

TareaMenu::TareaMenu(){
    _cantidadOpciones = 4;
}
void TareaMenu::mostrar(){
    int opcion;

    do{
       system("cls");
       opcion = seleccionOpcion();
       system("cls");
       ejecutarOpcion(opcion);
       system("pause");
    } while(opcion != 0);
}

void TareaMenu::mostrarOpciones(){
    cout << "... Menu tareas ..." << endl;
    cout << "1- Cargar tarea" << endl;
    cout << "2- Mostrar tareas" << endl;
    cout << "3- Marcar tarea" << endl;
    cout << "4- Eliminar tarea" << endl;
    cout << "0- Salir" << endl;
}
int TareaMenu::seleccionOpcion(){
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
void TareaMenu::ejecutarOpcion(int opcion){
    switch(opcion){
    case 1:
        _tareaManager.cargarTarea();
        break;
    case 2:
        _tareaManager.listarTarea();
        break;
    case 3:
        _tareaManager.marcarTarea();
        break;
    case 4:
        break;
    case 0:
        break;
    default:
        cout << "Opcion incorrecta ..." << endl;
    }
}
