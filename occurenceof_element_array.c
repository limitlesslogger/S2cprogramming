#include <stdio.h>
void main()
{
    /*arr nammal kodukkunna array anu fr aa array arr le oro element inteyum frequency
    olla array anu visited ennu parayunna variable ore element ine vere
    evidelum kandal aa arr[j] nu corresponding ayitu fr[j] il -1 kodukum 
    array arr ile oro element ne anu nammal pinneyum repeat cheyunondonnu nokunne
    so atleast once aa element ondu so count=1*/
    int arr[10],fr[10],n;
    int visited=-1;
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The input is\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int count=1;
        for(int j=i+1;j<n;j++)//i th element kazinju athu evidelum repeat cheyunondo so i+1
        {
            if(arr[i]==arr[j])
            {
                count++;
                fr[j]=visited;//repeat cheyunna avide anu -1 kodukkuka
            }
        }
        if(fr[i]!=visited)//first occurence anu fr[i]!=visited
        {
            fr[i]=count;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(fr[i]!=visited)
        {
            printf("count of %d is %d\n",arr[i],fr[i]);
        }
    }
}
