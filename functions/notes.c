// Josephine Chiu, Functions Notes for C
#include <stdio.h>

int add(int numOne, int numTwo){
    printf("%d\n", numOne+numTwo);
    return 0;
}
const char* word(char type[20]){ //constant variable and the star means all
    char answer[50];
    printf("Please give me a %s:\n", type);
    getStr(answer, sizeof(answer)-1);
    scanf("%s", answer);
    return answer;
}

int main(void){
    //printf("hello world\n");
    //add(4, 9);
    //add(20, 2);
    //add(5, 9);
    //add(3, 6);
    //input("name");
    //nput("verb");
    //input("place");

//don't return strings in C!!!
    return 0;
}