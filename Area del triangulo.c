#include 

 int main ()
 {
    /* Garcia Gutierrez Alejandro
       Equipo Los 8 Burrros Tristes
       21 abr 21
       Programa 5 Pide 2 valores reales y Calcula el area del triangulo*/
    
    float base, altura, area;
    printf("\n Programa 5");
    printf("\n\n Dame el primer valor");
    scanf("%f", &base);
    printf("\n\n Dame el segundo valor");
    scanf("%f", &altura);
    area = base * altura /2;
    printf("\n\n El area del triangulo es %f", area);
    return 0;
    
}