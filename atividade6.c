#include <stdio.h>
#include <math.h>

int main(){

int base = 2 , altura = 3, area, hipotenusa;

area = base * altura / 2;

hipotenusa = sqrt(pow(base, 2) + pow(altura, 3));


printf("Resultado da area do triangulo:%d \n", area);
printf("Resultado da hipotenusa do triangulo: %d", hipotenusa);

return 0;
}

