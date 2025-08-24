#include <stdio.h>

int main()
{
    const float pi = 3.14159;
    float raio, altura, area_circulo, area_total, area_lateral,custo_lata;

    scanf("%f", &raio);
    scanf("%f", &altura);

    area_circulo = pi * (raio * raio); 
    area_lateral = 2 * pi * raio * altura; // os valores de raio e altura são em metros

    area_total = (2 * area_circulo) + area_lateral;
    custo_lata = area_total * 100; // 100 reais por metro quadrado

    printf("O VALOR DO CUSTO E = %.2f\n", custo_lata);

    return 0;
}