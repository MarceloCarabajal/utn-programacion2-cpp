#include <iostream>
#include <string>
#include "Tarea.h"
#include "TareaManager.h"
using namespace std;

std::string cargarCadena(){
    std::string texto;
    if(std::cin.peek() == '\n'){
        std::cin.ignore();
    }
    std::getline(std::cin, texto);
    return texto;
}

TareaManager::TareaManager(){

}

void TareaManager::cargarTarea(){
    int id;
    bool finalizada;
    string descripcion;

    id = _repo.getNuevoId();
    cout << "Tarea #: " << id << endl;

    cout << "Ingrese descripcion de la tarea: ";
    descripcion = cargarCadena();

    cout << "Estado (1=Si, 0=No): ";
    cin >> finalizada;

    Tarea tarea(id, descripcion, Fecha(5,10,2025), finalizada);

    if(_repo.guardar(tarea)){
        cout << "Tarea guardada exitosamente." << endl;
    } else {
        cout << "Error al guardar la tarea." << endl;
     }
}
void TareaManager::listarTarea(){
    int cantidad = _repo.getCantidadRegistros();

    for(int i = 0; i <cantidad; i++){
        Tarea tarea = _repo.leer(i);
        mostrarTarea(tarea);
        cout << " ------------------------ " << endl;
    }
}

void TareaManager::mostrarTarea(Tarea tarea){
    cout << "ID: " << tarea.getId() << endl;
    cout << "Descripcion: " << tarea.getDescripcion() << endl;
    cout << "Fecha: " << tarea.getFecha().toString() << endl;
    cout << "Finalizada: " << (tarea.getCompletado() ? "Si" : "No") << endl;
}

void TareaManager::marcarTarea(){
    int id, pos;
    char completado;
    Tarea tarea;

    cout << "--- Marcar tarea ---" << endl;
    cout << "Ingrese id de la tarea: " << endl;
    cin >> id;

    pos = _repo.buscarId(id);


    if(pos == -1){
        cout << "La tarea no se encuentra en el archivo!" << endl;
        return;
    }

    tarea = _repo.leer(pos);

    cout << "Informacion de la tarea: " << endl;
    mostrarTarea(tarea);

    cout << endl << "Esta completa? S/N: ";
    cin >> completado;

    if(completado == 's' or completado == 'S'){
        tarea.setCompletado(true);
    } else {
        tarea.setCompletado(false);
    }

    if(_repo.guardar(pos, tarea)){
        cout << "La tarea fue actualizada correctamente" << endl;
    } else {
        cout << "Ocurrio un error en la actualizacion de la tarea" << endl;
    }
}

void TareaManager::eliminarTarea(){
    int id, pos;
    Tarea tarea;
    char eliminado;

    cout << "--- Marcar tarea ---" << endl;
    cout << "Ingrese id de la tarea: " << endl;
    cin >> id;

    pos = _repo.buscarId(id);


    if(pos == -1){
        cout << "La tarea no se encuentra en el archivo!" << endl;
        return;
    }

    tarea = _repo.leer(pos);

    cout << "Informacion de la tarea: " << endl;
    mostrarTarea(tarea);

    cout << endl << "Quiere eliminarla? S/N: ";
    cin >> eliminado;

    if(eliminado == 's' or eliminado == 'S'){
        if(_repo.eliminar(pos)){
            cout << "La tarea fue eliminada correctamente"
        }
    } else {
        cout << "Ocurrio un error en la eliminacion de la tarea" << endl;
    }
}

