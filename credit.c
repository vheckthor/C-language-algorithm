#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void)
{
    long number = get_long("Number : ");

    char str[20];
    sprintf(str, "%li", number);
    int strLength = strlen(str);

    int firstSum = 0;
    int secondSum = 0;
    int n;
    int digitSum;

    for (int i = strLength - 2; i >= 0; i-=2)
    { 
      if (((str[i] - '0') * 2) > 9)
      {
        n = ((str[i] - '0') * 2) - 9;
        firstSum += n;         
        continue;
      }         
      firstSum += (str[i] - '0') * 2;
    }

    for(int i = strLength - 1; i >= 0; i-=2)
    {
        secondSum += (str[i] - '0');
    }

    digitSum = firstSum + secondSum;
    
    if (digitSum % 10 != 0)
    {        
        printf("Invalid\n");
    }
    else
    {
        if(strLength == 15 && str[0] == '3' && (str[1] == '4' || str[1] == '7'))
        {
            printf("AMEX\n");
        }
        else if((strLength == 16) && (str[0] == '5') && (str[1] == '1' || str[1] == '2' || str[1] == '3' || str[1] == '4' || str[1] == '5'))
        {
            printf("MASTERCARD\n");
        }
        else if((strLength == 13 || strLength == 16) && str[0] == '4')
        {
            printf("VISA\n");
        }else
        {
            printf("INVALID CARD\n");
        }
        
    }  
}