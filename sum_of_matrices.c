#include <stdio.h>
void main()
{
    int r,c,arr1[10][10],arr2[10][10],sum[10][10];
    printf("Enter number of rows and columns\n");
    scanf("%d %d",&r,&c);
    printf("Enter elements of array 1\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter elements of array 2\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("Sum matrix\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf(" %d ",sum[i][j]);
        }
        printf("\n");
    }
}