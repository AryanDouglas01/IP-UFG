#include <stdio.h>

int invertenum(int a)
{
    int inverso = 0;
    while (a > 0)
    {
        inverso = inverso * 10 + (a % 10);
        a /= 10;
    }
    return inverso;
}


int main()
{
    int num1, num2;

    scanf("%d",&num1);

    if (num1 > 99999)
    {
        printf("NUMERO INVALIDO\n");
        return 0;
    }
    
    num2 = invertenum(num1);

    if (num1 == num2)
    {
        printf("PALINDROMO\n");
    }
    else
    {
        printf("NAO PALINDROMO\n");
    }
    
    return 0;
}