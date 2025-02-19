int add(int numOne, int numTwo){
    printf("%d\n", numOne+numTwo);
    return 0;
}
const char* input(char type[20]){ //constant variable and the star means all
    char answer[50];
    printf("Please give me a %s:\n", type);
    scanf("%s", answer);
    return answer;
}

int main(void){
    //printf("hello world\n");
    //add(4, 9);
    //add(20, 2);
    //add(5, 9);
    //add(3, 6);
    input("name");
    input("verb");
    input("place");

    printf("%s was %s until they somehow reached %s", input("name"), input("verb"), input("place"));
    return 0;
}