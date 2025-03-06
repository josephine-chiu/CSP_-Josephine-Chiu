// Josephine Chiu, My Family Loop for C
#include <stdio.h>

int main(void){
char family[][20] = {"Mom", "Ben", "Elle", "Emma"};
int flength = sizeof(family)/sizeof(family[0]);
int m = 0;
while(m<flength){
    printf("Hello %s!\n", family[m]);
    m++;
}
    return 0;
}