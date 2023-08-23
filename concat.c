#include <stdio.h>
#include <string.h>
void main()
{
    char des[20],src[10];
    printf("Enter destination and string to be concatenated\n");
    scanf("%s %s",&des,&src);
    strcat(des,src);
    printf("des is %s\n",des);
}