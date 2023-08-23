#include <stdio.h>
void main()
{
    char s1[10],rev[10];
    int len=0;
    printf("Enter the string\n");
    scanf("%[^\n]",&s1);
    printf("the entered string is %s\n",s1);
    for(int i=0;s1[i]!=0;i++)
    {
        len+=1;
    }
    printf("The length of the string is %d\n",len);
    int i=0;
    for(int j=len-1,i=0;j>=0;j--,i++)
    {
        printf("i,j %d,%d",i,j);
        rev[i]=s1[j];
        printf("rev[i] %c\n",rev[i]);
    }
    printf("s1 %s\n",s1);
    printf("rev %s\n",rev);
}