#include <stdio.h>
#include <math.h>
void todecimal(num)
{
    int numb=num;
    int index=0,len,sum,r,i=0;
    while(numb!=0)
    {
        r=numb%10;
        numb/=10;
        sum+=sum+r*pow(2,i);
        ++i;
    }
    printf("%d",sum);
}
void main()
{
    int n;
    printf("enter the binary number\n");
    scanf("%d",&n);
    todecimal(n);
}