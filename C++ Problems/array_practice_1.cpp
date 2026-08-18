
#include<iostream>
#include<climits>
using namespace std;

int main(){
  
    //storage
  int arr[6];
  int max_1 = 0;
  int max_2 = 0;

    //input
  for (int i = 0; i < 6; i++)
  {
     cout<< "Enter the value of array " << i+1<< " : ";
     cin >> arr[i];
  }
  
     //logic
  for (int i = 0; i < 6; i++)
  {
     if (arr[i] > max_1)
     {
        max_2 = max_1;
        max_1 = arr[i];
     }

     else if (arr[i] > max_2 && arr[i] != max_1)
     {
        max_2 = arr[i];
     }
  }

    cout << "The 2nd Largest Number is : " << max_2;
  

  



  return 0;
 }


