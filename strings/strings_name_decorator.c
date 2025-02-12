// Josephine Chiu, Name Decorator for C
#include <stdio.h>
#include <stdio.h>

char name[20];


int main(void){
    printf("Hello! Please tell me your nickname:\n");
    scanf("%s", name);
    printf("That is a wonderful name, %s! Welcome to my program. I'm glad you're here!\n", name);

char dec_1[] = "~~~";
char dec_2[] = "~~~";

    printf("Here is your decoratd name!", dec_1, name, dec_2);
    strcat(dec_1, name);
    return 0;
}



//decoration_1 = ("~~~")
//decoration_2 = ("~~~")
//print(decoration_1+name+decoration_2)
//print("I hope you like your decorated name!")dfd