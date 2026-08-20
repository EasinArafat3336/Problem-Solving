#include<iostream>
using namespace std;

int main(){

    int n = 30, sumOfEven = 0, sumOfOdd = 0;

    for (int i = 1; i < n; i++)
    {
        if(i%2 ==0){
            sumOfEven += i;
        }
        else{
            sumOfOdd = sumOfOdd + i;
        }
    }

    cout<<"The sum of Even is: "<<sumOfEven<<endl;
    cout<<"The sum of ODD is: "<<sumOfOdd;


    return 0;
    
}