#include <stdio.h>
void main()
{
    int arr[10],l=0,n;
    printf("Enter a array size less than 10\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    l=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>l)
        {
            l=arr[i];
        }
    }
    printf("The largest element is %d\n",l);
}