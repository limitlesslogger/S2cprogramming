#include <stdio.h>
void main()
{
    int arr[20];
    arr[0]=0;arr[1]=1;
    for(int i=2;i<=19;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(int i=0;i<20;i++)
    {
        printf(" %d ",arr[i]);
    }
}