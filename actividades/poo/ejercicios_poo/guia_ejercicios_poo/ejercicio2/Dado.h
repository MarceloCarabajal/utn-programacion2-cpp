#pragma once
#include <cstdlib> //rand, srand
#include <ctime> //time

class Dado{
private:
    int _valor;
public:
    Dado();
    void lanzar();
    int getValor() const;
    bool esMaximo() const;
    bool esMinimo() const;
};
