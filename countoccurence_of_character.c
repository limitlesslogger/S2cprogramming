#include <stdio.h>
void main()
{
    char s[10],f[10];
    int visited=-1,cnt=0;
    printf("Enter the string\n");
    scanf("%[^\n]",s);
    for(int i=0;s[i]!='\0';i++)
    {
        cnt=1;
        for(int j=i+1;s[j]!='\0';j++)
        {
            if(s[i]==s[j])
            {
                cnt+=1;
                f[j]=visited;
            }
        }
        if(f[i]!=visited)
        {
            f[i]=cnt;
        }
    }
    for(int j=0;s[j]!='\0';j++)
    {
        if(f[j]!=-1)
        {
            printf("%c occurs %d times\n",s[j],f[j]);
        }
    }
}