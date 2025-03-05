// Josephine Chiu, Loops Notes for C
#include <stdio.h>

int main(void){
// 1. What is a loop? 
    //

// 2. What are the two types of loops?
    // For loops
    //int x;
    //for(x = 0; x<10; x++){
    //    printf("Hello\n");
    //}
    ////While loop
    //int i=1;
    //while(i<10){
    //    printf("%d\n", i);
    //    i++;
    //}

// 3. What is iteration
    // the act of repeating
    // reference an iteration as a specific time through the loop

// 4. What are lists (arrays)?
    // A bunch of values in one variable

// 8. How do you make lists in C?
int grades[] = {97, 95, 100, 70, 94, 98, 64};
    
    //In the brackets we say how long the list will e, if list is set there brackets can be blank
    //Data type is given as whatever is in the list (All have to be the same data type)
    //List is surrounded by curly brackets{} with commas between each item ,
printf("%d\n", grades[3]); 
    // To print one item we put the index number in the brackets when we print
grades[2] = 73;
    // update grades one at a time using the index number
printf("%d\n", grades[2]);


// This tells me the number of bytes in array
printf("%lu", sizeof(grades));

// How to get the size of an array (list)
int length = sizeof(grades)/sizeof(grades[0]);
printf("%d\n", length);

// 9. How do you make for loops in C?
    // iterators shoudl be x or i
int t;
    // in parentheses, 1. starting point 2. endpoint (or go until point) 3. what we count by
for(t=0;t<6;t++){ //++ is for 1, do += for any other number like 2,3,etc.
    printf("%d\n", t);
}
int l;
for(l=0; l<length; l++){
    printf("%d\n", grades[l]);
}

// 10. How do you make while loops in C?
    // use iterator to set start point
int iterator = 0;
while(iterator <=100){
    printf("%d\n", iterator);
    iterator += 10;
}
    //the inverse (counting backwards)
int iterator = 100;
//while line sets the stop point/how long it goes
while(iterator >=0){
    printf("%d\n", iterator);
    iterator -= 10;
}

char movies[][20] = {"Cinderella", "The Smurf Movie", "Transformers", "Cars", "Up", "1984"};
int mlength = sizeof(movies)/sizeof(movies[0]);
int m = 0;
while(m<mlength){
    printf("%s\n", movies[m]);
    m++;
}
    
    return 0;
}