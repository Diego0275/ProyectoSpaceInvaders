#pragma once

#include <iostream>
#include <Vector.hpp>
#include <Dibujo.hpp>

using namespace std;

class Bonus : public Dibujo, public Actualizable
{
private:
    /* data */
public:
    Bonus() : Dibujo("Bonus")
    {
        this->posicion = Vector();
    }

    Bonus(int x, int y) : Dibujo("Bonus")
    {
        this->posicion.DesplazarX(x);
        this->posicion.DesplazarY(y);
    }

    ~Bonus() {}

    void Actualizar()
    {
        this->posicion.DesplazarX(1);
        this->posicion.CambiarDireccionX();
    }
};