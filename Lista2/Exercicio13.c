#include <stdio.h>

int main()
{
    int numero, pares = 0, impares = 0;
    double soma_par = 0, soma_impar = 0;
    double media_par = 0, media_impar = 0;

    scanf("%d", &numero);

    while (numero != 0) 
    {
        if (numero % 2 == 0)
        {
            soma_par += numero;
            pares++;
        }
        else
        {
            soma_impar += numero;
            impares++;
        }
        scanf("%d", &numero);
    }

    if (pares > 0)
        media_par = soma_par / pares;
    if (impares > 0)
        media_impar = soma_impar / impares;

    printf("MEDIA PAR: %.6lf\n", media_par);
    printf("MEDIA IMPAR: %.6lf\n", media_impar);

    return 0;
}
