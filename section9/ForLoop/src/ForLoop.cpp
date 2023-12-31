//
// Created by igorc on 29/11/2023.
//
#include "iostream"
#include "vector"
using namespace std;

int main()
{
//  for (int i = 0; i <= 10; ++i) {
//    cout << i << '\n';
//  }

//  for (int i{1}; i <= 10; i+=2) {
//    cout << i << '\n';
//  }

//  for (int i{10}; i > 0; --i)
//    cout << i << '\n';

  for (int i{10}; i <= 100; i+=10) {
    if (i % 15 == 0)
      cout << i << '\n';
  }

  for (int i{1}, j{5}; i <=5 ; ++i, ++j) {
    cout << i << " + " << j << " = " << (i+j) << '\n';
  }

  vector<int>nums {10,20,30,40,50};
  for (unsigned i{0}; i < nums.size(); ++i) {
    cout << nums[i] << '\n';
  }

  return 0;
}