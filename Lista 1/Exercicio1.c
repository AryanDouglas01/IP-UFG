#include<stdio.h>

int main()
{
    float salario,custo_kw,custo_desconto,consumido,custo_consumo;

    scanf("%f", &salario);
    scanf("%f", &consumido);
   
    custo_kw = salario * 0.007; // 0.007 é porcentagem para cada kw, pois 100 kw está para 70% assim como 1 kw está para 0.007
    custo_consumo = custo_kw * consumido;

    custo_desconto = custo_consumo * 0.9; // 10% de desconto

    printf("Custo por kW: R$ %.2f\n", custo_kw);
    printf("Custo do consumo: R$ %.2f\n", custo_consumo);
    printf("Custo com desconto: R$ %.2f\n", custo_desconto);
 
    return 0;
}