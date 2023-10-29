#pragma once

#include <iostream>
#include <Vector.hpp>
#include <Dibujo.hpp>

using namespace std;

class Alien : public Dibujo, public Actualizable
{
private:
    /* data */
public:
    Alien() : Dibujo("Alien1")
    {
        this->posicion = Vector();
    }

    Alien(int x, int y) : Dibujo("Alien1")
    {
        this->posicion.DesplazarX(x);
        this->posicion.DesplazarY(y);
    }

    ~Alien() {}

    void Actualizar()
    {
        this->posicion.DesplazarX(1);
        //this->posicion.CambiarDireccionX();
    }
};