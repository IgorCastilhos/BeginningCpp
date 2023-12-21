//
// Created by igorc on 29/11/2023.
//
#include "iostream"
using namespace std;

int main()
{
//  int num {};
//  cout << "Enter a positive integer - start the countdown: ";
//  cin >> num;
//  while (num > 0) {
//    cout << num << endl;
//    --num;
//  }
//  cout << "Boom!" << '\n';

//int num {};
//cout << "Enter a positive integer to count up to: ";
//cin >> num;
//
//int i {1};
//  while (num >= i) {
//    cout << i << '\n';
//    i++;
//  }

bool done{false};
int number{0};

  while (!done) {
    cout << "Enter an integer between 1 and 5: ";
    cin >> number;
    if (number<=1 || number >=5)
      cout << "Out of range, try again" << '\n';
    else {
      cout << "Thanks!" << '\n';
      done = true;
    }
  }

  return 0;
}