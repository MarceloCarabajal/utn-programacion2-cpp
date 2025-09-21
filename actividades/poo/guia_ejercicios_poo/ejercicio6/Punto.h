#pragma once

class Punto{
    private:
        float _x;
        float _y;
    public:
        Punto(float xInicial, float yInicial);

        //Getters
        float getX() const;
        float getY() const;
        //Setters
        void setX(float x);
        void setY(float y);

        //Metodos
        float calcularDistancia(const Punto &otroPunto) const;
        void mover(float deltaX, float deltaY);
};

