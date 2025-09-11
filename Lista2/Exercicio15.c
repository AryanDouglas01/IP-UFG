 #include <stdio.h>

 int main()
 {

    double n1,n2,n3,A;
    scanf("%lf%lf%lf",&n1,&n2,&n3);

    if (n1 > n2)
    {
        A = n1;
        n1 = n2;
        n2 = A;
    }
    if(n2>n3)
    {
        A = n2;
        n2 = n3;
        n3 = A;
    }
    if(n1>n2)
    {
        A = n1;
        n1 = n2;
        n2 = A;
    }
    printf("%.2lf, %.2lf, %.2lf",n1,n2,n3);
    return 0;
    
 }