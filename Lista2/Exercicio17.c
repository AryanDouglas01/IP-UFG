 #include <stdio.h>

 int main()
 {
    int n1,n2,n3,n4,A,soma = 0;
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);

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
    if (n1 > n2)
    {
        A = n1;
        n1 = n2;
        n2 = A;
    }
    if(n1>n4)
    {
        A = n1;
        n1 = n2;
        n2 = n3;
        n3 = n4;
        n4 = A;
    }
    if (n2 > n4)
    {
        A = n2;
        n2 = n3;
        n3 = n4;
        n4 = A;
    }
    if (n3 > n4)
    {
        A = n3;
        n3 = n4;
        n4 = A;
    }
      if(n1>n4)
    {
        A = n1;
        n1 = n2;
        n2 = n3;
        n3 = n4;
        n4 = A;
    }
    if (n2 > n4)
    {
        A = n2;
        n2 = n3;
        n3 = n4;
        n4 = A;
    }
    if (n3 > n4)
    {
        A = n3;
        n3 = n4;
        n4 = A;
    }

    soma = n1 + n2 + n3;
    
    printf("%d",soma);
    return 0;
    
 }