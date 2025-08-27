#include<stdlib.h>
#include<stdio.h>

int main()
{
    int A,B;
    float media;

    scanf("%d", &A);
    scanf("%d", &B);

    media = (A+B)/2.0;

    printf("%.3f", media);

    return 0;
}
