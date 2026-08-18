/*C program to find the largest among three numbers*/

#include<stdio.h>

int main(){

    int a , b , c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b && a>c)
    {
        printf("a is the greatest");
    }
    else if (b>a && b>c)
    {
        printf("b is the greatest");
    }
    else{
        printf("c is the greastest");
    } 
}