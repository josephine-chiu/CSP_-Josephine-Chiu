// Josephine Chiu, Financial Calculator for C
#include <stdio.h>

int main(void){

char welcome[] = "Hello! Welcome to your personal financial calculator!";

float income, rent, utilities, groceries, transportation, savings, expenses, total;

float percent_rent, percent_utilities, percent_groceries, percent_transportation, percent_savings, percent_expenses;


printf("%s\n", welcome);
printf("What is your monthly income?\n");
scanf("%f", &income);
printf("How much does your rent cost?\n");
scanf("%f", &rent);
printf("How much do your utilities cost?\n");
scanf("%f", &utilities);
printf("How much do your groceries cost?\n");
scanf("%f", &groceries);
printf("How much does your transportation cost?\n");
scanf("%f", &transportation);


expenses = rent + utilities + groceries + transportation;
savings = income * .1;
total = income - savings - expenses;


printf("Your monthly income is $%.2f\n", income);
printf("Your monthly rent costs $%.2f\n", rent);
printf("Your monthly utilities cost $%.2f\n", utilities);
printf("Your monthly groceries costs $%.2f\n", groceries);
printf("Your monthly transportation costs $%.2f\n", transportation);
printf("Your monthly expenses are $%.2f\n", expenses);
printf("Your monthly savings are $%.2f\n", savings);
printf("You have $%.2f\n", total);


percent_rent = rent/income*100;
percent_utilities = utilities/income*100;
percent_groceries = groceries/income*100;
percent_transportation = transportation/income*100;
percent_expenses = expenses/income*100;
percent_savings = savings/income*100;


printf("The cost of your rent is %.1f%% of your income\n", percent_rent);
printf("The cost of your utilities are %.1f%% of your income\n", percent_utilities);
printf("The cost of your groceries are %.1f%% of your income\n", percent_groceries);
printf("The cost of your transportation is %.1f%% of your income\n", percent_transportation);
printf("Your expenses are %.1f%% of your income\n", percent_expenses);
printf("Your savings are %.1f%% of your income\n", percent_savings);
    return 0;
}