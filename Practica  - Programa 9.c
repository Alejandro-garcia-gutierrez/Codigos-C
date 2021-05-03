#include<stdio.h> 
int main()
{
    /* Garcia Gutierrez Alejandro
        Equipo Los 8 Tristes Burros
        03 mayo 21
        Practica  
        calcula el area de un rectangulo*/

        float base, altura, multiplicacion;
        printf("\n ¿Quieres calcular el area de un rectangulo?");
        printf("\n\n Dime la base");
        scanf("%f", &base);
        printf("\n\n dame la altura");
        scanf("%f", &altura);
        multiplicacion = base * altura;
    printf("\n\n el area del rectangulo es %f", multiplicacion);
        return 0;
}
    