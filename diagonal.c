#include <stdio.h>
void main()
{
    int r,c,arr[10][10],flag=0;
    printf("Enter rows and columns\n");
    scanf("%d%d",&r,&c);
    printf("Enter array elements\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i!=j)
            {
                if(arr[i][j]!=0)
                {
                    flag=-1;
                    break;
                }
            }
        }
    }
    if(flag==0)
    {
        printf("diagonal matrix\n");
    }
    else if(flag==-1)
    {
        printf("not diagonal \n");
    }
}