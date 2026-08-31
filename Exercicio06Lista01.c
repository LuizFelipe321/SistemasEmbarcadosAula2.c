#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, a2, b2, distancia;

    scanf("%f %f", &a , &a2);
    scanf("%f %f", &b, &b2);

    distancia = sqrt(pow(a - a2, 2)+ pow(b - b2, 2));

    printf("A distancia euclediana entre eles eh: %.2f", distancia);
    return 0;
}
