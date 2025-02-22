// Josephine Chiu, Financial Calculator Update for C
#include <stdio.h>

float inputs(float input, char type){
    printf("What is your monthly %s?\n", type);
    scanf("%f", input);
    return input;
}
void percent(float income, float amount, char type) {
    float percent = (amount/income)*100;
    printf("Your %s is %.2f, which is %.2%% of your income.\n", type, amount, percent);
}

float income;
float rent;
float utilities;
float groceries; 
float transportation;
float savings; 
float expenses; 
float total;

int main(void){
printf("Welcome to your personal Fianancial Calculator which will help you analyze your expenses and savings!\n");
income = inputs(income, "income");
rent = inputs(rent, "rent");
utilities = inputs(utilities, "utilities");
groceries = inputs(groceries, "groceries");
transportation = inputs(transportation, "transportation");

percent(income, rent, "rent");
percent(income, utilities, "utilities");
percent(income, groceries, "groceries");
percent(income, transportation, "transportation");
percent(income, expenses, "expenses");
percent(income, savings, "savings");

expenses = rent + utilities + groceries + transportation;
savings = income * .1;
total = income - savings - expenses;
    return 0;
}