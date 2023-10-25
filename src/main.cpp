#include <iostream>
#include <string>
#include <filesystem>
#include <fstream>
#include <list>
#include <curses.h>
#include <Actualizable.hpp>
#include <Ventana.hpp>
#include <Nave.hpp>
#include <Barrera.hpp>
#include <Proyectil.hpp>
#include <Alien.hpp>
#include <Bonus.hpp>

int main(int argc, char const *argv[])
{
    //Objetos

    //Lista de dibujos
    list<Dibujo *> dibujos;

    //Lista de actualizables
    list<Actualizable *> actualizables;

    while (!ventana->DeboCerrar())
    {
        int key = getch();
        if (key == 'a' || key == KEY_LEFT)
        {
            nave->Avanzar();
        }
        if (key == 'd' || key == KEY_RIGHT)
        {
            nave->CambiarDireccion();
        }
        if (key== ' ')
        {
            // Proyectil* p = new Proyectil(->LeerPosicion());
            // dibujos.push_back();
            // actualizables.push_back();
        }
        
        ventana->Dibujar(dibujos);
        ventana->Actualizar(actualizables);
    }
    

    return 0;
}
