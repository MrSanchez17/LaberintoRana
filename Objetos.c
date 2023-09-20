#include <stdio.h>

int recogidoTesoro1;
int salaTesoro1;

int recogidoTesoro2;
int salaTesoro2;

int recogidoTesoro3;
int salaTesoro3;

int restosExplorador;

int salaExplorador;

int AtrapadaMoscaRoja;
int salaMoscaRoja;

int AtrapadaMoscaVerde;
int salaMoscaVerde;

int AtrapadaMoscaAzul;
int salaMoscaAzul;

int AtrapaMoscas;
int salaAtrapaMoscas;

int RecogidaNota;
int salaNota;

int distraidaRanaAzul;
int distraidaRanaRoja;
int distraidaRanaVerde;

void iniciarObjetos ()
{
    printf("Iniciando objetos\n");
    
    salaTesoro1 = 3;
    salaTesoro2 = 10;
    salaTesoro3 = 5;
    
    recogidoTesoro1 = 0;
    recogidoTesoro2 = 0;
    recogidoTesoro3 = 0;

    salaAtrapaMoscas = 9;
    salaMoscaAzul = 2;
    salaMoscaRoja = 4;
    salaMoscaVerde = 7;

    distraidaRanaAzul = 0;
    distraidaRanaRoja = 0;
    distraidaRanaVerde = 0;          
        
        

    AtrapaMoscas = 0;
    AtrapadaMoscaRoja = 0;
    AtrapadaMoscaVerde = 0;
    AtrapadaMoscaAzul = 0;
    RecogidaNota = 0;
}

int JuegoFinalizado()
{
    
    if ( recogidoTesoro1 == 1 && recogidoTesoro2 == 1  && recogidoTesoro3 == 1)
    {
        printf("Juego Finalizado\n");
        return 1; 
    }
    else
    {        
        return  0;
    }
}
void recogerObjetos (int objeto)
{
    if (objeto == 0 )
    {
        printf("NO has recogdio nada!\n");
    }

    else if( objeto == 1)
    {
        if(distraidaRanaVerde == 1)
        {
            printf("Recogiendo Tesoro 1\n");
            recogidoTesoro1 = 1;
        }
        else
        {
            printf("La rana verde esta vigilando el tesoro, no puedes recogerlo!\n");
        }
    }
 

    else if( objeto == 2 )
    {
        if(distraidaRanaRoja == 1)
        {
            printf("Recogiendo Tesoro 2!\n");
            recogidoTesoro2 = 1;
        }
        else
        {
            printf("La rana roja esta vigilando el tesoro, no puedes recogerlo!\n");
        }
    }


    else if( objeto == 3 )
    {
        printf("Recogiendo resto de explorador!\n");
        restosExplorador=1;
    }
    else if( objeto == 4 )
    {
        if(distraidaRanaAzul == 1)
        {
            printf("Recogiendo Tesoro 3!\n");
            recogidoTesoro3 = 1;
        }
        else
        {
            printf("La rana azul esta vigilando el tesoro, no puedes recogerlo!\n");
        }
    }
    else if(objeto == 8)
    {
        printf("Has recogido la nota\n");
        RecogidaNota=1;
    }
    else if(objeto == 9)
    {
        printf("Has recogido el gran atrapamoscas\n");
        AtrapaMoscas=1;
    }

}

