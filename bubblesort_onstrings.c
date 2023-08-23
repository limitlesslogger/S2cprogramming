#include <stdio.h>
#include <string.h> 
main()
{
char names[100][50],temp[50];
int i,j,n;
printf("Enter the number of names..\n"); scanf("%d",&n);
printf("Enter names..\n"); for(i=0;i<n;i++)
{
 scanf("%[^\n]",names[i]);
} for(i=0;i<n-1;i++)
for( j=0;j<n-1-i;j++)
if (strcmp(names[j],names[j+1])>0)
{
    strcpy(temp,names[i]); strcpy(names[i],names[ j]); strcpy(names[ j],temp);
}
printf("List of names in sorted order\n"); for(i=0;i<n;i++)
printf("%s\n",names[i]); }