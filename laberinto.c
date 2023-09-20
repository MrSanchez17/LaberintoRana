#include <stdio.h>

int ObtenSalaNorte(int sala)
{
    if(sala == 1)
    {
        return -1;
    }
    
    else if(sala == 2)
    {
        return -1;
    }

    else if(sala == 3)
    {
        return -1;
    }

    else if (sala == 4)
    {
        return -1;
    }
    
    else if (sala == 5)
    {
        return -1;
    }

    else if (sala == 6)
    {
        return 2;
    }
    else if (sala == 7)
    {
        return 3;
    }
    else if (sala == 8)
    {
        return 4;
    }
    else if (sala == 9)
    {
        return -1;
    }
    else if (sala == 10)
    {
        return 7;
    }
    else if (sala == 11)
    {
        return 8;
    }
    return 1;
}
int ObtenSalaSur(int sala)
{
    if(sala == 1)
    {
        return -1;
    }

    else if(sala == 2)
    {
        return 6;
    }

    else if(sala == 3)
    {
        return 7;
    }

     else if (sala == 4)
    {
        return 8;
    }
    else if (sala == 5)
    {
        return -1;
    }
    else if (sala == 6)
    {
        return -1;
    }
    else if (sala == 7)
    {
        return 10;
    }
    else if (sala == 8)
    {
        return 11;
    }
    else if (sala == 9)
    {
        return -1;
    }
    else if (sala == 10)
    {
        return -1;
    }
    else if (sala == 11)
    {
        return -1;
    }
    return 1;
}
int ObtenSalaEste(int sala)
{
    if(sala == 1)
    {
        return 2;
    }

    else if(sala == 2)
    {
        return 3;
    }

    else if(sala == 3)
    {
        return -1;
    }

    else if (sala == 4)
    {
        return -1;
    }
    else if (sala == 5)
    {
        return 6;
    }
    else if (sala == 6)
    {
        return 7;
    }
    else if (sala == 7)
    {
        return 8;
    }
    else if (sala == 8)
    {
        return -1;
    }
    else if (sala == 9)
    {
        return 10;
    }
    else if (sala == 10)
    {
        return -1;
    }
    else if (sala == 11)
    {
        return -1;
    }
    return 1;
}
int ObtenSalaOeste(int sala)
{
    if(sala == 1)
    {
        return -1;
    }

    else if(sala == 2)
    {
        return 1;
    }

    else if(sala == 3)
    {
        return 2;
    }
    else if (sala == 4)
    {
        return -1;
    }
    else if (sala == 5)
    {
        return -1;
    }
    else if (sala == 6)
    {
        return 5;
    }
    else if (sala == 7)
    {
        return 6;
    }
    else if (sala == 8)
    {
        return 7;
    }
    else if (sala == 9)
    {
        return -1;
    }
    else if (sala == 10)
    {
        return 9;
    }
    else if (sala == 11)
    {
        return -1;
    }
    return 1;
}

void ListaSalidas(int sala)
{
    if (ObtenSalaNorte(sala) >= 0)
    {
         printf("1.- Norte\n");
    }

    if(ObtenSalaSur(sala)>= 0)
    {
        printf("2.- Sur\n");
    }

    if(ObtenSalaEste(sala)>=0)
    {
        printf("3.- Este\n");
    }

    if(ObtenSalaOeste(sala)>=0)
    {
        printf("4.- Oeste\n");
    }
}