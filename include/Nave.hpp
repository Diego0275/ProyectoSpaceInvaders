#pragma once

#include <iostream>
#include <Vector.hpp>
#include <Dibujo.hpp>

using namespace std;

class Nave
{
private:
    /* data */
public:
    Nave() : Dibujo("Nave")
    {
        this->posicion = Vector();
    }

    Nave(int x, int y) : Dibujo("Nave")
    {
        this->posicion.DesplazarX(x);
        this->posicion.DesplazarY(y);
    }

    ~Nave() {}

    void Avanzar(){
        this->posicion.DesplazarX(1);
    }

    void CambiarDireccion(){
        this->posicion.CambiarDireccionX();
        this->posicion.DesplazarX(1);
    }

    Vector LeerPosicion(){
        return this->posicion;
    }
};