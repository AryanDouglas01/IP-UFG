#include<stdio.h>

int main()
{
    int n,casas_brancas=0, casas_pretas=0, graos=0;

    scanf("%d", &n);

    casas_brancas = 32*n;
    casas_pretas = 32*2*n;

    graos = casas_brancas + casas_pretas - n;

    printf("%d",graos);

    return 0;
}