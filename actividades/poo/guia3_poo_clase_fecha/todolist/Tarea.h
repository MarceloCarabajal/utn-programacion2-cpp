#pragma once
#include "Fecha.h"

class Tarea
{
    public:
        Tarea();
        Tarea(int id, std::string descripcion, Fecha fecha, bool completado);

        void setId(int id);
        int getId();

        void setDescripcion(std::string descripcion);
        std::string getDescripcion();

        void setFecha(Fecha fecha);
        Fecha getFecha();

        void setCompletado(bool completado);
        bool getCompletado();

        std::string toString();
    private:
        int _id;
        Fecha _fecha;
        bool _completado;
        //std::string _descripcion; //MAL
        char _descripcion[300];
};
