#include <stdio.h>
#include <math.h>

#define PI 3.14

int main(){

    float raio, area;

    printf("Escreva o raio do circulo:");
    scanf("%f", &raio);

    area = PI * (pow(raio, 2));

    printf("A area do circulo é: %f", area);

  return 0;
}


