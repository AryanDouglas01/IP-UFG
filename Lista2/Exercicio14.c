#include <stdio.h>
#include <math.h>

int main()
{
    int numero, i, primo = 1;
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("NAO PRIMO\n");
        return 0;
    }

    for (i = 2; i <= sqrt(numero); i++) {
        if (numero % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo)
        printf("PRIMO\n");
    else
        printf("NAO PRIMO\n");

    return 0;
}
