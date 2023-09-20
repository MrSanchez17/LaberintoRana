#include <stdio.h>

int sala;
int escena;
int recoger;
int tieneObjet1;
int tieneObjet2;
int tieneObjet3;

void main ()
{
    escena = 0;


    if( escena == 0)
    {
        iniciarObjetos ();
    }

    if (escena == 0)
    {

        printf("Que objeto quieres recoger\n");
        printf("------------\n");
        scanf("%d", & recoger);
        printf("------------\n");


        if(recoger == 1)
        {
            printf("Has recogido el objeto 1\n");
            poseeObjeto(1);
        }
        else
        {
            printf("No lo has recogido\n");
        }
            
        if (recoger == 2)
        {
            printf("Has recogido el objeto 1\n");
        }
        else
        {
            printf("No lo has recogido\n");
        }


    }

}