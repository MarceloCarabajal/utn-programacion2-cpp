#include <iostream>
#include "Destornillador.h"
using namespace std;

Destornillador::Destornillador(float peso, float longitud, const string &tipoPunta) : Herramienta(peso, longitud)
{
    _nombre = "Destornillador";
    _tipoPunta = tipoPunta;
}
//Getter y Setter
string Destornillador::getTipoPunta() const
{
    return _tipoPunta;
}
void Destornillador::setTipoPunta(string &tipoPunta)
{
    _tipoPunta = tipoPunta;
}
void Destornillador::mostrarInformacion() const
{
    Herramienta::mostrarInformacion();
    cout << " | Tipo punta: " << _tipoPunta << endl;
}
