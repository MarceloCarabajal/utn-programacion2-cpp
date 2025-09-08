///Crear un programa que contenga un menú con las siguientes opciones:
///1- Cargar Vector: El programa debe solicitar al usuario la cantidad de elementos
///que va a cargar, posteriormente se solicitara cuales son dichos números para
///almacenarlos en un vector utilizando asignación dinámica de memoria.
///2- Mostrar Vector: En caso de tener cargado el vector, debe mostrarlo por pantalla.
///3- Salir: Sale del programa (no olvidar liberar la memoria)
///Pista: Recordar que se puede inicializar un puntero con el valor nullptr

#include <iostream>

using namespace std;

int main()
{
    int opcion, tamanio, numero;
    float* vec = nullptr;



    do{
        cout << "-- 1 - cargar vector" << endl;
        cout << "-- 2 - mostrar vector" << endl;
        cout << "-- 3 - salir" << endl;
        cout << "Ingrese opcion: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                if(vec != nullptr){
                    delete []vec;
                }

                cout << "Ingrese la cantidad: ";
                cin >> tamanio;
                vec = new float [tamanio]{};
                cout << "Cuales seran esos numeros? vaya ingresando de a uno y presione enter: " << endl;
                for (int i=0; i<tamanio ; i++){
                    cout << "-- Num #" << i+1 << ": " << endl;
                    cin >> numero;
                    vec[i] = numero;
                }

                break;
            case 2:
                if(vec == nullptr){
                    cout << "No hay vector cargado" << endl;
                    break;
                }
                cout << "Numeros ingresados en vector:" << endl;
                for(int i = 0; i<tamanio; i++){
                    cout << "-- Num #" << i+1 << endl;
                    cout << vec[i] << endl;
                }
                break;
            case 3:
                if(vec != nullptr) {
                    delete []vec;
                }
                cout << "Hasta luego" << endl;
                return 0;
                break;
            default:
                cout << "\nOpcion inválida, vuelve a seleccionar." << endl;
                break;
        }
    } while(opcion != 0);

    delete []vec;

    return 0;
}
