#include <stdio.h>
void main()
{
    int r,c,arr[10][10],transpose[10][10];
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
        for(int j=0;j<c;j++)
        {
            transpose[j][i]=arr[i][j];
        }
    }
    printf("Transpose \n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf(" %d ",transpose[i][j]);
        }
        printf("\n");
    }
}