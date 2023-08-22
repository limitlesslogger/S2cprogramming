/*
To find the product of two matrix we need p by q multiplied by mby n the 
q==m*/
#include <stdio.h>
void main()
{
    int p,q,m,n,m1[10][10],m2[10][10],pr[10][10],i,j,k,s;
    printf("Enter p,q,m,n\n");
    scanf("%d%d%d%d",&p,&q,&m,&n);
    if(q!=m)
    {
        printf("Multiplication not possible\n");
    }
    else
    {
        printf("Enter elements of matrix 1\n");
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
            {
                scanf("%d",&m1[i][j]);
            }
        }
        printf("Enter elements of matrix 2\n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                scanf("%d",&m2[i][j]);
            }
        }
        printf("Matrix 1 is \n");
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
            {
                printf(" %d ",m1[i][j]);
            }
            printf("\n");
        }
        printf("Matrix 2 is \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf(" %d ",m2[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<p;i++)
        {
            for(j=0;j<n;j++)
            {
                s=0;
                for(k=0;k<m;k++)
                {
                    s+=m1[i][k]*m2[k][j];
                    printf("s is %d \n");
                }
            }
            pr[i][j]=s;
        }
        printf("product matrix is\n");
        for(i=0;i<p;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf(" %d ",pr[i][j]);
            }
            printf("\n");
        }
    }
}