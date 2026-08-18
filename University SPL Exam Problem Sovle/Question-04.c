/*Write a C program that: 
If the number is positive, add 10 to it. 
If the number is negative, multiply it by -1 (make it positive). 
If the number is zero, keep it unchanged 
*/

#include<stdio.h>

int main(){

    int num = 10;

    if (num > 0)
    {
        num += 10;
        printf("%d", num);
    }
    else if(num< 0){num *= -1;
        printf("%d", num);
    }

    else{
        printf("%d", num);
    }
    
    return 0;
}