#pragma once

#include <curses.h>
#include <unistd.h>
#include <Actualizable.hpp>
#include <Dibujo.hpp>

class Ventana
{
private:
    
public:
    Ventana() {
        //Inicializar pantalla
        initscr();

        //Eliminar cursor de la pantalla
        noecho();
        curs_set(FALSE);

        //No bloquear consola
        cbreak();
        timeout(10);
        keypad(stdscr, TRUE);

        //Inicializar clase
        getmaxyx(stdscr, y, x);
        close = false;
    }

    ~Ventana(){
        keypad(stdscr, FALSE);
        endwin();
    }

    bool DeboCerrar()
    {
        return this->close;
    }

    void Cerrar()
    {
        this->close = true;
    }

    void Actualizar(list<Actualizable*> listaActualizables)
    {
        for(auto &&iterador : listaActualizables)
        {
            iterador->Actualizar();
        }
        
        usleep(41000);
    }

    void Dibujar(list<Dibujo*> listaDibujos)
    {
        clear();
        
        box(stdscr, '*', '~');
        for (auto &&dibujo : listaDibujos)
        {
            dibujo->Dibujar();
        }
        
        refresh();
    }
};