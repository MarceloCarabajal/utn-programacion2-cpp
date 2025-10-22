#pragma once
#include <string>
#include "Tarea.h"

class TareaArchivo
{
    public:
        TareaArchivo(std::string nombreArchivo = "tareas.dat");
        bool guardar(Tarea registro);
        bool guardar(int pos, Tarea tarea);
        int buscarId(int id);
        int eliminar(int pos);

        //bool modificar(Tarea tarea, int pos)

        Tarea leer(int pos);
        int leerTodos(Tarea tareas[], int cantidad);
        int getCantidadRegistros();
        int getNuevoId();

    private:
        std::string _nombreArchivo;
};


