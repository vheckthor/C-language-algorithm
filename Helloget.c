
// # include <stdio.h>
// int main(void)
// {
//     char string[100];
//    int count = 0;
//    gets(string);
//    for (count=0;string[count] !='\0'; count++)
   

//     printf("hello, %s\n", string[count]);  

// }
#include <stdio.h>
 
int main()
{
  char z[100];
 
  printf("Enter a string\n");
  gets(z);
 
  printf("The string: %s\n", z);
  return 0;
}