// Josephine Chiu, Old Enough Practice for C
#include <stdio.h>
#include <string.h>

int age;
int main(void){
    printf("Hello! Welcome to my program that will sort you into a category based on your age!\n");
    
printf("How old are you (in years)?\n");
scanf("%d", &age);

if(age < 5){
    printf("You can't vote, drive, get a learner's permit, or go to school. Whomp whomp.\n"); 
}else if(age ==5){
    printf("You can't vote, or drive, or get a learner's permit, but you can go to school!\n");
} else if(age <= 14){
    printf("You are not old enough to vote or drive or get a learners permit, but you can go to school so hooray!\n");
} else if(age == 15){
    printf("You can't vote, but you can drive if you get a learners permit which you're old enough to get. Also, you can go to school so you know, yay.\n");
} else if(age == 16){
    printf("You can first get a learners permit and then drive to school! However, you still can't vote...");
}else if(age == 17){
    printf("You can first get a learners permit and then drive to school! However, you still can't vote...");
} else{
    printf("You are FINALLY old enough to vote, you are old enough to drive, you are old enough to get a learners permit, and you are old enough to go to school! Hooray!\n");
}
    return 0;
}

// in c, use "&&" to have a range
// if(age >=18 && <= 30){

// if(age >=18 && age <= 90){
    //printf("You're an adult");
//}else{
    //printf("You're still a kid");
    