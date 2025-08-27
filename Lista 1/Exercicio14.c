#include <stdio.h>

int main()
{

    int num, algarismo1, algarismo2, algarismo3, digitofinal;

    scanf("%d", &num);

    if(num > 999 || num < 100)
    {
        printf("Numero invalido\n");
        return 0;
    }

    algarismo1 = num/100;
    algarismo2 = num/10 % 10;
    algarismo3 = num % 10;
    
    digitofinal = (algarismo1 + algarismo2 * 3 + algarismo3 * 5) % 7;

    printf("O NOVO NUMERO E = %d%d", num, digitofinal);

    return 0;

}