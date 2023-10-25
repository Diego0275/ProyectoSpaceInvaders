#pragma once

#include <iostream>
#include <Vector.hpp>
#include <Dibujo.hpp>

using namespace std;

class Barrera : public Dibujo
{
private:
    /* data */
public:
    Barrera() : Dibujo("Muro")
    {
        this->posicion = Vector();
    }

    Barrera(int x, int y) : Dibujo("Muro")
    {
        this->posicion.DesplazarX(x);
        this->posicion.DesplazarY(y);
    }

    ~Barrera() {}
};