#include <stdio.h>
void main()
{
    char s1[10],s2[10],c[20],k;
    printf("Enter the two strings\n");
    scanf("%s %s",s1,s2);
    int len1=0,len2=0;
    printf("The strings are %s %s\n",s1,s2);
    for(int i=0;s1[i]!=0;i++)
    {
        len1+=1;//first character counted as 1
    }
    printf("length of string 1 %d\n",len1);
    for(int i=0;s2[i]!=0;i++)
    {
        len2+=1;
    }
    printf("length of string 2  %d\n",len2);
    printf("Concatinating\n");
    for(k=0;k<len1;k++)
    {
        c[k]=s1[k];
    }
    for(int n=0;n<len2;n++)
    {
        c[k+n+1]=s2[n];
    }
    printf("%s",c);
}