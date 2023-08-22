/*oru element eduthitu athinte count nokitu athu display cheythekuva in the blog 
this is my approach*/

#include <stdio.h>
void main()
{
    int arr[12],fr[12],n,i,cnt,flag=-1;
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("input is\n");
    for(int i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        cnt=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cnt+=1;
                fr[j]=flag;
            }
        }
        if(fr[i]!=flag)
        {
            fr[i]=cnt;
        }
    }
    printf("Elements of fr\n");
    for(int i=0;i<n;i++)
    {
        printf(" %d ",fr[i]);
    }
    printf("unique elements\n");
    for(int i=0;i<n;i++)
    {
        
        if(fr[i]==1&&fr[i]!=-1)
        {
            printf(" %d ",arr[i]);
        }
    }
    printf("Duplicate elements\n");
    for(int i=0;i<n;i++)
    {
        
        if(fr[i]!=1&&fr[i]!=-1)
        {
            printf(" %d ",arr[i]);
        }
    }
}