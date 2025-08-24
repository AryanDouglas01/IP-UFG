#include <stdio.h>

int main()
{
    float num, result1, result2, result3;
    int ultimoDigito, num1, num2, num3;

    scanf("%f", &num); 

    num1 = num * 100;
    ultimoDigito = num1 % 10;
    
    if(ultimoDigito >= 5)
    {
        num1 = (num1 / 10) + 1;
    }
    else
    {
        num1 = num1 / 10;
    }

    result1 = num1 / 10.0;
    printf("%.6f", result1);

    num2 = num * 1000;
    ultimoDigito = num2 % 10;

    if(ultimoDigito >= 5)
    {
        num2 = (num2 / 10) + 1;
    }
    else
    {
        num2 = num2 / 10;
    }
    result2 = num2 / 100.0;
    printf("\n%.6f", result2);

    num3 = num * 10000;
    ultimoDigito = num3 % 10;

    if(ultimoDigito >= 5)
    {
        num3 = (num3 / 10) + 1;
    }
    else
    {
        num3 = num3 / 10;
    }

    result3 = num3/1000.0;
    printf("\n%.6f", result3);

    return 0;
}