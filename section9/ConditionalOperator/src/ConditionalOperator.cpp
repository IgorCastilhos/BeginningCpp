//
// Created by igorc on 29/11/2023.
//

#include "iostream"
using namespace std;

int main()
{
//  int num {};
//  cout << "Enter an integer: ";
//  cin >> num;
//  if (num % 2 == 0)
//    cout << num << " is even" << '\n' ;
//  else
//    cout << num << " is odd" << '\n' ;
//  cout << num << " is " << ((num % 2 == 0) ? "even" : "odd");

  int num1{}, num2{};
  cout << "Enter two integers separated by a space: ";
  cin >> num1 >> num2;

  if (num1 != num2)
  {
    cout << "Largest: " << ((num1 > num2) ? num1 : num2) << '\n';
    cout << "Smallest: " << ((num1 < num2) ? num1 : num2) << '\n';
  }

  cout << '\n';
  return 0;
}