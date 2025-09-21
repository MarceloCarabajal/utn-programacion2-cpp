#pragma once

class CuentaBancaria{
private:
    int _numCuenta;
    float _saldoActual;
public:
    //constructor
    CuentaBancaria(int numCuenta, float saldoActual);
    //metodos
    void depositar(float monto);
    void retirar(float monto);
    float obtenerSaldo() const;
    //getter
    int getNumCuenta() const;
};
