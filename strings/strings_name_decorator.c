// Josephine Chiu, Name Decorator for C
#include <stdio.h>
#include <string.h>

char name[20];
char dec_one[] = "~~~";
char dec_two[] = "~~~";

int main(void){
    printf("Hello! Please tell me your nickname:\n");
    scanf("%s", &name);
    printf("That is a wonderful name, %s! Welcome to my program. I'm glad you're here!\n", name);

    strcat(dec_one, name);
    strcat(dec_one, dec_two);
    printf("This is your decorated name!%s", dec_one);
    return 0;

//decoration_1 = ("~~~")
//decoration_2 = ("~~~")
//print(decoration_1+name+decoration_2)
//print("I hope you like your decorated name!")dfd