#pragma once
#include <string>
using namespace std;

class Postulante{
    private:
        string _nombre;
        int _edad;
        string _puesto;
        int _experiencia;
    public:
        Postulante(string nombre, int edad, string puesto, int aniosExperiencia);
        // Getters
        string getNombre();
        int getEdad();
        string getPuesto();
        int getExperiencia();
};
