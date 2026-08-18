#include<iostream>
using namespace std;

int main(){

 double num1, num2;

 cout << "Enter a number: ";
 cin >> num1;

 cout <<"Enter another number: ";
 cin >> num2;

 if (num1 > num2)
 {
  cout << "This is the large number: " << num1;
 }

 else if (num2 > num1)
 {
  cout <<"This is the large number: " << num2;
 }
 else  
 {
  cout <<"The two number is equal";
 }







  return 0;
}