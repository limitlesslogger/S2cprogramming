#include <stdio.h>
void main()
{
    int n,arr[10],ele,flag=0,i;
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched\n");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            printf("element found at %d\n",i+1);
            flag=1;
        }
    }
    if(flag==0)
    {
        arr[i]=ele;
    }
    printf("Array is\n");
    for(int i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
}