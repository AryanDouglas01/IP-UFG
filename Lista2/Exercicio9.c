#include<stdio.h>

int main()
{

    int pais1,pais2;
    float crescimento1,crescimento2;
    int anos=0;

    scanf("%d %d",&pais1,&pais2);

    crescimento1 = 0.03;
    crescimento2 = 0.015;

    if (pais1 > pais2)
    {   
        return 0;
    }
    
    while(pais1 <= pais2) 
    {
        pais1 = pais1 + (pais1 * crescimento1);
        pais2 = pais2 + (pais2 * crescimento2);
        anos++;
    }
    printf("ANOS = %d\n",anos);



    return 0;

}