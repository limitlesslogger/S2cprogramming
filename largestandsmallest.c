#include <stdio.h>
void ls(int array[],int n)//[] is needed
{
    int l=array[0];
    int s=array[0];
    for(int i=0;i<n;i++)
    {
        if(array[i]>l)
        {
            l=array[i];
        }
        else if(array[i]<s)
        {
            s=array[i];
        }
    }
    printf("s %d l %d",s,l);
}
void main()
{
    int arr[10],i,size;
    printf("enter size of array\n");
    scanf("%d",&size);
    printf("Enter array elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    ls(arr,size);
}