/*Write a C program that takes marks as input and prints the grade according to the 
following rules: 
 Marks must be between 0 and 100. 
 If the marks are outside this range, print "Invalid Marks". 
*/

#include<stdio.h>

int main(){

    int marks;

    printf("Enter your Marks: ");
    scanf("%d",&marks);

    if (marks <= 100 && marks>= 0) 
    {
        if (marks >= 80)
        {
            printf("Grade: A+");
        }
        else if (marks < 80 && marks >= 70)
        {
            printf("Grade: A");
        }
        else if (marks < 70 && marks >= 60)
        {
            printf("Grade: A-");
        }
        else if (marks < 60 && marks >= 50)
        {
            printf("Grade: B");
        }
        else if (marks < 50 && marks >= 40)
        {
            printf("Grade: C");
        }
        else if (marks < 40 && marks >= 33)
        {
            printf("Grade: D");
        }
        else{
            printf("Grade: F");
        }
        
        
    }

    else{
        printf("Invalid Marks");
    }
    
    return 0;
}