#include<stdio.h>

int main()
{
    float polegada, fahrenheit, milimetro,Y,X;
    milimetro = 25.4;
    
    scanf("%f", &fahrenheit);
    scanf("%f", &polegada);

     X = 5 * ((fahrenheit - 32) / 9);
     Y = polegada * milimetro;

    printf("O VALOR EM CELSIUS  = %.2f\n", X);
    printf("A QUANTIDADE DE CHUVA E = %.2f\n", Y);

    return 0;
}
