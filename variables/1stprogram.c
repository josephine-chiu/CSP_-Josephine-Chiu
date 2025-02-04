#include <stdio.h>

int myNum;

int main(void){
    printf("Enter a number: \n");
    scanf("%d", &myNum);
    printf("You entered: %d\n", myNum);
    printf("Type a number: \n");
    scanf("%d", &myNum);

    printf("Your number is: %d\n", myNum);
    return 0;
}
