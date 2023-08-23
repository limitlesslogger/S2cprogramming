#include <stdio.h>
void sum(int arr[],int size)
{
    int s=0;
    for(int i=0;i<size;i++)
    {
        s+=arr[i];
    }
    printf("sum %d\n",s);
}
void avg(int arr[],int size)
{
    int s=0;
    float avge=0;
    for(int i=0;i<size;i++)
    {
        s+=arr[i];
    }
    avge=s/size;
    printf("Average %f\n",avge);
}
void main()
{
    int arr[10],i,n,size;
    printf("enter size of array\n");
    scanf("%d",&size);
    printf("Enter array elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    sum(arr,size);
    avg(arr,size);
}