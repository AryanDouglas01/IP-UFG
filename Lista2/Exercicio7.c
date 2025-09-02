#include<stdio.h>

int main()
{
    int x,y,i;
  
    scanf("%d %d", &x, &y);

    if (x %2 != 0)
    {
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
        return 0;
    }
    
    for( i=0; i < y; i++ )
    {
        printf("%d ", x);
        x = x + 2;
    }

    return 0;
}
