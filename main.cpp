#include <stdio.h>

using namespace std;

int main()
{
    char nombre[100];
    unsigned int edad;

    // printf ("Hola mundo!\n");
    printf ("Nombre: ");
    fgets (nombre, sizeof(nombre), stdin);
    printf ("Hola %s", nombre);
    printf ("Edad: ");
    scanf ("%u", &edad);
    printf ("Va a cumplir %u", edad + 1);

    return 0;
}
