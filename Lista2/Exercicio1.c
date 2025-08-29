#include <stdio.h>

int main()
{
    float n1,n2,n3,media;

    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    media = (n1+n2+n3)/3;

    printf("MEDIA = %.2f\n", media);

    if(media >= 6)
    {
        printf("APROVADO\n");
    }
    else if(media < 6)
    {
        printf("REPROVADO\n");
    }

    return 0;
}