void examinarObjetos (int objeto)
{


    if(objeto == 1)
    {
        printf("1.- Hay una gran cantidad de oro en esta sala.\n");
    }

    else if(objeto == 2)
    {
        printf("2.- Hay muchas joyas relucientes.\n");
       
    }
    else if(objeto == 3)
    {
        printf("3.-Los restos huelen fatal...\n");
    }
    else if(objeto == 4)
    {
        printf("4.- Como brilla este diamante!!!.\n");
        
    }

    
}
int poseeObjeto (int objeto)
{
    if( recogidoTesoro1 == 1 && objeto == 1)
    {
        printf("1.- Tienes el Tesoro 1.\n");
    }
    else
    {
        printf("1.- NO tienes el Tesoro 1.\n");
    }

    if( recogidoTesoro2 == 1 && objeto == 2)
    {
        printf("2.- Tienes el Tesoro 2.\n");
    }
    else
    {
        printf("2.- NO tienes el Tesoro 2.\n");
    }

    if( restosExplorador == 1 && objeto== 3)
    {
        printf("3.- NO me creo que hayas sido capaz de cojer sus restos...\n");
    }
    else
    {
        printf("3.- NO tines restos del explordor.\n");
    }
    
    if(recogidoTesoro3 == 1 && objeto== 4)
    {
        printf("4.- Tienes el Tesoro 3.\n");
    }
    else
    {
        printf("4.- NO tienes el Tesoro 3.\n");
    }
    if( AtrapadaMoscaAzul== 1 && objeto == 5)
    {
        printf("5.- Tienes las mosca azul.\n");
    }
    else
    {
        printf("5.- Tienes que capturar la mosca azul\n");
    }
    
    if( AtrapadaMoscaRoja== 1 && objeto == 6)
    {
        printf("6.- Tienes las mosca roja.\n");
    }
    else
    {
        printf("6.- Tienes que capturar la mosca roja\n");
    }
    
    if( AtrapadaMoscaVerde == 1 && objeto == 7)
    {
        printf("7.- Tienes las mosca verde.\n");
    }
    else
    {
        printf("7.- Tienes que capturar la mosca verde\n");
    }

    if (RecogidaNota == 1 && objeto == 8)
    {
        printf("8.- Tienes la nota\n");
    }
    else
    {
        printf("8.- No tienes la nota\n");
    }

    if( AtrapaMoscas == 1 && objeto == 9)
    {
        printf("9.- Tienes el gran ATRAPAMOSCAS.\n");
    }
    else
    {
        printf("9.- Tienes que recoger el atrapamoscas\n");
    }


    return 1;
}

void listarObjetosEnSala (int sala)
{
    if (sala == 1 || sala == 8 || sala == 10)
    {
        printf("0.- No hay objetos en esta sala\n");
    }

    else if( sala == 3)
    {
        printf("1.- Tesoro 1\n");
    }

    else if(sala== 5)
    {
        printf("2.- Tesoro 2\n");
    }   

    else if(sala== 6)
    {
        printf("3.- Restos del explorador\n");
        printf("8.- Hay una nota en la sala\n");
    }

    else if(sala == 11)
    {
        printf("4.- Tesoro 3\n");
    }

    else if( sala == 2 )
    {
        printf("5.-Hay una mosca azul en la sala\n");
    }
    else if( sala == 4 )
    {
        printf("6.-Hay una mosca roja en la sala\n");
    }
    else if( sala == 7 )
    {
        printf("7.-Hay una mosca verde en la sala\n");
    }
    else if( sala == 9)
    {
        printf("9.-Hay un atrapa moscas en la sala\n");
    }
}

