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
    Ventana *ventana = new Ventana();
    Nave *nave = new Nave(18, 10);
    Alien *alien1 = new Alien();
    Alien *alien2 = new Alien(10, 0);
    Alien *alien3 = new Alien(20, 0);
    Alien *alien4 = new Alien(30, 0);
    Barrera *barrera1 = new Barrera(8, 4);
    Barrera *barrera2 = new Barrera(22, 4);

    //Lista de dibujos
    list<Dibujo *> dibujos;
    dibujos.push_back(barrera1);
    dibujos.push_back(barrera2);
    dibujos.push_back(alien1);
    dibujos.push_back(alien2);
    dibujos.push_back(alien3);
    dibujos.push_back(alien4);
    dibujos.push_front(nave);

    //Lista de actualizables
    list<Actualizable *> actualizables;
    actualizables.push_back(alien1);
    // actualizables.push_back(alien2);
    // actualizables.push_back(alien3);
    // actualizables.push_back(alien4);

    while (!ventana->DeboCerrar())
    {
        int key = getch();
        if (key == 'a' || key == KEY_LEFT)
        {
            nave->CambiarDireccion();
        }
        if (key == 'd' || key == KEY_RIGHT)
        {
            nave->Avanzar();
        }
        if (key== ' ')
        {
            Proyectil* p = new Proyectil(nave->LeerPosicion());
            dibujos.push_back(p);
            actualizables.push_back(p);
        }
        
        ventana->Dibujar(dibujos);
        ventana->Actualizar(actualizables);
    }
    

    return 0;
}
