#include <iostream>

using namespace std;

void cargarVector(int v[], int tam);
void mostrarVector(int v[], int tam);

///El nombre de un vector contiene la posici�n inicial del vector en la memoria
///Las variables que almacenan direcciones son punteros
///El nombre de un vector un PUNTERO CONSTANTE QUE CONTIENE LA DIRECCION DE INICIO DEL VECTOR

/// & operador de direcci�n: si lo pongo delante de un nombre de variable me da la direcci�n

/// * operador de indirecci�n: si lo pongo delante de un puntero me da lo que contiene la
/// direcci�n que almacena el puntero

int main(){
    const int TAM=5;
    int vec[TAM];
    cargarVector(vec, TAM);
    mostrarVector(vec,TAM);
	cout<<endl;
	system("pause");
	return 0;

}

void cargarVector(int *v, int tam){
    int i;
    for(i=0;i<tam;i++){
        *(v+i)=i+1;
    }
}

void mostrarVector(int *v, int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<*(v+i)<<"\t";
    }
}

/*
ARITMETICA DE PUNTEROS: si a una direcci�n se le suma un valor entero, esa direcci�n
se incrementa una cantidad de bytes equivalente al tama�o del tipo de datos multiplicado
por el n�mero

	v=&v[0]

	(v+1)=&v[0]+1 -> &v[1]

	(v+2)=&v[2]

	(v+N)=&v[N]

	*(v+N)=*&v[N]

	*(v+N)=v[N]

*/
