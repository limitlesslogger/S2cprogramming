#include <stdio.h>
void main()
{
    int arr[20],n;
    printf("Enter size of the array\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted \n");
    for(int i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
}