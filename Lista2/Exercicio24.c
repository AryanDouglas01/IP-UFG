#include <stdio.h>

int main()
{
    int n1, n2, n3, mmc = 1, div = 2;
    int temp_n1, temp_n2, temp_n3;

    scanf("%d %d %d", &n1, &n2, &n3);

    temp_n1 = n1;
    temp_n2 = n2;
    temp_n3 = n3;

    while (temp_n1 > 1 || temp_n2 > 1 || temp_n3 > 1)
    {
        if (temp_n1 % div == 0 || temp_n2 % div == 0 || temp_n3 % div == 0)
        {
            printf("%d %d %d :%d\n", temp_n1, temp_n2, temp_n3, div);

            if (temp_n1 % div == 0) temp_n1 = temp_n1 / div;
            if (temp_n2 % div == 0) temp_n2 = temp_n2 / div;
            if (temp_n3 % div == 0) temp_n3 = temp_n3 / div;

            mmc = mmc * div;
        }
        else
        {
            div++;
        }
    }

    printf("MMC: %d\n", mmc);

    return 0;
}