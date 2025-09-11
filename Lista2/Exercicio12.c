#include<stdio.h>

int main()
{

    int quantidade, num, anterior,i;
    int contador = 1, maximo = 1;;

    scanf("%d", &quantidade);
    scanf("%d", &anterior); // ler o primeiro numero do loop

    for(i = 1; i < quantidade; i++)
    {
        scanf("%d", &num);
        if(num > anterior)
        {
            contador++;   
        }
       else
       {
        contador = 1;
       }
      if (contador > maximo)
        {
          maximo = contador;
        }
        anterior = num;
    }
    printf("O comprimento do segmento crescente maximo e: %d", maximo);

    return 0;
}