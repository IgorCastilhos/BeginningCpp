//
// Created by igorc on 01/12/2023.
//
#include "iostream"
#include "vector"
#include "string"
using namespace std;

void print(int = 100);
void print(double );
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num){
  cout << "Printing int: " << num << '\n';
}

void print(double num) {
  cout << "Printing double: " << num << '\n';
}

void print(string s) {
  cout << "Printing string: " << s << '\n';
}

void print(string s, string t) {
  cout << "Printing 2 strings: " << s << " and " << t << '\n';
}

void print(vector<string> v) {
  cout << "Printing vector of strings: ";
  for (auto s:v)
    cout << s + " ";
  cout << '\n';
}
int main()
{
  print();
  print(100);
  print('A');

  print(123.5);
  print(123.5F);

  print("C-style string");

  string s{"C++ string"};
  print(s);

  print("C-style string", s);

  vector<string> three_stooges{"Larry", "Moe", "Curly"};
  print(three_stooges);

  cout << '\n';
  return 0;
}