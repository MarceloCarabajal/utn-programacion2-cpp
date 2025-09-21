#include "Evaluador.h"

Evaluador::Evaluador(){
    _edadMin = 22;
    _edadMax = 50;
    _expMin = 2;
    _puestosAceptados[0] = "Programador";
    _puestosAceptados[1] = "Tester";
    _puestosAceptados[2] = "Diseñador";
    _totalEvaluados = 0;
    _totalRechazados = 0;
}
Evaluador::Evaluador(int edadMin, int edadMax, int expMin, string puestos[], int cantidad){
    _edadMin = edadMin;
    _edadMax = edadMax;
    _expMin = expMin;
    for (int i = 0; i < cantidad && i < 3; i++){
        _puestosAceptados[i] = puestos[i];
    }
    _totalEvaluados = 0;
    _totalRechazados = 0;
}

bool Evaluador::evaluar(Postulante& p){
    _totalEvaluados++;

    bool puestoValido = false;
    for (int i = 0; i < 3; i++){
        if (p.getPuesto() == _puestosAceptados[i]){
            puestoValido = true;
            break;
        }
    }

    if(p.getEdad() >= _edadMin && p.getEdad() <= _edadMax &&
       p.getExperiencia() >= _expMin && puestoValido) {
        return true; //aceptado (paso)
       } else {
        return false; //rechazado
       }
}

int Evaluador::getTotalEvaluados(){
    return _totalEvaluados;
}
int Evaluador::getTotalRechazados(){
    return _totalRechazados;
}
