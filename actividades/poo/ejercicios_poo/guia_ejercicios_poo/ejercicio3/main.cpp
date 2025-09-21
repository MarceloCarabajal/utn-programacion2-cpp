#include <iostream>
#include "CuentaBancaria.h"
using namespace std;

int main()
{
    CuentaBancaria c1(123123, 1000.0f);

    cout << "Cuenta numero: " << c1.getNumCuenta() << endl;
    cout << "Saldo actual: " << c1.obtenerSaldo() << endl;

    c1.depositar(500);
    cout << "Luego de depositar 500: " << c1.obtenerSaldo() << endl;

    c1.retirar(200);
    cout << "Luego de retirar 200: " << c1.obtenerSaldo() << endl;

    c1.retirar(2000);
    cout << "Intento retirar 2000 (fondos insuficientes): " << c1.obtenerSaldo() << endl;

    return 0;
}
