#include "CuentaBancaria.h"

//constructor
CuentaBancaria::CuentaBancaria(int numCuenta, float saldoActual){
    _numCuenta = numCuenta;
    _saldoActual = saldoActual;
}
//metodos
void CuentaBancaria::depositar(float monto){
    if(monto > 0 ){
        _saldoActual += monto;
    }
}
void CuentaBancaria::retirar(float monto){
    if(monto > 0 && monto <= _saldoActual) {
        _saldoActual -= monto;
    }
}
float CuentaBancaria::obtenerSaldo() const{
    return _saldoActual;
}
//getter
int CuentaBancaria::getNumCuenta() const{
    return _numCuenta;
}
