#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{

    if(argc != 2)
    {
       printf("Usage: ./ceaser Key \n"); 
       return 1;
    }
    else 
    {  
        int length = strlen(argv[1]);

        for (int i =0; i < length; i++)
        {
            int num = isdigit(argv[1][i]);
            if (num == 0)
            {
                printf("Usage: ./ceaser Key \n"); 
                return 1;
            }
            
        }

        int key = atoi(argv[1]);
        string input = get_string("Plain Text: ");
        int inputLen = strlen(input);
        printf("Cryptic Text: ");
        int decode = 0;

        for (int i = 0; i < inputLen; i++)
        {
           if (input[i] >= 'a' && input[i] <= 'z')
           {
               decode = (((input[i] - 'a') + key) % 26) + 'a';
               printf("%c", decode);
           }
           else if (input[i]>= 'A' && input[i] <= 'Z')
           {
               decode = (((input[i] - 'A') + key) % 26) + 'A';
               printf("%c", decode);
           }
           else
           {
               printf("%c", input[i]);
           }                      
        }
        printf("\n");
        return 0;                           
    }        
}
