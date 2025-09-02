#include <stdio.h>

int main()
{
    
    double celsius, fahrenheit;
    int i;

    scanf("%d", &i);

    while(i >= 1)
    {
        i--;
       scanf("%lf", &fahrenheit);
       celsius = 5*(fahrenheit-32)/9;
       printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", fahrenheit, celsius);
    }
    
    return 0;
}
