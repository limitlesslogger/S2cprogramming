#include <stdio.h>
void main()
{
    int arr[10],ele,n,flag=0;
    printf("enter size of array \n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be searched\n");
    scanf("%d",&ele);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            printf("element found at %d\n",i+1);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("Element not found\n");
    }
}