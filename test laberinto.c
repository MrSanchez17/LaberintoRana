#include <stdio.h>

void main ()
{
    int prueba1;
    int prueba2;
    int prueba3;
    int prueba4;

    int sala;

    sala = 1;

    while( sala <= 11)
    {
        printf(" ----- SALA %d ----- \n", sala);
        
        prueba1 = ObtenSalaNorte (sala);
        prueba2 = ObtenSalaSur (sala);
        prueba3 = ObtenSalaEste (sala);
        prueba4 = ObtenSalaOeste (sala);

        printf("Salas contiguas N %d S %d E %d O %d\n", prueba1, prueba2, prueba3, prueba4);
        printf("Salidas: \n");
        ListaSalidas (sala);

        sala = sala + 1;
    }


}