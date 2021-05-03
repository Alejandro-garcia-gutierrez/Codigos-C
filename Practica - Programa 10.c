#include<stdio.h>
int main()
{
    /* Garcia Gutierrez Alejandro
        Equipo Los 8 Tristes Burros
        03 mayo 21
        Practica
        Identificar edad*/

        float primer, segundo, resta
        printf("\n\n ¿Quieres saber que edad tendras en años futuros?");
        printf("\n\n introduce el año en el que quieres saber tu edad");
        scanf("%f", &primer);
        printf("\n\n introduce el año en que naciste");
        scanf("%f", &segundo);
        resta = primer - segundo;
        printf("\n\n tú edad seria %f", resta);
        return 0;
}

     