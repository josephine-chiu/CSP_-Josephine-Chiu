// Josephine Chiu, Financial Calculator for C
#include <stdio.h>

char welcome[] = "Hello! This is your personal financial calculator!";

float income;
float rent;
float utilities;
float groceries;
float transportation;
float spending;

float percent_rent;
float percent_utilities;
float percent_groceries;
float percent_transportation;
float percent_spending;

int main(void){
    // introduce user to program
printf("%s\n", welcome);

printf("What is your monthly income?\n");
scanf("%d", &income);


printf("How much does your rent cost?\n");
scanf("%d", &rent);

printf("How much do your utilities cost?\n");
scanf("%d", &utilities);

printf("How much do your groceries cost?\n");
scanf("%d", &groceries);

printf("How much does your transportation cost?\n");
scanf("%d", &transportation);

printf("");
float spending = rent+utilities+groceries+transportation;

float savings = income*0.1;

//float percent_rent = rent/income*100;

//float percent_groceries = (groceries/income)*100;

//float percent_transportation = transportation/income*100;

//float percent_spending = spending/income*100;

//scanf("%d", &savings);
    return 0;
}