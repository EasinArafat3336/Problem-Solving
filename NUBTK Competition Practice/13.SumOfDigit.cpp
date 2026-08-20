#include<iostream>
using namespace std;

int main(){

    int num, remain, sum = 0;

    cout<<"Enter a num: ";
    cin>>num;

    while (num>0)
    {
        remain = num %10;
        sum += remain;
        num = num / 10;
        
    }

    cout<<"The sum of digits is : "<<sum;
   
    return 0;
}