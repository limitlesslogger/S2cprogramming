#include <stdio.h>
void main()
{
    int m,n,p,q,A[10][10],B[10][10],C[10][10],i,j,tot;
    printf("Enter m,n,p,q\n");
    scanf("%d%d%d%d",&m,&n,&p,&q);
    printf("Enter elements of first array\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter elements of second array\n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    printf("first matrix is \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf(" %d ",A[i][j]);
        }
        printf("\n");
    }
    printf("Elements of second matrix\n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf(" %d ",B[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            tot=0;
            for(int k=0;k<n;k++)
            {
                tot=tot+A[i][k]*B[k][j];
            }
        }
        C[i][j]=tot;
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf(" %d ",C[i][j]);
        }
        printf("\n");
    }
}