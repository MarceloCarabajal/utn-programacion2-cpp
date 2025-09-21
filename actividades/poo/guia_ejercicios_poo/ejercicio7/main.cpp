#include <iostream>

#include "Usuario.h"

using namespace std;

int buscarUsuario(Usuario usuarios[], int cantidad, const string &nombre, const string &clave){
    for(int i = 0; i < cantidad; i++){
        if(usuarios[i].getNombre() == nombre && usuarios[i].getClave() == clave){
            return i;
        }
    }
    return -1;
}

void mostrarSaludo(const Usuario &usuario){
    cout << "\nBienvenido al sistema " << usuario.getNombre() << "!" << endl;
    cout << "Tu rol en el sistema es: " << usuario.getRol() << endl;

    if(usuario.getRol() == "admin") {
        cout << "Tenes permisos de administrador. Podes gestionar todo el sistema." << endl;
    } else if (usuario.getRol() == "user"){
        cout << "Tenes permiso de usuario estandar." << endl;
    }
}

int main()
{
    const int CANTIDAD_USUARIOS = 5;
    const int MAX_INTENTOS = 3;

    //cargo usuarios hardcodeados
    Usuario usuarios[CANTIDAD_USUARIOS] = {
        Usuario("juan", "123456", "admin"),
        Usuario("maria", "password", "user"),
        Usuario("carlos", "qwerty", "user"),
        Usuario("admin", "admin123", "admin"),
        Usuario("ana", "secreto", "user")
    };

    cout << " == SISTEMA DE AUTENTICACION == " << endl;
    cout << "Por favor, ingrese credenciales para acceder: " << endl;

    int intentos = 0;
    bool accesoPermitido = false;

    while (intentos < MAX_INTENTOS && !accesoPermitido) {
        string nombreIngresado, claveIngresada;

        //pido credenciales
        cout << "\nIntento " << (intentos + 1) << " de " << MAX_INTENTOS << endl;
        cout << "Nombre de usuario: ";
        getline(cin, nombreIngresado);

        cout << "Contraseña: ";
        getline(cin, claveIngresada);

        //verifico credenciales
        int indiceUsuario = buscarUsuario(usuarios, CANTIDAD_USUARIOS, nombreIngresado, claveIngresada);

        if (indiceUsuario != -1) {
            // acceso permitido
            accesoPermitido = true;
            mostrarSaludo(usuarios[indiceUsuario]);
        } else {
            // acceso incorrecto
            intentos ++;
            if(intentos < MAX_INTENTOS){
                cout << "Credenciales incorrectas, intente nuevamente." << endl;
            }
        }
    }

    if(!accesoPermitido) {
        cout << "\nSe agotaron los intentos permitidos. El programa se cerrara por seguridad." << endl;
        cout << "Hasta luego!" << endl;
    }

    return 0;
}
