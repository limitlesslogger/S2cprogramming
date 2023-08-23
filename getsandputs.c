#include <stdio.h>
void main()
{
    char nm[2];
    printf("Enter your name\n");
    //gets(nm);
    fgets(nm,2,stdin);
    //printf("My name is %s\n",nm);//warning: this program uses gets(), which is unsafe.
    printf("My name is\n");
    puts(nm);
}