#include <iostream>
using namespace std;

int main (){

  int rollNo, math, phy, chem;
  string name;
  
  cout <<"what is your name? ";
  cin >> name;
  
  cout <<"what is your roll no? ";
  cin >> rollNo;
  
  cout<<"what is your mark of Mathematics? ";
  cin >> math;
  
  cout<<"what is your mark of Physics? ";
  cin >> phy;
  
  cout<<"what is your mark of Chemistry? ";
  cin >> chem;
  
  //equation
  int totalMarks = math + phy + chem;
  int percent = totalMarks / 3;


  //output 
  cout << "Roll No: "<< rollNo <<endl;
  cout << "Name of the Studen: "<< name <<endl;
  cout << "Marks in Physics: " << phy <<endl;
  cout << "Marks in Chemistry: " << chem <<endl;
  cout << "Marks in Mathematics: " << math <<endl;
  cout << "Total Marks = " <<totalMarks  <<endl;
  cout << "Percentage: " << percent <<endl;

  if (percent >= 80 && percent <= 100)
  {
    cout <<"Division = First\n";
  }
  else if (percent <= 79 && percent >= 60)
  {
    cout <<"Division = Second\n";  
  }
  else if (percent <= 59 && percent >= 40)
  {
    cout <<"Division = Third\n";  
  }
  else{
    cout <<"Division = Fail\n";
  }
  
  

  return 0;
}