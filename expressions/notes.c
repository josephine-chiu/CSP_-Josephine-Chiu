// Josephine Chiu, Expressions Notes c
#include <stdio.h>
//integers in when we set the variable and 5d when we print
//floats float when we set the variable and 5f when we print
//strings (words) have char (character) when we set the variable and %s when we print
int mynum; 
float percent;

int main(void){
    printf("Type a number: \n");
    scanf("%d", &mynum);
    printf("You inputed %d\n", mynum);
    printf("give me a percent as a decimal: \n");
    scanf("%f", &percent);
    printf("Your percent is %f\n", percent);
    return 0;
}