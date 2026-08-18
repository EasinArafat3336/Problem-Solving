#include <iostream>
using namespace std;

int main(){

 float price = 500.35;
 
 float* p = &price;

 float** p1 = &p;
 


//  cout << price <<endl;
//  cout << p <<endl;
//  cout << *p <<endl;
//  cout << &price;

  cout << p1 <<endl;
  cout << **p1;



  return 0;
}