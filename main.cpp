#include <iostream>
#include <string>

// Homework 3 — Richard Webster
// CIS 5 Week 03 · Types & variables

using std::string;
using std::cout;
using std::endl;

int main() {
  const int CURRENT_YEAR = 2026;

  string name = "Richard_W";
  int age = 44;
  //integers are always whole numbers, so it works
  //good for an age.
  double height_m = 5.9;
  //doubles are good for storing numbers with decimals, if I 
  //used int, it would drop the numbers after the decimal point
  //when it prints. So it works good for GPA as well, below.
  char initial = 'R';
  bool student = false;
  int credits = 12;
  //int credits = "twelve"; this would not compile because an integer
  //is always a whole number.  So I would need to enter a value without
  //quotations and would have to enter a number.  "twelve" is a string.
  double gpa = 3.59;
  //const int CURRENT_YEAR = 2026; would not compile a second time because once a constant
  // is declared it can't be changed.  I actually did this and tried to compile, because
  // I didn't notice that it was already declared before I started working.;

  cout << "=== About me ===\n";

  cout << "Name: " << name << endl;
  
  cout << "Age: " << age << endl;

  cout << "Height: " << height_m << endl;

  cout << "Initial: " << initial << endl;
  
  cout << "Student: " << student << endl;

  cout << "Credits:" << credits << endl;

  cout << "GPA: " << gpa << endl;

  cout << "Year: " << CURRENT_YEAR << endl;

  gpa = 3.75;

  cout << name << ", at age 44, is " << height_m << " feet tall, currently going to college" << endl;
  cout << "majoring in Engineering.  His current GPA is " << gpa << " and he is taking" << endl;
  cout << credits << " credits total this fall " << CURRENT_YEAR << " semester." << endl;

  


  return 0;
}
