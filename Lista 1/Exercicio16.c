#include <stdio.h>

int main()
{

    int num, algarismo1, algarismo2, algarismo3;;

    scanf("%d", &num);

    if(num == 0  || num % 10 == 0 || num % 100 == 0 || num > 999 || num < 100)
    {
        printf("Numero invalido\n");
        return 0;
    }

    algarismo1 = num/100;
    algarismo2 = num/10 % 10;
    algarismo3 = num % 10;

    printf("%d%d%d\n", algarismo3, algarismo2, algarismo1);

    return 0;

}