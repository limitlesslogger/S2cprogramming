// #include <stdio.h>
// #include <string.h>
// void main()
// {
//     char content[10],find[2];
//     printf("Enter the content and to be found\n");
//     scanf("%s %s",&content,&find);
//     printf(strchr(content,find));
// }


#include <stdio.h>  
#include <string.h>  
int main ()  
{  
    const char str[] = "Program using strchr";  
    const char ch = 'm'; // character to be searched  
    char *ptr;   
      
    printf (" Original string is: %s \n", str);  
    
    ptr = strchr( str, ch);  
    printf (" The first occurrence of the '%c' in '%s' string  is: '%s' ", ch, str, ptr);  
    return 0;  
}  
/*const char *ptr : This is a pointer to a constant character. 
You cannot change the value pointed by ptr, but you can change the pointer itself.*/