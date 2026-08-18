#include <stdio.h>

int main(){

    int lado1, lado2, perimetro;

    printf("Escreva o valor da base:\n");
    scanf("%d", &lado1);

    printf("Escreva o valor do altura:\n");
    scanf("%d", &lado2);

    perimetro = lado1 * lado2;

    printf("Resultado do perimetro do retangulo: %d", perimetro);

    return 0;
}
