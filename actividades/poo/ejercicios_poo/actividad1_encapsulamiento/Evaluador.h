#pragma once
#include "Postulante.h"

class Evaluador{
    private:
        int _edadMin;
        int _edadMax;
        int _expMin;
        string _puestosAceptados[3];

        int _totalEvaluados;
        int _totalRechazados;
    public:
        Evaluador();
        Evaluador(int edadMin, int edadMax, int expMin, string puestos[], int cantidad);

        bool evaluar(Postulante& p);

        int getTotalEvaluados();
        int getTotalRechazados();
};
