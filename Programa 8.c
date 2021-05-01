#include <stdio.h>
int main()
{
    /* Garcia Gutierrez Alejandro
        Equipo Los 8 Tristes Burros
        30 abr 21
        Programa 8 
        calcula el perimetro de un trapecio*/

    float primer, segundo, tercero, cuarto, suma;
    printf("\n programa 8");
    printf("\n\n ¿quiere calcular el perimetro de un trapecio?");
    printf("\n\n ingresa su primer valor");
    scanf("%f", &primer);
    printf("\n\n ingresa el segundo valor");
    scanf("%f", &segundo);
    printf("\n\n ingresa  el tercer valor");
    scanf("%f", &tercero);
    printf("\n\n ingresa el cuarto valor");
    scanf("%f", &cuarto);
    suma = primer + segundo + tercero + cuarto;
    printf("\n\n el perimetro del trapecio es %f", suma);
    return 0;

}
