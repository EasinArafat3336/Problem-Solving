#include<iostream>
using namespace std;

int main(){

    int price;
    float discount, disPrice;
    cin>>price;

    if (price>=5000)
    {
        discount = price *0.10;
        disPrice = price - discount;

        cout<<"The discount: "<<discount<<endl;
        cout<<"After is discount: "<<disPrice;
    }
    else if (price>2000 && price < 5000)
    {
        discount = price *0.05;
        disPrice = price - discount;

        cout<<"The discount: "<<discount;
        cout<<"After is discount: "<<disPrice;
    }
    

    return 0;
}