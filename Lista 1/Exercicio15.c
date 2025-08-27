#include <stdio.h>

int main()
{
    
    int num;
    int res1, res2, res3, res4, res5, res6, res7, res8;
    scanf("%d", &num);

    if(num > 255 || num < 0)
    {
        printf("Numero invalido!");
        return 0;
    }

    res1 = (num/1) % 2;
    res2 = (num/2) % 2;
    res3 = (num/4) % 2;
    res4 = (num/8) % 2;
    res5 = (num/16) % 2;
    res6 = (num/32) % 2;
    res7 = (num/64) % 2;
    res8 = (num/128) % 2;
   
    printf("%d%d%d%d%d%d%d%d\n", res8,res7,res6,res5,res4,res3,res2,res1);
    return 0;
}