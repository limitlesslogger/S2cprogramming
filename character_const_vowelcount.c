#include <stdio.h>
void main()
{
    char str[10];
    printf("enter string\n");
    scanf("%s",&str);
    printf("Entered string is %s\n",str);
    int v=0,c=0,d=0,space=0;
    for(int i=0;str[i]!='\0';i++)
    {
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
    {
        v+=1;
    }
    }
}