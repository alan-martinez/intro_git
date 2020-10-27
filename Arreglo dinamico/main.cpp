/*Actividad N-11 Arreglos dinamicos de memoria
Autor: Martinez Sepulveda Alan Jahir
Fecha: 26/10/2020
*/
#include <iostream>
#include <stdlib.h>
#include "arreglo.h"
using namespace std;

void modificar(int *a)
{
    *a = *a + 1;
}

int main() 
{
    ArregloDinamico arreglo;
    arreglo.insertar_final("Hola");
    arreglo.insertar_final("estoy");
    arreglo.insertar_final("probando");
    arreglo.insertar_final("el programa");
    arreglo.insertar_final("esta");
    arreglo.insertar_final("es");
    arreglo.insertar_final("la");
    arreglo.insertar_final("actividad 11");
    arreglo.insertar_inicio("Insertando al inicio: ");
    arreglo.insertar_inicio("Autor: Alan Jahir Martinez Sepulveda");

    arreglo.size();

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }

    system ("pause");
    return 0;
}
