#include<iostream>
using namespace std;

int main(){

    int n = 20, sumOfOdd = 0, sumOfEven = 0;

    for(int i = 1; i<= n; i++){
        if(i%2==0){
            sumOfEven += i;
        }
        else{
            sumOfOdd += i;

        }
    }

    cout<<"Number of even : "<< sumOfEven<<endl;
    cout<<"Number of odd: "<<sumOfOdd;
    
}