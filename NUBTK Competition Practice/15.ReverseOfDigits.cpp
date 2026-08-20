#include<iostream>
using namespace std;

int main(){

    int num, remain, reverse = 0;

    cout<<"Enter a num: ";
    cin>>num;

    while (num>0)
    {
        remain = num %10;
        reverse = reverse * 10 + remain;
        num = num / 10;
        
    }

    cout<<"The Product of digits is : "<<reverse;
   
    return 0;
}