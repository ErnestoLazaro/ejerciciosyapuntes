#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main ()
{

int numero; 

printf("Ingresa un numero entero:\n");
scanf("%i", &numero);

printf("Valor del numero: %i \n", numero);

numero%=5;

printf("El resultado del modulo es: %i \n", numero);

}
