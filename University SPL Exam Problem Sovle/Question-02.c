/*A simple program that converts a number of days into years, months, and days. 
It assumes: (1 year = 365 days, 1 month = 30 days) */

#include<stdio.h>

int main(){

    int totalDays;
    int years, months, days;

    printf("Enter the Totaldays : ");
    scanf("%d", &totalDays);

    years = totalDays/ 365;
    months = (totalDays % 365)/30;
    days = (totalDays % 365)%30;

    printf("Years : %d\n", years);
    printf("Months : %d\n", months);
    printf("Days : %d\n", days);
   
}