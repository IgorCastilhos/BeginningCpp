//
// Created by igorc on 02/12/2023.
//
#include "iostream"
#include "vector"

using namespace std;

int main()
{
  int num{10};
  cout << "Value of num is: " << num << '\n';         // 10
  cout << "sizeof of num is: " << sizeof num << '\n'; // 4
  cout << "Address of num: " << &num << '\n';         // 0x5ffe24

  cout << endl;

  int *p;
  cout << "Value of p is: " << p << '\n'; // 0x91ff60 - garbage
  cout << "Address of p is: " << &p << '\n'; // 0x91ff18
  cout << "sizeof of p is: " << sizeof p << '\n'; // 8

  p = nullptr; // set p to point nowhere
  cout << "Value of p is: " << p << '\n';    // 0

  cout << endl;

  int *p1 {nullptr};
  cout << "sizeof of *p1 is: " << sizeof p1 << '\n';
  double *p2 {nullptr};
  cout << "sizeof of *p2 is: " << sizeof p2 << '\n';
  unsigned long long *p3 {nullptr};
  cout << "sizeof of *p3 is: " << sizeof p3 << '\n';
  vector<string> *p4 {nullptr};
  cout << "sizeof of *p4 is: " << sizeof p4 << '\n';
  string *p5 {nullptr};
  cout << "sizeof of *p5 is: " << sizeof p5 << '\n';

  cout << '\n';

  int score{10};
  double high_temp{100.7};

  int *score_ptr {nullptr};

  score_ptr = &score;
  cout << "Value of score is: " << score << '\n';
  cout << "Address of score is: " << &score << '\n';
  cout << "Value of score_ptr is: " << score_ptr << '\n';

//  score_ptr = &high_temp;

  return 0;
}