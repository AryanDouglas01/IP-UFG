#include<stdio.h>

int main()
{
    int data,dia = 0 ,mes = 0 ,ano = 0;
    
    scanf("%d",&data);
    dia = data / 1000000;
    ano = data % 10000;
    mes= (data - (dia * 1000000 + ano)) / 10000;

    if((dia <= 31) && (mes == 1))
    {
        printf("%d de janeiro de %d\n",dia,ano);
    }
    else if (dia <= 28 && (mes == 2))
    {
        printf("%d de fevereiro de %d\n",dia,ano);
    }
    else if (dia <= 31 && (mes == 3))
    {
        printf("%d de março de %d\n",dia,ano);
    }
    else if (dia <= 30 && (mes == 4))
    {
        printf("%d de abril de %d\n",dia,ano);
    }
    else if (dia <= 31 && (mes == 5))
    {
        printf("%d de maio de %d\n",dia,ano);
    }
    else if (dia <= 30 && (mes == 6))
    {
        printf("%d de junho de %d\n",dia,ano);
    }
    else if (dia <= 31 && (mes == 7))
    {
        printf("%d de julho de %d\n",dia,ano);
    }
    else if (dia <= 31 && (mes == 8))
    {
        printf("%d de agosto de %d\n",dia,ano);
    }
    else if (dia <= 30 && (mes == 9))
    {
        printf("%d de setembro de %d\n",dia,ano);
    }
    else if (dia <= 31 && (mes == 10))
    {
        printf("%d de outubro de %d\n",dia,ano);
    }
    else if (dia <= 30 && (mes == 11))
    {
        printf("%d de novembro de %d\n",dia,ano);
    }
    else if (dia <= 31 && (mes == 12))
    {
        printf("%d de dezembro de %d\n",dia,ano);
    }
    else
    {
        printf("Data invalida!");
    }
    return 0;

}