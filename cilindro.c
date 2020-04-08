#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main ()
{

    int radio;
    int altura;
    float rArea;
    float rVol;
    float pi = 3.14;

    printf("Ingresa el radio de la base: \n");
    scanf("%i", &radio);

    printf("Ingresa el valor de la altura: \n");
    scanf("%i", &altura);

    rArea = 2 * pi * radio * (radio+altura);
    rVol = pi * (radio*radio) * altura;

    printf("El area de la base es : %f \n", rArea);
    printf("El volumen del cilindro es: %f \n", rVol);



}