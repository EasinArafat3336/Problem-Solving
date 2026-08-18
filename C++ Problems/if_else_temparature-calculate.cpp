#include <iostream>
using namespace std;

int main(){

 float temp = 50;
 
 if (temp < 0)
 {
  cout<<"Freezing weather.";
 }
 else if (temp > 0 && temp <= 10)
 {
  cout<<"Very Cold weather.";
 }
 else if (temp > 10 && temp <= 20)
 {
  cout<<"Cold weather.";
 }
 else if (temp > 20 && temp <= 30)
 {
  cout<<"Normal in Temp.";

 }
 else if (temp > 30 && temp <= 40)
 {
  cout<<"It's Hot.";
 }

 else if (temp > 40)
 {
  cout<<"It's Very Hot.";
 }

 

 





  return 0;
}