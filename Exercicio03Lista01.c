#include <stdio.h>

int main(){

    float A, B, aux;

    printf("Escreva o valor do primeiro numero (A):");
    scanf("%f", &A);

    printf("Escreva o valor do segundo numero (B):");
    scanf("%f", &B);

    aux = A;
    A = B;
    B = aux;

    printf("Numeros trocados entre as duas variaveis:\n");
    printf("Valor de A imprimido: %.2f\n", A);
    printf("Valor de B imprimido: %.2f", B);

    return 0;
}
