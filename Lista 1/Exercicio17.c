#include<stdio.h>

int main()
{
    int valor, notas100, notas50, notas10, moedas1;

    scanf("%d", &valor);

    notas100 = valor/100;
    notas50 = (valor - (notas100 * 100))/50;
    notas10 = (valor - (notas100 *100) - (notas50 * 50))/10;
    moedas1 = (valor - (notas100 * 100) - (notas50*50) - (notas10*10));

    printf("NOTAS DE 100 = %d\n", notas100);
    printf("NOTAS DE 50 = %d\n", notas50);
    printf("NOTAS DE 10 = %d\n", notas10);
    printf("MOEDAS DE 1 = %d\n", moedas1);

    return 0;

}       
