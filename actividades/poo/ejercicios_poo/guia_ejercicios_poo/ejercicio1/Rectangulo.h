#pragma once

//Base rectangulo = base x altura
//Perimetro rectangulo = 2xbase + 2xaltura

class Rectangulo{
    private:
        float _base;
        float _altura;
    public:
        Rectangulo(float base, float altura);

        //Getters
        float getBase() const;
        float getAltura() const;

        //Setters
        void setBase(float base);
        void setAltura(float altura);

        //Metodos
        float calcularArea() const;
        float calcularPerimetro() const;
};

