//two loops are neede to sort first loop keeps largest elemt at last
#include <stdio.h>
void main()
{
    int n,arr[20];
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)//notice here since i+1 so go till n-1
    {
        for(int j=0;j<n-i-1;j++)
        if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nSecond largest is %d\n",arr[n-2]);
}