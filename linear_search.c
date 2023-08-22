#include <stdio.h>
void main()
{
    int n,arr[10],ele;
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched\n");
    scanf("%d",&ele);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            printf("element found at %d\n",i+1);
        }
    }
}