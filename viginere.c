#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
       printf("Usage: ./vigenere Keyword \n"); 
       return 1;
    }
    else 
    {  
        int argvLen = strlen(argv[1]);

        for (int i = 0; i < argvLen; i++)
        {
            int alpha = isalpha(argv[1][i]);
            if (alpha == 0)
            {
                printf("Usage: ./vigenere Keyword \n"); 
                return 1;
            }            
        }

        string plaintext = get_string("Input text:  ");

        int word_length = strlen(plaintext); //length of supplied string

        for(int i = 0; i < argvLen; i++){
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z'){
                argv[1][i] = argv[1][i] - ('a'-'A');
            }
            else{
                argv[1][i] = argv[1][i];
            }
        }

        string my_key = argv[1];
        int key_loop = 0;    // set counter for looping through the keyword
        int key;        //initialize key


        for(int i =0; i < word_length; i++)
        {
            key_loop = key_loop % argvLen;
            if(my_key[key_loop] >= 65 && my_key[key_loop] <= 90)
            {
                key = my_key[key_loop] % 65;
            }
            //lowercase scenerio
            if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
            {
                printf("%c", (((plaintext[i] - 'a') + key) % 26) + 'a');
                key_loop++;
            }
            //preserve uppercase
            else if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
            {   
                printf("%c", (((plaintext[i] - 'A') + key) % 26) + 'A');
                key_loop++;
            }            
            else 
            {
                printf("%c", plaintext[i]); //if present iteration is not an alphabet, ignore
            }                  
        }
        printf("\n");
        return 0;                       
    }        
}

