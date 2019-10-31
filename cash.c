#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void) {
  float amount;
    do{
       amount = get_float("Change owed: ");
  }
    while(amount<0);
    int answer = round(amount * 100);
    int twentyfive = 25;
    int ten = 10;
    int five = 5;
    int one = 1;
    int change25 = round(answer/twentyfive);
    int remainder25 = answer - (change25*twentyfive);
    int change10 = round(remainder25/ten);
    int remainder10 = remainder25 - (change10*ten);
    int change5 = round(remainder10/five);
    int remainder5 = remainder10-(change5*five);
    int change1 = round(remainder5/one);
    int fin = change25 + change10 + change5 + change1;
        printf("%i\n",fin);
}

