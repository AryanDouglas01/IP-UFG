#include<stdio.h>

int main()
{
    unsigned long int fat, n,n1;
    fat = 1;
    scanf("%lu", &n);
    n1 = n;
    if (n == 0)
    {
        printf("%lu! = 1\n", n);
        return 0;
    }

    while (n > 1)
    {
        fat = fat * n;
        n--;
    }

    printf("%lu! = %lu\n", n1, fat);
    
    return 0;
}