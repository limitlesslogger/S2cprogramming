// #include <stdio.h>
// void main()
// {
//     int n,arr[12],ele;
//     printf("Enter size of array\n");
//     scanf("%d",&n);
//     printf("Enter array elements\n");
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("The input is\n");
//     for(int i=0;i<n;i++)
//     {
//         printf(" %d ",arr[i]);
//     }
//     printf("Enter the element to be searched\n");
//     scanf("%d",&ele);
//     printf("Sorting array\n");
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n-i-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     printf("Sorted array\n");
//     for(int i=0;i<n;i++)
//     {
//         printf(" %d ",arr[i]);
//     }
//     int l=arr[n-1];
//     int f=arr[0];
//     int mid;
//     mid=(f+l)/2;
//     while(arr[mid]!=ele)
//     {
//         if(arr[mid]>ele)
//         {
//             f=mid=1;
//         }
//         else
//         {
//             l=mid-1;
//         }
//         mid=(f+l)/2;
//     }
// }
#include <stdio.h>
void main()
{
int arr[50],i,j,n,exchng,temp;
printf("Enter the number of elements n<=50\n"); scanf("%d",&n);
printf("Enter %d elements\n",n); for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n-1;i++) {exchng=0;
for( j=0;j<n-1-i;j++) {
if (arr[j]>arr[j+1]) {
temp=arr[ j];
arr[ j]=arr[ j+1]; arr[ j+1]=temp; exchng=1;
}
}
if(exchng==0) break;
}
printf("Sorted List...\n"); for(i=0;i<n;i++)
printf("%d\n",arr[i]); }
