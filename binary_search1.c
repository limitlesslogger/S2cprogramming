#include <stdio.h>
void main()
{
    int arr[10],ele,n,flag=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array entered\n");
    printf("Enter element to be searched\n");
    scanf("%d",&ele);
    int l=0;
    int r=n-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(arr[mid]==ele)
    {
        printf("element found at %d\n",mid+1);
        flag=1;
        break;//do not forget to break
    }
        else if(arr[mid]>ele)
        {
            r=mid-1;
        }
        else if(arr[mid]<ele)
        {
            l=mid+1;
        }
    }
    if(flag==0)
    {
        printf("Element not found\n");
    }
}