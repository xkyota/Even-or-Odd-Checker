#include <stdio.h> 

int main(void){
    int num;

    printf("Enter your number >>> ");
    scanf("%d", &num); 

    if (num % 2 == 0)
    {
        printf("Odd \n"); 
    } else
    {
        printf("Even \n"); 
    }

    return 0; 
}