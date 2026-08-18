/*Question-01:: A simple C program that converts a given number of seconds into hours, minutes, 
and seconds. */

#include <stdio.h>

int main(){
    int n, hours, minutes, seconds;

    printf("Give Seconds");
    scanf("%d", &n);

    hours = n / 3600;
    minutes = (n % 3600) / 60;
    seconds = n  % 60;

    printf("Hours   : %d\n", hours); 
    printf("Minutes : %d\n", minutes); 
    printf("Seconds : %d\n", seconds); 

}