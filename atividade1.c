#include <stdio.h>

int main() {

    //Declaracao e atribuicao do valor da base do retangulo
    float base = 3.5;

    //Declaracao e atribuicao do valor da altura do retangulo
    float altura = 2.0;

    //Declaracao , atribuicao e calculo da area do retangulo
    float area = base * altura;

    //Escrita na tela da area do retangulo

    printf("\n Um retangulo de base igual: %f", base);
    printf("\n Um retangulo de altura igual: %f", altura);
    printf("\n O retangulo tem uma area igual: %f\n", area);

    return 0;
}
