#include <stdio.h>

int main()
{
    unsigned long int codigo_mercadoria, codigo_maiorlucro = 0, codigo_maisvendido = 0;
    float preco_venda, preco_compra;
    int numero_vendas;
    int lucro_menor10 = 0, lucro_entre10e20 = 0, lucro_maior20 = 0;
    float maior_lucro = -1, total_compra = 0, total_venda = 0;
    int mais_vendido = -1;

    while (scanf("%lu %f %f %d", &codigo_mercadoria, &preco_compra, &preco_venda, &numero_vendas) == 4)
    {
        float lucrounitario = preco_venda - preco_compra;
        float percLucro = (lucrounitario / preco_compra) * 100;
        float lucro_total = lucrounitario * numero_vendas;  

        // Classificação do percentual de lucro
        if (percLucro < 10) {
            lucro_menor10++;
        } else if (percLucro <= 20) {
            lucro_entre10e20++;
        } else {
            lucro_maior20++;
        }

        // Totais de compra e venda
        total_compra += preco_compra * numero_vendas;
        total_venda  += preco_venda * numero_vendas;

        // Mercadoria com maior lucro absoluto
        if (lucro_total > maior_lucro) {
            maior_lucro = lucro_total;
            codigo_maiorlucro = codigo_mercadoria;
        }

        // Mercadoria mais vendida
        if (numero_vendas > mais_vendido) {
            mais_vendido = numero_vendas;
            codigo_maisvendido = codigo_mercadoria;
        }        
    }
    
    float lucro_total = total_venda - total_compra;
    float perc_lucro = (lucro_total / total_compra) * 100;
    
    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", lucro_menor10);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", lucro_entre10e20);
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", lucro_maior20);
    printf("Codigo da mercadoria que gerou maior lucro: %lu\n", codigo_maiorlucro);
    printf("Codigo da mercadoria mais vendida: %lu\n", codigo_maisvendido);
    printf("Valor total de compras: %.2f, valor total de vendas: %.2f e percentual de lucro total: %.2f%%\n",
           total_compra, total_venda, perc_lucro);

    return 0;
}
