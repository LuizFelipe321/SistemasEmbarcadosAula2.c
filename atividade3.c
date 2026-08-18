#include <stdio.h>

#define altura 5

int main(){

    int base, perimetro;

    printf("Escreva o valor da base:\n");
    scanf("%d", &base);

    perimetro = base * altura;

    printf("Resultado do perimetro do retangulo: %d", perimetro);

    return 0;
}
