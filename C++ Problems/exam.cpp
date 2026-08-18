/*#include <iostream>
using namespace std;

int main(){

  char Charcter = 'A';

  if (Charcter == 'A' || Charcter == 'E' || Charcter == 'I' || Charcter == 'O' || Charcter == 'U' || 
      Charcter == 'a' || Charcter == 'e' || Charcter == 'i' || Charcter == 'o' || Charcter == 'u')
  {
    cout << "The Character is " << Charcter<< " vowel";
  }

  else{
    cout<<"The Chracter is "<< Charcter << " consonant";
  }
  return 0;
}*/

#include<iostream>
using namespace std;

int main(){

int sum = 0;

for (int i = 1; i <= 100; i++)
{
  
  if (i%2 == 0)
  {
    sum = sum + i;
  }
}

cout << "Sum of the even numbers is : "<< sum;

return 0;
}