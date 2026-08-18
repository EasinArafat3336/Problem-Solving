
#include <iostream>
using namespace std;

int main(){

 
 int math, phy, chem;


  //INPUT
 cout <<"Check Your Eligiblity\n";

 cout <<"Enter Your mark of Mathematics: ";
 cin >> math;

 cout <<"Enter Your mark of Physics: ";
 cin >> phy;

 cout <<"Enter Your mark of Chemistry: ";
 cin >> chem;
 
 //conditions
 if (math >= 65 && phy >= 55 && chem >= 50 )
 {
   if (math + phy + chem >= 190 || phy + math >= 140)
   {
    cout <<"Your are eligible for admission.";
   }
   else
   {
    cout <<"Your are not eligible for admission.";
   }
 } 
  
 else
 {
  cout <<"Your aren't eligible for admission.";
 }
 














  return 0;
}