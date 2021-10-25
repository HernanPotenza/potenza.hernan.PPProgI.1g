#include <stdio.h>
#include <stdlib.h>

float aplicarAumento(float precio);

int main()
{
    printf("Hello world!\n");

    float precio = 230;
    float precioConAumento;

    precioConAumento = aplicarAumento(precio);

    printf("%.3f",precioConAumento);

    return 0;
}


float aplicarAumento(float precio){
    return precio*1.05;
}
