/// Marcelo Carabajal
/// UTN FRGP - TUP
/// Tema: Memoria Dinámica
/// Ejercicio n° 7

/**
Escribir un programa que simule la gestión de un club de lectura.
El programa debe solicitar al usuario la cantidad de libros que
desea cargar y posteriormente pedir los nombres de dichos libros.
Una vez cargados los libros se debe mostrar un menú  con las
siguientes opciones:
1- Listado: Debe listar los libros en el orden en que fueron cargados.
2- Tiempo de lectura: Se solicita el nombre del libro. Si no existe debe
    mostrar un mensaje aclaratorio. Si el libro existe, ingresar la
    cantidad de minutos que le llevó su lectura.
3- Ranking: Mostrar los libros ordenados por tiempo de lectura de Mayor a Menor.
4- Salir: el programa debe salir del programa
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Ingrese la cantidad de libros a cargar: ";
    cin >> n;
    cin.ignore(); // para limpiar buffer de entrada

    //vectores dinamicos
    string* libros = new string[n];
    int* tiempos = new int[n]; // el -1 significa "sin tiempo cargado"

    cout << "\nIngrese los nombres de los libros: " << endl;
    for (int i=0; i<n; i++){
        cout << "-- Libro #" << i+1 <<": " << endl,
        getline(cin, libros[i]);
        tiempos[i] = -1;
    }

    int opcion;
    do{
        cout << "\n == MENU CLUB DE LECTURA ==" << endl;
        cout << "1 - Listado" << endl;
        cout << "2 - Tiempo de lectura" << endl;
        cout << "3 - Ranking" << endl;
        cout << "4 - Salir" << endl;
        cout << "Seleccione una ipcion: ";
        cin >> opcion;
        cin.ignore();

        switch(opcion) {
            case 1:
                cout << "\nListado de libros:" << endl;
                for (int i=0; i<n; i++){
                    cout << i+1 << ") " << libros[i];
                    if(tiempos[i] != 1){
                        cout << " (" << tiempos[i] << " min)";
                    } else {
                        cout << endl;
                    }
                }
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            default:
                cout << "Opcion invalida" << endl;
                break;
        }
    } while(opcion != 4);


    return 0;
}
