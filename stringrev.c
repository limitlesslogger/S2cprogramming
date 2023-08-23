#include<stdio.h> 
int main()
{
char s[100];
int i,len;
printf("Enter the string..\n"); 
scanf("%[^\n]",s); 
for(i=0;s[i]!='\0';i++)
{
len=i;
}
printf("Length of the string=%d\n",len);
for(int j=len;j>=0;j--)
{
    printf("%c",s[j]);
}
}