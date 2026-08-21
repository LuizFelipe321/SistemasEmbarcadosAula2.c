#include <stdio.h>

int main(){

    float n1, n2, n3, soma=0, media, produto;

    printf("Escreva o valor da primeira nota:");
    scanf("%f", &n1);

    printf("Escreva o valor da segunda nota:");
    scanf("%f", &n2);

    printf("Escreva o valor da terceira nota:");
    scanf("%f", &n3);

    soma = n1 + n2 + n3;

    media = (n1 + n2 + n3) / 2;

    produto = (n1 * n2) * n3;

    printf("Soma, media e produto das notas:\n");
    printf("Resultado da soma das notas: %.2f\n", soma);
    printf("Resultado da media das notas: %.2f\n", media);
    printf("Resultado do produto das notas: %.2f\n", produto);

    return 0;
}
