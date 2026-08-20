#include<iostream>
using namespace std;

int main(){

    int num = 13, digit = 0, sum = 0;

    for (int i = 1; i <= num; i++)
    {
        if (num % i ==0)
        {
            digit++;
            sum = sum +i;
        }
    }

    cout<<"no of digit is : "<<digit<< endl;
    cout<<"sum of divisor digits is: "<<sum;
    

    return 0;



}