#include<stdio.h>
#include<math.h>

 int main()
 {

    double a,b,c,delta,x1,x2;
    scanf("%lf %lf %lf",&a,&b,&c);

    delta = (b*b)-4*a*c;

    x1 = (-b + sqrt(delta)) / (2*a);
    x2 = (-b - sqrt(delta)) / (2*a);

    if (delta > 0)
    {
        printf("RAIZES DISTINTAS\n");
    }
    else if(delta == 0)
    {
        printf("RAIZ UNICA\n");
    }
    else if(delta < 0)
    {
        printf("RAIZES IMAGINARIAS\n");
    }
    if (x1>x2)
    {
        printf("X1 = %.2lf\nX2 = %.2lf\n",x2,x1);
    }
    else if(x2>x1)
    {
        printf("X1 = %.2lf\nX2 = %.2lf\n",x1,x2);
    }
    else if(x1==x2)
    {
        printf("X1 =  %.2lf\n",x1);
    }
   return 0;
}