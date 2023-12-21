//
// Created by igorc on 29/11/2023.
//
#include "iostream"
using namespace std;

int main()
{
  for (int num1{1}; num1 <= 10; ++num1) {
    for (int num2{1}; num2 <= 10; ++num2) {
      cout << num1 << " * " << num2 << " = " << num1 * num2 << '\n';
    }
    cout << "-----------" << '\n';
  }
  return 0;
}