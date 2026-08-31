    #include <stdio.h>

    int main(){

    int a, b, c, d= 1; // a, b , c, d = 1; D POSSUI VALOR 1 O RESTANTE POSSUI VALOR VAZIO 

    a = -2; // a = -2; // VALOR ATRIBUIDO A A 

    b = a*a; //b = -2 * (-2) = b = > 4; // AQUI B RECEBE VALOR RESULTADO A QUE È -2 * ( -2) = > B = 4; 

    c=d++; // c = 1 , d++ d = 2;  AQUI C RECEBE VALOR DE D E DEPOIS DE TUDO D INCREMENTA EM SEU VALOR 1 MAIS 1 , ASSIM D = 2;

    d = c++ +5; // d = 6 , c = 2;  AQUI C INCREMENTA O SEU VALOR EM 1 DEPOIS DE REALIZAR O CALCULO ( NAO AUMENTA O VALOR NO MOMENTO DO CALCULO);

    d = ++c + 5; // d = 2 + 1 = 3 + 5 => 8;  AQUI C INCREMENTA O SEU VALOR EM 1 ANTES DE REALIZAR O CALCULO;

    printf("%d %d %d %d", a, b, c, d); // -2 4 3 8;

    return 0;
}


// SE FOSSE B = A * A => CALCULE E GUARDE NA VARIAVEL B 

// SE FOSSE B == A * A => COMPARE SE O RESULTADO EQUIVALE O MESMO VALOR DE B, SIM? 1 , NAO? 0;
