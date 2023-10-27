#pragma once

#include <iostream>
#include <Vector.hpp>
#include <Dibujo.hpp>

using namespace std;

class Proyectil : public Dibujo, public Actualizable
{
private:
    int tiempoVida;
public:
    Proyectil(Vector posicion) : Dibujo(posicion.LeerX(), posicion.LeerY(), "proyectil")
    {
        this->tiempoVida = 100;
    }

    ~Proyectil(){}

    void Actualizar()
    {
        this->posicion.DesplazarY(-1);
    }
};