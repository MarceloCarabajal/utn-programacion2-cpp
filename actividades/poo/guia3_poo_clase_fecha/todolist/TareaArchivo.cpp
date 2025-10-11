#include "TareaArchivo.h"

TareaArchivo::TareaArchivo(std::string nombreArchivo)
: _nombreArchivo(nombreArchivo){

}

bool TareaArchivo::guardar(Tarea registro){
    FILE *pFile;
    bool result;

    pFile = fopen(_nombreArchivo.c_str(), "ab");

    if(pFile == nullptr){
        return false;
    }

    result = fwrite(&registro, sizeof(Tarea), 1, pFile);

    fclose(pFile);

    return result;
}

Tarea TareaArchivo::leer(int pos){
    FILE *pFile;
    bool result;
    Tarea registro;

    pFile = fopen(_nombreArchivo.c_str(), "rb");

    if(pFile == nullptr){
        registro.setId(-1);
        return registro;
    }

    /**
        SEEK_SET -> SE DESPLAZA DESDE EL INICIO
        SEEK_CUR -> SE DESPLAZA DESDE LA POSICION ACTUAL
        SEEK_END -> SE DESPLAZA DESDE EL FINAL
    */

    //Posiciona el cursor al inicio del registro
    fseek(pFile, pos * sizeof(Tarea), SEEK_SET);

    result = fread(&registro, sizeof(Tarea), 1, pFile);

    if(!result){
        registro.setId(-1);
    }

    fclose(pFile);

    return registro;
}


bool TareaArchivo::guardar(int pos, Tarea registro){
    FILE *pFile;
    bool result;

    pFile = fopen(_nombreArchivo.c_str(), "rb+");

    if(pFile == nullptr){
        return false;
    }

    /**
        SEEK_SET -> SE DESPLAZA DESDE EL INICIO
        SEEK_CUR -> SE DESPLAZA DESDE LA POSICION ACTUAL
        SEEK_END -> SE DESPLAZA DESDE EL FINAL
    */

    //Posiciona el cursor al inicio del registro
    fseek(pFile, pos * sizeof(Tarea), SEEK_SET);

    result = fwrite(&registro, sizeof(Tarea), 1, pFile);

    fclose(pFile);

    return result;
}

int TareaArchivo::getCantidadRegistros(){
    FILE *pFile;
    bool result;
    int cantidad;;

    pFile = fopen(_nombreArchivo.c_str(), "rb");

    if(pFile == nullptr){
        return 0;
    }

    /**
        SEEK_SET -> SE DESPLAZA DESDE EL INICIO
        SEEK_CUR -> SE DESPLAZA DESDE LA POSICION ACTUAL
        SEEK_END -> SE DESPLAZA DESDE EL FINAL
    */

    //Posiciona el cursor EN EL FINAL del registro
    fseek(pFile, 0, SEEK_END);
    //ftell da el byte donde esta el cursor actualmente
    cantidad = ftell(pFile) / sizeof(Tarea);

    fclose(pFile);

    return cantidad;
}

int TareaArchivo::getNuevoId(){
    return getCantidadRegistros() + 1;
}

int TareaArchivo::buscarId(int id){
    FILE *pFile;
    Tarea registro;
    int pos = -1;

    pFile = fopen(_nombreArchivo.c_str(), "rb");

    if(pFile == nullptr){
        return -1;
    }

    /**
        SEEK_SET -> SE DESPLAZA DESDE EL INICIO
        SEEK_CUR -> SE DESPLAZA DESDE LA POSICION ACTUAL
        SEEK_END -> SE DESPLAZA DESDE EL FINAL
    */


    while(fread(&registro, sizeof(Tarea), 1, pFile)){
        if(registro.getId() == id){
            pos = ftell(pFile) / sizeof(Tarea) - 1;
            break;
        }
    }

    fclose(pFile);

    return pos;
}

int TareaArchivo::eliminar(int pos){
    Tarea tarea = leer(pos);

    if(tarea.getId() != -1){
        tarea.setEliminado(true);
        return guardar(pos, tarea);
    }

    return false;
}
