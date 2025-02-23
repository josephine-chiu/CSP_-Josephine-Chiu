// Josephine Chiu, Financial Calculator Update for C 

#include <stdio.h>

float input(char*type, float*input){
    printf("What is your monthly %s:\n", type);
    scanf("%f", input);
    return *input;
}

void percent(float cost, float income, const char* type) {  
    float percent = (cost / income) * 100;  
    printf("Your %s is $%.2f, which is %.2f%% of your income.\n", type, cost, percent);  
}
float total;
float spendings;
float savings;
float rent;
float income;
float utilities;
float groceries;
float transportation;

int main(void){

printf("Welcome to the Financial Calculator! Please answer the follwing questions in order to fully analyze your savings and expenses.\n");

income= input("income", &income);
rent = input("rent", &rent);
utilities = input("utilities", &utilities);
groceries = input("groceries", &groceries);
transportation = input("transportation", &transportation);

savings = income*0.1;
spendings = income-savings-rent-utilities-groceries-transportation;
total = income - savings - spendings;

percent(total, income, "total");
percent(rent, income, "rent");  
percent(utilities, income, "utilities");  
percent(groceries, income, "groceries");  
percent(transportation, income, "transportation");  
percent(savings, income, "savings");  
percent(spendings, income, "spendings");  
    return 0;
}

//hi Ms. larose. This is josephine. I tried my best. :)