// Josephine Chiu, Silly Sentences for C
#include <stdio.h>

//string variables for my user inputs (minimum of 3)
char animal [20];
char celebrity[20];

int main(void){
//introdue user to program...tell them whatt is happening (print statement)
printf("Hello! Welcome to your personal Silly Sentences maker! Please answer the following questions:\n");

//create user inputs (print statments with questions AND scanf to collect the info)(same as the number of variables)
printf("What is your favorite animal? (please make plural)\n");
scanf("%s", animal);

printf("Who is your celebrity crush?\n");
scanf("%s", celebrity);

char food [20];
printf("What's your favorite food?\n");
scanf("%s", food);

//insert variables into the sentence to show the user (print statement, only 1!!) example:"hello %s", name
printf("Here's your silly sentence!\n I was walking down the street when I saw %s running away from a herd of %s with a %s flying from their hands. Celebrities these days; you can never keep up.", celebrity, animal, food);
    return 0;
}