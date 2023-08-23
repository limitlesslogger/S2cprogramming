#include <stdio.h>
int power_find(int a,int b)
{
    int res=1;
    for(int i=1;i<=b;i++)
    {
        res=res*a;//you cant write a*=a as value of a will keep changing
    }
    return res;
}
void main()
{
    int x,k;
    printf("Enter x and k\n");
    scanf("%d %d",&x,&k);
    int n=power_find(x,k);
    printf("result %d\n",n);
}