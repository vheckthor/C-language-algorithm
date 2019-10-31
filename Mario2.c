#include <stdio.h>
#include <cs50.h>

int main (void){
    int x
	do{
		 = get_int("Height: ");
	}
	while(x<=0 || x>8);
    if(x >= 1 && x <= 8){
              for (int i=0 ; i < x ; i++){
        for(int j=1 ; j < x-i; j++){
            printf(" ");
        }
        for(int k=0 ; k <= i ; k++){
            printf("#");
        }
        printf("  ");
        for(int k=0 ; k <= i ; k++){
            printf("#");
        }
        
        printf("\n");
    }
    
}
}