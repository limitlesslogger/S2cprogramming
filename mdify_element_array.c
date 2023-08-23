#include <stdio.h>
int* modify(int arr[],int i,int n)
{
    arr[i]=n;
    return arr;
}
void main()
{
    int arr[10],i,n,size;
    printf("Enter the index and element\n");
    scanf("%d %d",&i,&n);
    printf("enter size of array\n");
    scanf("%d",&size);
    printf("Enter array elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int* res=modify(arr,i,n);
    for(int i=0;i<size;i++)
    {
        printf(" %d ",res[i]);
    }
}