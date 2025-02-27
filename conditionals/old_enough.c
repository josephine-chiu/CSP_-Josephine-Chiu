// Josephine Chiu, Old Enough Practice for C
#include <stdio.h>
#include <string.h>

int age;
int main(void){
    printf("Hello! Welcome to my program that will sort you into a category based on your age!\n");
    
printf("How old are you (in years)?\n");
scanf("%d", &age);

if(age <= 14){
    printf("You are not old enough to vote or drive or get a learners permit, but you can go to school so hooray!\n");
} else if(age == 15){
    printf("You're special!! You can vote (if you're above 18), but you can drive if you get a learners permit which you're old enough to get. Also, you can go to school so you know, yay.\n");
} else if(age == 16){
    printf("You can first get a learners permit and then drive to school! However, you still can't vote...");
} else{
    printf("You are FINALLY old enough to vote, you are old enough to drive, you are old enough to get a learners permit, and you are old enough to go to school! Hooray!\n");
}
    return 0;
}