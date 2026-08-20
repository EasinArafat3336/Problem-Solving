#include<iostream>
using namespace std;

int main(){

    int num, remain, pro = 1;

    cout<<"Enter a num: ";
    cin>>num;

    while (num>0)
    {
        remain = num %10;
        pro = pro * remain;
        num = num / 10;
        
    }

    cout<<"The Product of digits is : "<<pro;
   
    return 0;
}