

#include <iostream>
using namespace std;

int main(){


  float celsius;
  
  cout << "what is celsius temperature? ";
  cin >> celsius;

  float fahrenheit = (celsius * 9/5) + 32;

  cout << "Fahrenheit = " << fahrenheit << endl;



  return 0;
}