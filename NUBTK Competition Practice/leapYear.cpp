#include<iostream>
using namespace std;

int main(){
    int year = 1900;

    if ((year%4==0 && year % 100 != 0) || year%400==0)
    {
        cout<<"it is the leap Year";
    }
    else{
        cout<<"it is not a leap Year";
    }
    
}