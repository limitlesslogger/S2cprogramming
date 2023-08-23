#include <stdio.h>
void main()
{
    char nm[20];
    printf("Enter your name\n");
    scanf("%[^\n]",&nm);
    printf("Name is %s\n",nm);
}