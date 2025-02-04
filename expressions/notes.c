// Josephine Chiu, Expressions Notes c
#include <stdio.h>
#include <math.h> //this lets us do exponents
//integers in when we set the variable and 5d when we print
//floats float when we set the variable and 5f when we print
//strings (words) have char (character) when we set the variable and %s when we print
int mynum; 
float percent;
int add = 4+6;
int sub = 4-6;
int mul = 4*6;
float div = 4/6;
int mod = 6%4;
float ex = pow(5, 2); //exponent for c


int main(void){
    //printf("Type a number: \n");
    //scanf("%d", &mynum);
    //printf("You inputed %d\n", mynum);
    //printf("give me a percent as a decimal: \n");
    //scanf("%f", &percent);
    //printf("Your percent is %f\n", percent);

    printf("%d\n", add);
    printf("%d\n", sub);
    mul = 7*4; //resetting the variable and has to happen inside of main
    printf("%d\n", mul);
    printf("%f\n", div);
    printf("%.2f\n", div); //how many places you want after the decimal

    printf("%d\n", mod);
    printf("%f\n", ex);

    
    return 0;
}