#include

 int main ()
 {
    /* Garcia Gutierrez Alejandro
       Equipo Los 8 Burrros Tristes
       21 abr 21
       Programa 6 Pide 4 valores reales y Calcula el area del trapecio, calcula el volumen del trapecio*/
    
    float base1, base2, altura, area, volumen, largo;
    printf("\n Programa 6");
    printf("\n\n Dame el primer valor");
    scanf("%f", &base1);
    printf("\n\n Dame el segundo valor");
    scanf("%f", &base2);
    printf("\n Dame el tercer valor");
    scanf("%f", &altura);
    printf("\n Dame el cuarto valor");
    scanf("%f", &largo);
    area = (base1 + base2) /2 * altura;
    volumen = area * largo;
    printf("\n\n El area del trapecio es %f", area);
    printf("\n por lo tanto");
    printf("\n El volumen del trapecio es %f", volumen);
    
    return 0;
    
}