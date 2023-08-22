#include <stdio.h>
void main()
{
    int r,c,arr[10][10];
    printf("Enter number of rows and columns\n");
    scanf("%d %d",&r,&c);
    printf("Enter elements\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        int rsum=0;
        for(int j=0;j<c;j++)
        {
            rsum+=arr[i][j];
        }
        printf("Sum of row %d is %d\n",i+1,rsum);
    }
}