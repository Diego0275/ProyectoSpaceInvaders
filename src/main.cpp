#include <iostream>
#include <Mascota.hpp>

int main(int argc, char const *argv[])
{
    Mascota m1, m2, m3;

    std::cout << "Juego de mascotas" << std::endl;

    m1.EstablecerNombre("Raul");
    m2.EstablecerNombre("Pepe");
    m3.EstablecerNombre("Rodolfo");
    m1.DecirNombre();
    m2.DecirNombre();
    m3.DecirNombre();

    return 0;
}
