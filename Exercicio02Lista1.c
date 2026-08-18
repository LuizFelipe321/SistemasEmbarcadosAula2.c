/*Crie um algoritmo que solicita ao usuário: a idade, a inicial do primeiro e do último nome.
Mostre a idade do usuário somada ao ano atual e as iniciais invertidas.*/

#include <stdio.h>

int main(){

    int idade, anoAtual, soma= 0, aux;
    char primeiraLetra, ultimaLetra;

    printf["Digite o valor idade:");
    scanf("%d", &idade);

    printf("Digite o valor do ano atual:");
    scanf("%d", &anoAtual);

    printf(" Digite a primeira letra do nome:");
    scanf(" %c", &primeiraLetra);

    printf(" Digite a ultima letra do nome:");
    scanf(" %c", &ultimaLetra);

    soma = idade + anoAtual;

    aux = primeiraLetra;
    primeiraLetra = ultimaLetra;
    ultimaLetra = aux;

    printf(" Soma da idade + anoAtual: %d", soma);
    printf(" iniciais invertidas %c %c", primeiraLetra, ultimaLetra);

    return 0;
}
