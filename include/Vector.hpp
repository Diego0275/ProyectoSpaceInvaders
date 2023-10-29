#pragma once

#include <iostream>

using namespace std;

class Vector
{
private:
    int x, y;
    int direccion_x;
    int direccion_y;

public:
    Vector()
    {
        this->direccion_x = 1;
        this->direccion_y = 1;
        this->x = 0;
        this->y = 0;
    }

    Vector(int x, int y)
    {
        this->direccion_x = 1;
        this->direccion_y = 1;
        this->x = x;
        this->y = y;
    }

    ~Vector()
    {
    }

    void CambiarDireccionX()
    {
        this->direccion_x *= -1;
    }

    void CambiarDireccionY()
    {
        this->direccion_y *= -1;
    }

    void DesplazarX(unsigned int x)
    {
        this->x += x * this->direccion_x;
    }

    void DesplazarY(unsigned int y)
    {
        this->y += y * this->direccion_y;
    }

    int LeerX()
    {
        return this->x;
    }

    int LeerY()
    {
        return this->y;
    }
};