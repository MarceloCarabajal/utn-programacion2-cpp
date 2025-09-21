#pragma once

class Triangulo{
private:
    float _lados[3];
public:
    Triangulo(float l1 = 1, float l2 = 1, float l3 = 1);
    float getLado(int numero) const;
    void setLado(int numero, float valor);

    int getTipo() const; // 1=equilatero, 2=isosceles, 3=escaleno

    bool isEscaleno() const;
    bool isIsosceles() const;
    bool isEquilatero() const;
};
