// Josephine Chiu, Time of Day for C
#include <stdio.h>
#include <time.h>

int main(void){
    //current hour
    time_t now = time(NULL);
    struct tm*tm_struct = localtime(&now);
    int hour = tm_struct->tm_hour;
    printf("%d\n", hour);

if(hour <= 12){
    printf("Stop. It's still the morning.");
}else if(hour <= 17){
    printf("Good afternoon. The sun is still blazing.");
}else{
    printf("Good evening!");
}
    return 0;
}
