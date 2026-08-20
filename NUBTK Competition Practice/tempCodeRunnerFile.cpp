#include<iostream>
using namespace std;

int main(){

    int l,r, sum = 0;
    float count = 0.00;
    float average;

    cout<<"Enter all value: ";
    cin>>l>>r;

    for (int i = l; i <= r; i++)
    {
        sum += i;
        count++;
    }
    average = sum / count;

    cout<<"the sum is : "<<sum;
    cout<<"the average is: "<<average;
    
    return 0;
}