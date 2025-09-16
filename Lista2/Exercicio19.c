#include<stdio.h>
 
int main()
{
    int conteudo_carbono,dureza_rockwell,resistencia_tracao,grau = 0;
 
    scanf("%d %d %d", &conteudo_carbono,&dureza_rockwell,&resistencia_tracao);
 
    if((conteudo_carbono < 7) && (dureza_rockwell > 50) && (resistencia_tracao > 80000))
    {
        grau = 10;
        printf("ACO DE GRAU = %d\n", grau);
    }
    else if((conteudo_carbono < 7) && (dureza_rockwell > 50) && (resistencia_tracao <= 80000))
    {
        grau = 9;
        printf("ACO DE GRAU = %d\n", grau);
    }
     else if((conteudo_carbono < 7) && (dureza_rockwell <= 50) && (resistencia_tracao <= 80000))
    {
        grau = 8;
        printf("ACO DE GRAU = %d\n", grau);
    }
       else 
    {
        grau = 7;
        printf("ACO DE GRAU = %d\n", grau);
    }
 
    return 0;
}