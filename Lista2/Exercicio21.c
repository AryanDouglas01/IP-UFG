#include<stdio.h>

int invertenum (int a)
{
    int centena, dezena, unidade, inverso;
    centena = a / 100;
    dezena = (a / 10) % 10;
    unidade = a % 10;
    inverso = unidade * 100 + dezena * 10 + centena;
    
    return inverso;

}
int main()
{
    int i,j,numero1,numero2,resultado1 =0, resultado2=0;

    scanf("%d",&j);

    for(i = 0; i<j; i++)
    {
        scanf("%d %d",&numero1,&numero2);
        resultado1 = invertenum(numero1);
        resultado2 = invertenum(numero2);

        if(resultado1 > resultado2)
            printf("%d\n",resultado1);
        else
        {
            printf("%d\n",resultado2);
        }
    }

    return 0;
}