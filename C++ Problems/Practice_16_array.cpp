#include <iostream>
using namespace std;

int main(){

  int arr[5] ={77, 83, 99, 98, 80};
  int sum = 0;
  for(int i = 0; i <= 4; i++)
    {
      sum = sum + arr[i];
    }
    
  cout << "Avrage of the numbers is = " << sum / 5;

  




  return 0;
}