#include <stdio.h>
 
int main()
{
    int i,j,numero,possibilidade;
    possibilidade = 0;
 
    scanf("%d", &numero);
 
    for(i = 1; i < 7; i++)
    {
        for(j = 6; j > 0; j--)
        {
            if ((i+j == numero) && (i !=j))
            {
                printf("D1: %d, D2: %d\n", i,j);
                possibilidade++;
            }
        }
    }
 
    if (possibilidade == 0)
    {
        printf("Combinacao impossivel\n");
        return 0;
    }
    
    printf("Ha %d possibilidades\n", possibilidade);
 
    return 0;   
}