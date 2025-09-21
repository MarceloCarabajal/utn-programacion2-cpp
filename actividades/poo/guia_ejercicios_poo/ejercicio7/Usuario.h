#pragma once
#include <string>

class Usuario{
    private:
        std::string _nombre;
        std::string _clave;
        std::string _rol;
    public:
        Usuario(std::string nombre, std::string clave, std::string rol);

        //Getters y Setters
        std::string getNombre() const;
        std::string getClave() const;
        std::string getRol() const;
        void setNombre(std::string nombre);
        void setClave(std::string clave);
        void setRol(std::string rol);
};
