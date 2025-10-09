
#include<iostream>
using namespace std;

int main(){

 float n, sum = 1.0;

 cout <<"Enter a number: ";
 cin>> n;

 for (int i = 2; i <= n; i++)
 {
   
   sum = sum + 1.0 / pow(i, i);
 }
 cout <<"Sum of the numbers: "<< sum;
 






  return 0;
}