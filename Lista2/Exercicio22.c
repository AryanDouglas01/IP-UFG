#include <stdio.h>

int main()
{
    int n, hipotenusa, cateto1, cateto2;

    scanf("%d", &n);

    for (hipotenusa = 1; hipotenusa <= n; hipotenusa++)
    {
        for (cateto1 = 1; cateto1 < hipotenusa; cateto1++)
        {
            for (cateto2 = cateto1; cateto2 < hipotenusa; cateto2++) // começa em cateto1 a fim garantir cateto1 <= cateto2
            {
                if ((cateto1 * cateto1 + cateto2 * cateto2) == (hipotenusa * hipotenusa))
                {
                    printf("hipotenusa = %d, catetos %d e %d\n", hipotenusa, cateto1, cateto2);
                }
            }
        }
    }

    return 0;
}
