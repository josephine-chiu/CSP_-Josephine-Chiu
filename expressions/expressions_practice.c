// Josephine Chiu, Expressions Practice.c
#include <stdio.h>
#include <math.h> //this lets us do exponents

int one = 7-24/8*4+6;
int nine = 18/3-7+2*5;
int two = 6*4/12+72/8-9;
int twenty_six = (17-6/2) + 4*3;
int negative_one = -2*(1*4-2/2) + (6+2-3);
int negative_three = -1*((3-4*7)/5)-2*24/6;
int four = (3*pow(5, 2) / 15) - (5-pow(2, 2));
int twenty_three = (pow(1, 4)*pow(2, 2) + pow(3, 3)) - pow(2, 5)/4;
int ten = (pow(22/2-2*5, 2)) + (pow(4-6/6, 2));

int main(void){
printf("%d\n", one);
printf("%d\n", nine);
printf("%d\n", two);
printf("%d\n", twenty_six);
printf("%d\n", negative_one);
printf("%d\n", negative_three);
printf("%d\n", four);
printf("%d\n", twenty_three);
printf("%d\n", ten);
    return 0;
}
