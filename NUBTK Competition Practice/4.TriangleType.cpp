#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;

    if(a==b && b==c){
        cout<<"Equentral";
    }
    else if(a==b || b==c || a==c) {
        cout<<"Isoscles";
    }
    else if (a != b && b !=c && a !=c)
    {
        cout<<"Scalene";
    }


    return 0;
    
}