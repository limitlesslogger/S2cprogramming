#include <stdio.h>
void main()
{
    char nm[10];
    printf("Enter the string\n");
    scanf("%[^\n]",&nm);
    int i=0,len=0;
    while(nm[i]!='\0')
    {
        len+=1;
        i+=1;
    }
    printf("len is %d\n",len);
    for(int i=len;i>=0;i--)
    {
        printf("%c",nm[i]);
    }
    printf("\n");
}



// #include<stdio.h> 
// int main()
// {
// char s[100];
// int i,len;
// printf("Enter the string..\n"); 
// scanf("%[^\n]",s); 
// for(i=0;s[i]!='\0';i++)
// {
// len=i;
// }
// printf("Length of the string=%d",len);
// // for(int i=len;i>=0;i++)
// // {
// //     printf("%c",s[i]);
// // }
// }
