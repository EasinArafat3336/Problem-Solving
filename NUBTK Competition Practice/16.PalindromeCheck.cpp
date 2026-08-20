#include<iostream>
using namespace std;

int main(){
    int num, remain, reverse = 0;
    int first, last;

    cout<<"Enter a number: ";
    cin>> num;
    
    last = num % 10;

    while (num>0)
    {
        remain = num % 10;
        reverse = reverse * 10 + remain;
        num = num / 10;
    }


    first = reverse % 10;

    cout<<"First number is : "<<first<<endl;
    cout<<"last number is : "<<last;

    
    
    
    return 0;
}