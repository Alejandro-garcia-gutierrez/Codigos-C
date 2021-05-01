#include<stdio.h>
int main()
{
    /* Garcia Gutierrez Alejandro
        Equipo Los 8 Tristes Burros
        30 abr 21
        Programa 7 */

    float primer, segundo, multiplica;
    printf("\n programa 7");
    printf("\n\n ¿Quisieras que multiplique algun numero?");
    printf("\n\n introduce el primer numero");
    scanf("%f", &primer);
    printf("\n\n Introduce el segundo numero");
    scanf("%f", &segundo);
    multiplica = primer * segundo;
    printf("\n El resultado es %f", multiplica);
    return 0;

}
