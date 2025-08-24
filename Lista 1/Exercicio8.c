#include<stdio.h>

int main()
{
    int horas,minutos,segundos,totalSegundos;
    scanf("%d",&horas);
    scanf("%d",&minutos);
    scanf("%d",&segundos);

    totalSegundos = (horas *3600) + (minutos * 60) + segundos;
    printf("O TEMPO EM SEGUNDOS E = %d",totalSegundos);

    return 0;
}