///Fecha:
///Autor:
///Comentario:

#include <iostream>

using namespace std;

///Encapsulamiento: las variables sólo pueden ser accedidas dentro de la propia clase
///Clase: es un molde donde se define las propiedades y el comportamiento que tendrán
///los objetos de esa clase
///Objetos: son variables de una clase. Una instancia de una clase.
///Los objetos tienen un estado, que es el valor de sus propiedades en un determinado
///momento


class Fecha{
    private:/// lo que se pone en la parte privada solo es accesible DENTRO DE LA CLASE
        int dia, mes, anio;///encapsuladas las variables de la clase, o propiedades
    public:/// es accesible DENTRO y FUERA DE LA CLASE.
        ///métodos o funciones de la clase. Determinan el comportamiento
        void Mostrar();
        void Cargar();
        bool compararFechas(Fecha otraFecha);
        void mostrarConLetras();
        ///gets
        int getDia(){return dia;}
        int getMes(){return mes;}
        int getAnio(){return anio;}

        ///sets
        void setDia(int d){
            if(d>=1 && d<=31) dia=d;
            else dia=-1;
        }

        void setMes(int d){
            if(d>=1 && d<=12) mes=d;
            else mes=-1;
        }

        void setAnio(int d){
            if(d>0) anio=d;
            else anio=-1;
        }
        bool fechaOK(){
            if(dia!=-1 && mes!=-1 && anio!=-1) return true;
            return false;
        }
};

void Fecha::Mostrar(){
    cout<<dia<<"/"<<mes<<"/"<<anio<<endl;
}

void Fecha::Cargar(){
    int _dia, _mes,_anio;
    cout<<"DIA ";
    cin>>_dia;
    setDia(_dia);

    cout<<"MES ";
    cin>>_mes;
    setMes(_mes);

    cout<<"ANIO ";
    cin>>_anio;
    setAnio(_anio);
}

bool Fecha::compararFechas(Fecha otraFecha){
    return (dia == otraFecha.getDia() && mes == otraFecha.getMes() && anio == otraFecha.getAnio());
}

void Fecha::mostrarConLetras(){
    cout << dia << " de ";
    switch(mes){
        case 1: cout << "ENERO"; break;
        case 2: cout << "FEBRERO"; break;
        case 3: cout << "MARZO"; break;
        case 4: cout << "ABRIL"; break;
        case 5: cout << "MAYO"; break;
        case 6: cout << "JUNIO"; break;
        case 7: cout << "JULIO"; break;
        case 8: cout << "AGOSTO"; break;
        case 9: cout << "SEPTIEMBRE"; break;
        case 10: cout << "OCTUBRE"; break;
        case 11: cout << "NOVIEMBRE"; break;
        case 12: cout << "DICIEMBRE"; break;
        default: cout << "MES INVALIDO"; break;
    }
    cout << " de " << anio << endl;
}

///Funciones globales: son funciones que están declaradas y desarrolladas fuera de
/// toda clase
void CargarFechas(Fecha v[], int tam){
    for(int i=0; i<tam; i++){
        cout << "\n Fecha " << i+1 << "\n";
        v[i].Cargar();
    }
}

void MostrarFechas(Fecha v[], int tam){
    for(int i=0; i<tam; i++){
        if(v[i].fechaOK()){
            cout << "Fecha " << i+1 << ": ";
            v[i].Mostrar();
        } else {
            cout << "Fecha " << i+1 << ": tiene valores incorrectos" << endl;
        }
    }
}

///Métodos: son funciones que pertenecen a una clase en particular.

int main(){
//    Fecha reg, obj;
//    reg.Cargar();
//    int valor;
//    /*cout<<"INGRESAR EL DIA ";
//    cin>>valor;
//    reg.setDia(valor);
//    cout<<"INGRESAR EL MES ";
//    cin>>valor;
//    reg.setMes(valor);
//    cout<<"INGRESAR EL ANIO ";
//    cin>>valor;
//    reg.setAnio(valor);*/
//    //reg.Mostrar();
//    cout<<"DIA "<<reg.getDia()<<endl;
//    cout<<"DIA "<<reg.getMes()<<endl;
//    cout<<"DIA "<<reg.getAnio()<<endl;
//
//    //obj=reg;
//    //obj.Mostrar();
//    if(reg.fechaOK())reg.Mostrar();
//    else cout<<"LA FECHA CONTIENE VALORES INCORRECTOS"<<endl;
//	system("pause");

/// Ejercitacion

//    const int TAM = 5;
//    Fecha v[TAM];
//
//    CargarFechas(v, TAM);
//    MostrarFechas(v, TAM);

    Fecha f1, f2;

    cout << "Cargar primera fecha: " << endl;
    f1.Cargar();
    cout << "Cargar segunda fecha: " << endl;
    f2.Cargar();

    cout << "\nFecha 1: ";
    f1.Mostrar();
    cout << "Fecha 1 con letras: ";
    f1.mostrarConLetras();

    cout << "\nFecha 2: ";
    f2.Mostrar();
    cout << "Fecha 2 con letras: ";
    f2.mostrarConLetras();

    cout << "\nComparacion: ";
    if(f1.compararFechas(f2)) cout << "Las fechas son Iguales" << endl;
    else cout << "Fechas distintias" << endl;

    system("pause");
	return 0;

}