void listarObjetosPoseidos ()
{
    if( recogidoTesoro1 == 1 )
    {
        printf("1.- Tienes el Tesoro 1.\n");
    }
    else
    {
        printf("1.- NO tienes el Tesoro 1.\n");
    }

    if( recogidoTesoro2 == 1 )
    {
        printf("2.- Tienes el Tesoro 2.\n");
    }
    else
    {
        printf("2.- NO tienes el Tesoro 2.\n");
    }

    if(restosExplorador == 1)
    {
        printf("3.- NO me creo que hayas sido capaz de cojer sus restos...\n");
    }
    else
    {
        printf("3.- NO tines restos del explordor.\n");
    }
    
    if(recogidoTesoro3 == 1 )
    {
        printf("4.- Tienes el Tesoro 3.\n");
    }
    else
    {
        printf("4.- NO tienes el Tesoro 3.\n");
    }

    if( AtrapadaMoscaAzul == 1)
    {
        printf("5.- Ya has atrapado la mosca azul\n");
    }
    else
    {
        printf("5.- Todavia no has atrapado la mosca azul\n");
    }

       if( AtrapadaMoscaRoja == 1)
    {
        printf("6.- Ya has atrapado la mosca roja\n");
    }
    else
    {
        printf("6.- Todavia no has atrapado la mosca roja\n");
    }

    if( AtrapadaMoscaVerde == 1)
    {
        printf("7.- Ya has atrapado la mosca verde\n");
    }
    else
    {
        printf("7.- Todavia no has atrapado la mosca verde\n");
    }

    if( RecogidaNota == 1)
    {
        printf("8.- Ya has recogido la nota\n");
    }
    else
    {
        printf("8.- Todavia no has encontrado la nota\n");
    }

    if(AtrapaMoscas == 1)
    {
        printf("9.- Ya has encontrado el gran AtrapaMoscas\n");
    }
    else
    {
        printf("9.- Todavia no has encontrado el atrapamoscas\n");
    }
}

void UsarObjeto(int objeto, int sala)
{
    if( (sala == 1 && objeto== 0) || (sala == 3 && objeto== 0) || (sala == 5 && objeto== 0) || (sala == 6 && objeto== 0) ||  (sala == 8 && objeto== 0) || (sala == 9 && objeto== 0) || (sala == 10 && objeto== 0)|| (sala == 11 && objeto== 0) )
    { 
        printf("No puedes usar nada ahora\n");
    }
    else if(sala == 2 && objeto == 9)
    {
        if(AtrapaMoscas == 1)
        {
            printf("Has atrapado la mosca azul\n");
            AtrapadaMoscaAzul=1;
        }
        else
        {
            printf("Necesitas el gran atrapa moscas para atrapar la mosca\n");
        }
    }
    else if(sala == 4 && objeto == 9 )
    {
        if(AtrapaMoscas == 1)
        {
            printf("Has atrapado la mosca roja\n");
            AtrapadaMoscaRoja=1;
        }
        else
        {
            printf("Necesitas el gran atrapa moscas para atrapar la mosca\n");
        }
    }
    else if(sala == 7 && objeto == 9 )
    {
        if(AtrapaMoscas == 1)
        {
            printf("Has atrapado la mosca verde\n");
            AtrapadaMoscaVerde=1;
        }
        else
        {
            printf("Necesitas el gran atrapa moscas para atrapar la mosca\n");
        }
    }
  

    if ( sala == 3 && objeto == 7 )
    {
        if(AtrapadaMoscaVerde == 1)
        {
            printf("La rana verde se ha distraido, es nuestra oportunidad!!!!!!\n");
            distraidaRanaVerde = 1;
        }
        else
        {
            printf("No tienes la mosca verde!?\n");
        }
    }
    else if ( sala == 5 && objeto == 6 )
    {
        if(AtrapadaMoscaRoja == 1)
        {
            printf("La rana roja se ha distraido, es nuestra oportunidad!!!\n");
            distraidaRanaRoja = 1;
        }
        else
        {
            printf("No tienes la mosca roja!?\n");
        }
    }
    else if ( sala == 11 && objeto == 5)
    {
        if(AtrapadaMoscaAzul == 1)
        {
            printf("La rana azul se ha distraido, es nuestra oportunidad!!!\n");
            distraidaRanaAzul= 1;
        }
        else
        {
            printf("No tienes la mosca azul!?\n");
        }
    }


    else if( objeto== 8)
    {
        printf("1.Para poder capturar las moscas necesitas el atrapamoscas!\n");
        printf("2.Para poder recoger los tesoros, necesitas atrapar las moscas para distraer a las ranas, saludos!\n");
    }
}