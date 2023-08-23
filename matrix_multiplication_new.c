#include <stdio.h>
void main()
{
    /*m = no:of rows of first matrix
    n=no:of columns of first matrix
    p=row of matrix 2
    q=columns of matrix 2
    A=first matrix
    B=2nd matrix
    C=product matrix*/
    int m,n,p,q,A[10][10],B[10][10],C[10][10],i,j;
    printf("Enter m,n,p,q\n");
    scanf("%d%d%d%d",&m,&n,&p,&q);
    if(n==p)
    {
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
            int tot=0;
            for(int k=0;k<p;k++)
            {
                tot=tot+(A[i][k]*B[k][j]);
            }
            C[i][j]=tot;
        }
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
    else
    {
        printf("Matrix multiplication not possible\n");
    }
}

// /*
// code to check whether ab=ba
// //Commutativity of matrix multiplication
// #include<stdio.h>
// void main()
// {
//     int ar1[10][10],res1[10][10];
//     int ar2[10][10],res2[10][10];
//     printf("enter m,n,p,q\n");
//     int m,n,p,q,cnt=0;
//     scanf("%d %d %d %d",&m,&n,&p,&q);
//     if(n!=p)
//     {
//         printf("Multiplication not possible\n");
//     }
//     else
//     {
//         printf("Enter element of ar1\n");
//         for(int i=0;i<m;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 scanf("%d",&ar1[i][j]);
//             }
//         }
//         printf("Enter element of ar2\n");
//         for(int i=0;i<p;i++)
//         {
//             for(int j=0;j<q;j++)
//             {
//                 scanf("%d",&ar2[i][j]);
//             }
//         }
//         for(int i=0;i<m;i++)//res of A*B will be a m by q matrix
//         {
//             for(int j=0;j<q;j++)
//             {
//                 int total=0;
//                 /*in first matrix row remains fixed ie i its column changes
//                 by same pattern of second matrix the column remains ie j fixed
//                 its row changes*/
//                /* for(int k=0;k<p;k++)
//                 {
//                     total+=ar1[i][k]*ar2[k][j];
//                 }
//                 res1[i][j]=total;
//             }
//         }
//         for(int i=0;i<p;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 int total=0;
//                 for(int k=0;k<m;k++)
//                 {
//                     total+=ar2[i][k]*ar1[k][j];
//                 }
//                 res2[i][j]=total;
//             }
//         }
//         for(int i=0;i<m;i++)
//         {
//             for(int j=0;j<q;j++)
//             {
//                 printf("%d",res1[i][j]);
//             }
//         }
//         for(int i=0;i<p;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 printf("%d",res2[i][j]);
//             }
//         }
//         // for(int i=0,j=0;i<m,j<p;i++,j++)
//         // {
//         //     for(int u=0,v=0;u<n,v<q;u++,v++)
//         //     {
//         //         if(ar1[i][u]!=ar2[j][v])
//         //         {
//         //             cnt+=1;
//         //             break;
//         //         }
//         //     }
//         // }
//         if(m==p&&q==n)
//         {
//             for(int i=0;i<m;i++)
//             {
//                 for(int j=0;j<q;j++)
//                 {
//                     if(res1[i][j]!=res2[i][j])
//                     {
//                         cnt+=1;
//                         break;
//                     }
//                 }
//             }
//         }
//         if(cnt!=0)
//         {
//             printf("matrix multiplication ar1*ar[2]!=ar[2]*ar[1] not possible\n");
//         }
//         else
//         {
//             printf("matrix multiplication ar1*ar[2]=ar[2]*ar[1] possible\n");
//         }
//     }
// }
// */