#include <stdio.h>

int main()
{

    double velocidade,massa,aceleracao,espaco_percorrido,trabalho,tempo,velocidade_kmh;
    scanf("%lf", &massa);
    scanf("%lf", &aceleracao);
    scanf("%lf", &tempo);

    massa = massa * 1000;
    velocidade = aceleracao * tempo;
    velocidade_kmh = velocidade * 3.6;

    trabalho = (massa * velocidade * velocidade) / 2;

    espaco_percorrido = (aceleracao * tempo * tempo ) / 2;

    printf("VELOCIDADE = %.2lf\n", velocidade_kmh);
    printf("ESPACO PERCORRIDO = %.2lf\n", espaco_percorrido);
    printf("TRABALHO REALIZADO = %.2lf\n", trabalho);

    return 0;
}