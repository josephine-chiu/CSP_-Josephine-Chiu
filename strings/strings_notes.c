// Josephine Chiu, Strings Notes for C
#include <stdio.h>
#include <string.h>

char name[20];

int main(void){
    printf("Please tell me your full name:\n");
    //scanf("%s", name);
    //fgets(name, 20, stdin); allows full name to be printed
    //printf("Hello %s, welcome to my program", name);

    char sentence[] = "The quick brown fox jumps over the lazy dog";
    //printf("%s\n", sentence[16:18]);

    //printf("%lu\n", sizeof(sentence)); //sizeof will always give me one more than strlen
    //printf("%d\n", strlen(sentence)); // 43 PHYSICAL characters

    char one[] = "Hello";
    char two[]= " World!";
    char three[] = "This is my program. ";
    two[6] =  '?';

    printf("%s\n", one);
    printf("%s\n", two);
    strcat(one,two); // put the variables in the order you want them to be
    strcat(three, one);
    printf("%s", three);
    return 0;
}