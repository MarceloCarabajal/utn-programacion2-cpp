#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main() {
    string name = "Pepe";
    FILE *p;
    p = fopen("alumnos.txt", "rb");
    /**
        tipos de lecturas:
        rb: lectura binaria -> abre un archivo en modo de lectura. NO crea archivo
        ab: abre un archivo en modo de escritura. Si no existe el archivo, lo crea.
        wb: abre un archivo en modo de escritura. SIEMPRE crea un archivo vacio.
    */
    if(p==nullptr){
        cout << "Error al abrir el archivo." << endl;
        return -1;
    }

    ///Uso mi archivo
    ///fread(&name, sizeof name, 1, p);
    /**
        El fread lee informacion de mi archivo y la carga en memoria ram (en un objeto del tipo que sea mi registro)
        El fread desplaza un cursor a medida que va leyendo. una vez que llega al end of file (eof), ya no puede seguir
        leyendo
        Parametros fread:
        - direccion de memoria (RAM) donde se copia la info desde el archivo (disco)
        - cantidad de bytes que tiene un registro
        - cantidad de registros que quiero leer
        - vinculo entre mi programa y el archivo (puntero FILE sobre el que hice el fopen)
    */
    fwrite(&name, sizeof name, 1, p);
    /**
        copia la informacion que esta en mi objeta en la memoria ram y la lleva al archivo.
        Parametros fwrite:
        - la direccion de memoria (RAM) donde esta la informacion que quiero grabar en mi archivo.
        - la cantidad de bytes de mi registro
        - la cantidad de registros que quiero guardar en mi archivo.
        - el vinculo entre mi programa y el archivo (puntero FILE sobre el que hice el fopen).
    */

    ///Termine de usar mi archivo
    fclose(p);



    const int TAM = 2;
    string vAlu[TAM];

    // Cargar alumnos
    cout << "Ingrese los nombres de los alumnos:" << endl;
    for(int i = 0; i < TAM; i++) {
        cout << "Alumno " << (i+1) << ": ";
        getline(cin, vAlu[i]);
    }

    // Mostrar alumnos
    cout << "\nLista de Alumnos:" << endl;
    for(int i = 0; i < TAM; i++) {
        cout << (i+1) << ". " << vAlu[i] << endl;
    }

    return 0;
}
