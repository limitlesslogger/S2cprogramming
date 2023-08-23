#include <stdio.h>
void main()
{
    char str[10];
    char r,c;
    printf("Enter the string and the character to be replaced\n");
    scanf("%s %c",&str,&r);
    printf("Enter the new character\n");
    scanf(" %c",&c);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==r)
        {
            str[i]=c;
        }
    }
    printf("new\n");
    for(int i=0;str[i]!='\0';i++)
    {
        printf(" %c",str[i]);
    }
}