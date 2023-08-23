#include <stdio.h>
void rowsum(int r,int c,int arr[r][c])//r and c venam elle error varum arr[r][c] arr de munne r and c veykuka
{
    for(int i=0;i<r;i++)
    {
        int rsum=0;
        for(int j=0;j<c;j++)
        {
            rsum+=arr[i][j];
        }
        printf("the sum of row %d is %d\n",i+1,rsum);
    }
}
void main()
{
    int arr[10][10],i,r,c;
    printf("enter r and c of array\n");
    scanf("%d %d",&r,&c);
    printf("Enter array elements\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    rowsum(r,c,arr);
}