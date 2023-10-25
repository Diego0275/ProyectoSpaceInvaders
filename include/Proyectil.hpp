#pragma once

#include <iostream>
#include <Vector.hpp>
#include <Dibujo.hpp>

using namespace std;

class Proyectil : public Dibujo, public Actualizable
{
private:
    /* data */
public:
    Proyectil() : Dibujo("Proyectil")
    {
        this->posicion = Vector();
    }

    Proyectil(int x, int y) : Dibujo("Proyectil")
    {
        this->posicion.DesplazarX(x);
        this->posicion.DesplazarY(y);
    }

    ~Proyectil() {}

    void Actualizar()
    {
        this->posicion.DesplazarY(-1);
    }
};