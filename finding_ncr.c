#include <stdio.h>
int factorial(int num)
{
    int p=1;
    for(int i=2;i<=num;i++)
    {
        p*=i;
    }
    //printf(" p is %d\n",p);
    return p;
}
void main()
{
    /*n!/r!*n-r!*/
    int n,r,res1,res2,res3;
    float res;
    printf("Enter n and r\n");
    scanf("%d %d",&n,&r);
    res1=factorial(n);
    printf("res 1 %d\n",res1);
    res2=(factorial(r));
    printf("res 2 %d\n",res2);
    res3=factorial(n-r);
    printf("res 3 %d\n",res3);
    res=res1/(res2*res3);
    printf("Result is %f\n",res);
}