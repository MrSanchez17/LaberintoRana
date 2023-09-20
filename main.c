#include <stdio.h>


void main ()
{
    int salida1;
    int salida2;
    int salida3;
    int salida4;
    int objeto1;
    int direccion;
    int sala;
    int usar;
    int accion;
    int recoger;
    int exam;

    sala = 1;
    while( JuegoFinalizado() == 0)
    {
       
        int objeto;

        printf(" ----- SALA %d ----- \n", sala);
        
        salida1 = ObtenSalaNorte (sala);
        salida2 = ObtenSalaSur (sala);
        salida3 = ObtenSalaEste (sala);
        salida4 = ObtenSalaOeste (sala);

        printf("Salas contiguas N %d S %d E %d O %d\n", salida1, salida2, salida3, salida4);
        printf("------------\n");

        ListaSalidas (sala);
        printf("------------\n");
        listarObjetosEnSala(sala);
        printf("------------\n");
        listarObjetosPoseidos();
        printf("------------\n");
        printf("1.- Ir a?\n");
        printf("------\n");
        printf("2.- Examinacion de objetos.\n");
        printf("------\n");
        printf("3.- Recoger.\n");
        printf("------\n");
        printf("4.-Que objeto quieres usar.\n");
        printf("------------------\n");
        printf("Que vas a querrer hacer?\n");
        printf("------\n");
        scanf("%d", &accion);
        printf("------------\n");
        
        if(accion == 1)
        {
            printf(" A donde te quieres dirigir?\n");
            printf("------\n");
            scanf("%d", &direccion);
            printf("------------\n");
            if( direccion == 1)
            {
                sala= salida1; 
            }
            else if( direccion == 2)
            {
                sala= salida2; 
            }
            else if( direccion == 3)
            {
                sala= salida3; 
            }
            else if( direccion == 4)
            {
                sala= salida4; 
            }
        }
        else if(accion == 2)
        {
            examinarObjetos(objeto);

            printf("------------\n");
        }
        else if(accion == 3)
        {
            printf(" Que objeto quieres recoger?\n");
            printf("------\n");
            scanf("%d", &objeto);
            printf("------\n");
            recogerObjetos(objeto);
            printf("------------\n");;
        }
        else if( accion == 4)
        {
            printf(" Que objeto quieres usar?\n");
            printf("------\n");
            scanf("%d", &objeto);
            printf("------\n"); 
            UsarObjeto(objeto, sala);
            printf("------------\n");
        }
    }
}