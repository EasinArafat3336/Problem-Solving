#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int a,p, total = 1;
    cin>>a>>p;
    
    for (int i = 1; i <= p; i++)
    {
       total = total * a;
    }
    
    cout<<"the total value is: "<<total;

}