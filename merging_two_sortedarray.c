#include <stdio.h>
void main()
{
    int n1,n2,arr1[20],arr2[20],sorted[40],i,j,k;
    printf("Enter size of array 1\n");
    scanf("%d",&n1);
    printf("Enter elements of array1\n");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter size of array two\n");
    scanf("%d",&n2);
    printf("Enter elements of array2\n");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("Sorting the array1\n");
    for(int i=0;i<n1-1;i++)
    {
        for(int j=0;j<n1-i-1;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                int temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
    printf("Sorting the array2\n");
    for(int i=0;i<n2-1;i++)
    {
        for(int j=0;j<n2-i-1;j++)
        {
            if(arr2[j]>arr2[j+1])
            {
                int temp=arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=temp;
            }
        }
    }
    //k ne nerathe declare cheythu athu evide initialise cheyunne enne ollu 
    //evideya declare and initialise cheythengil k ne loop inu porthu scope illa
    /*
    i first loop inte index ne control cheyunnu
    j second loop inte index in control cheyunne
    k third loop inte index ine control cheyunnu
    randu loop inteyum size same aya atrem time avarade elements compare cheyanam
    */
    for(i=0,j=0,k=0;i<n1&&j<n2;k++) 
    {
        if(arr1[i]<arr2[j]) 
        {
        sorted[k]=arr1[i];
        i++;
        }
        else
        {
        sorted[k]=arr2[j];
        j++;
        }
    }
    while(i<n1) 
    {
    sorted[k]=arr1[i];
    k++;i++;
    } 
    while(j<n2)
    {
        sorted[k]=arr2[j];
        k++;j++;
    } 
    printf("The merged array is...\n"); 
    for(i=0;i<k;i++)
    printf("%d ",sorted[i]); }
    /*
    printf("Merging sorted arrays\n");
    for(int i=0,j=0,k=0;i<n1&&j<n2;k++)
    {
 
        
            if(arr1[i]>arr2[j])
            {
                sorted[k]=arr2[j];
                j++;
            }
            else
            {
                sorted[k]=arr1[i];
                i++;
            }
    }
    while(i<n1)
    {
        sorted[k]=arr1[i];
        k++;
        i++;
    }    
        else if(k<n1)
        {
            while(i<n1)
            {
                sorted[k]=arr1[i];
                i++;
            }
        }
        else if(k<n2)
        {
            while(j<n2)
            {
                sorted[k]=arr2[j];
                j++;
            }
        }
    }
    printf(" array1\n");
    for(int i=0;i<n1;i++)
    {
        printf("%d ",arr1[i]);
    }
    printf(" array2\n");
    for(int i=0;i<n2;i++)
    {
        printf("%d ",arr2[i]);
    }
    printf("Merged array\n");
    int i=0;
    for(int i=0;i<n1+n2;i++)
    {
        printf("%d ",sorted[i]);
    }
}
*/
/*
for(int i=0,k=0;i<n1+n2-2;i++,k++)
    {
        if(i<n1&&i<n2)
        {
            for(int i=0,j=0;)
            if(arr1[i]>arr2[i])
            {
                sorted[k]=arr2[i];
            }
            else
            {
                sorted[k]=arr1[i];
            }
        }
        else if(i<n1)
        {
            while(i<n1)
            {
                sorted[k]=arr1[i];
                k++;
                i++;
            }
        }
        else if (i<n2)
        {
            while(i<n2)
            {
                sorted[k]=arr1[i];
                k++;
                i++;
            }
        }
    }*/