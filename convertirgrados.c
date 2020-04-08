#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main ()
{

    float celcius;
    float fahre;

    printf("Hola, convertimos de Fahreinheit a Celsius. \n");
    printf("Ingresa el valor en Fahreinheit:");
    scanf("%f", &fahre);

    celcius = (fahre-32) * 5/9;


    printf("Su equivalencia en Celcius es: %f \n\n", celcius);



}