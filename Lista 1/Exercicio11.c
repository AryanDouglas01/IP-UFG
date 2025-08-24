#include <stdio.h>

int main()
{
    float preco_carro, percentagem_distribuidor, percentagem_impostos, preco_final;

    scanf("%f", &preco_carro);
    scanf("%f", &percentagem_distribuidor);
    scanf("%f", &percentagem_impostos);

    preco_final = preco_carro + (preco_carro * percentagem_distribuidor / 100) + (preco_carro * percentagem_impostos / 100);

    printf("O VALOR DO CARRO E = %.2f\n", preco_final);
    return 0;
}