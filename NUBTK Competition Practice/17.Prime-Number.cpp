/*You can solve this Prime number problem by n /2 or sqrt(n) times*/

#include<iostream>
#include<cmath>
using namespace std;


int main(){

    int num, notPrime = 0;
    cout<<"enter: ";
    cin>>num;

    if (num <= 1)
    {
        notPrime++;
    }

    else
    {
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                notPrime++;
                break;
            } 
        }


        
    }

    if (notPrime>0)
    {
        cout<<"It is not a prime number";
    }
    else{
        cout<<"it is a prime number";
    }
    

    return 0;
    
    
}