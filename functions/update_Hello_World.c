// Josephine Chiu, Update Hello World for C
#include <stdio.h>

char user(char name[20]){
    printf("Hello %s",name); //the variable "name" is the parameter above
}

int main(void){
    user("Jasper\n"); //using user(), you can put a name in the parentheses and it will be put into the greeting phrase
    user("Amon\n");
    user("Sam\n");
    user("Vincent\n");
    user("Sasha\n");
    return 0;
}