#include <stdio.h>
void binary(num)
{
    int arr[20];
    int i=0;
    while(num>0)
    {
        arr[i]=num%2;
        num=num/2;
        i+=1;
    }
    //arr[i]=-1;
    printf("Binary\n");
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",arr[j]);
    }
}
void main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    binary(n);
}