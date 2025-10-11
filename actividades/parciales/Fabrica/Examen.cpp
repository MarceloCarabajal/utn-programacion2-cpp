#include <iostream>
using namespace std;

#include "Examen.h"
#include "OrdenProduccion.h"
#include "ArchivoOrdenProduccion.h"

void Examen::EjemploDeListado(){
   ArchivoOrdenProduccion archivo("ordenes_produccion.dat");
   OrdenProduccion registro;

   int i, cantidadRegistros = archivo.CantidadRegistros();
   for(i = 0; i < cantidadRegistros; i++){
      registro = archivo.Leer(i);
      cout << registro.toCSV() << endl;
   }
}

/**
    Indicar el numero de maquina que mas tiempo de trabajo haya registrado en el primer semestre de 2024
*/
void Examen::Punto1(){
    ArchivoOrdenProduccion archivo("ordenes_produccion.dat");
    OrdenProduccion registro;

    float tiempoPorMaquina[15] ={0};
    int cantidadRegistros = archivo.CantidadRegistros();

    for(int i = 0; i < cantidadRegistros; i++){
        registro = archivo.Leer(i);

        if(registro.getFecha().getAnio() == 2024 && registro.getFecha().getMes() >= 1 && registro.getFecha().getMes() <= 6){
            tiempoPorMaquina[registro.getIDMaquina() - 1] += registro.getTiempoEnHoras();
        }
    }

    int maximoMaquina = 0;

    for(int i = 1; i< 15; i++){
        if(tiempoPorMaquina[i] > tiempoPorMaquina[maximoMaquina]){
            maximoMaquina = i;
        }
    }

    cout << "La maquina con mas tiempo en primer semestre 2024 es: " << maximoMaquina + 1 << endl;
}

/**
    La cantidad de maquinas distintas que gastaron mas de 90000 en total entre todas las producciones del tipo de pieza 15 que realizaron
*/
void Examen::Punto2(){
    ArchivoOrdenProduccion archivo("ordenes_produccion.dat");
    OrdenProduccion registro;

    float gastosPorMaquina[15] = {0};
    int cantidadRegistros = archivo.CantidadRegistros();

    for(int i = 0; i < cantidadRegistros; i++){
        registro = archivo.Leer(i);

        if(registro.getIDTipoPieza() == 15){
            gastosPorMaquina[registro.getIDMaquina() - 1] += registro.getCosto();
        }
    }

    int cantidadMaquinas = 0;

    for(int i = 0; i < 15; i++){
        if(gastosPorMaquina[i] >90000){
            cantidadMaquinas++;
        }
    }

    cout<< "La cantidad de maquinas que gastaron mas de 90000 en tipo de pieza 15 es: " << cantidadMaquinas << endl;
}

/**
    Las maquinas que hayan utilizado mas materia prima en el 2025 que en el 2024
*/
void Examen::Punto3(){
    ArchivoOrdenProduccion archivo("ordenes_produccion.dat");
    OrdenProduccion registro;

    float materiaPrima2024[15] = {0};
    float materiaPrima2025[15] = {0};
    int cantidadRegistros = archivo.CantidadRegistros();

    for(int i = 0; i < cantidadRegistros; i++){
        registro = archivo.Leer(i);

        if(registro.getFecha().getAnio() ==2024){
            materiaPrima2024[registro.getIDMaquina() - 1] += registro.getCantidadMateriaPrima();
        }
        else if(registro.getFecha().getAnio() == 2025){
            materiaPrima2025[registro.getIDMaquina()- 1] += registro.getCantidadMateriaPrima();
        }
    }

    bool hayResultados = false;

    for(int i = 0; i < 15; i++){
        if(materiaPrima2025[i] > materiaPrima2024[i]){
            cout << "Maquina " << i + 1 << " - 2024: " << materiaPrima2024[i] << ", 2025: " << materiaPrima2025[i] << endl;
            hayResultados = true;
        }
    }

    if(!hayResultados){
        cout<< "Ninguna maquina utilizo mas materia prima en 2025 que en 2024" << endl;
    }
}
