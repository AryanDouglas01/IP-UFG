#include <stdio.h>

int main()
{
    float volume,altura, raiz3,areaBase,aresta;

     scanf("%f", &altura);
     scanf("%f", &aresta);

     raiz3 = 1.732; // Aproximacao de raiz de 3
     areaBase = (3 * aresta * aresta * raiz3) / 2;

     volume = (areaBase * altura) / 3;

     printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS", volume);

     return 0;
}