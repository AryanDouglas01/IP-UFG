#include<stdio.h>

int main()
{
    int conta;
    char tipo;
    double  valor, consumo;

    scanf("%d %lf %c", &conta,&consumo,&tipo);

    if(consumo < 0)
    {
        return 0;
    }

    if(tipo == 'R')
    {
        valor = 5 + (consumo * 0.05);

        printf("CONTA = %d\n", conta);
        printf("VALOR DA CONTA = %.2lf\n", valor);

    }
    else if (tipo == 'C')
    {
        if( consumo > 80)
        {
            valor = 500 + ((consumo - 80) * 0.25);
            printf("CONTA = %d\n", conta);
            printf("VALOR DA CONTA = %.2lf\n", valor);
        }
        else if (consumo <= 80)
        {
            valor = 500;
            printf("CONTA = %d", conta);
            printf("VALOR DA CONTA = %.2lf\n", valor);
        }
        
    }

    else if( tipo == 'I')
    {
        if( consumo > 100)
        {
            valor = 800 + ((consumo-100) * 0.04);
            printf("CONTA = %d\n", conta);
            printf("VALOR DA CONTA = %.2lf\n", valor);
        }
        else if (consumo <= 100)
        {
            valor = 800;
            printf("CONTA = %d\n", conta);
            printf("VALOR DA CONTA = %.2lf\n", valor);
        }
    }
    
    return 0;
}
