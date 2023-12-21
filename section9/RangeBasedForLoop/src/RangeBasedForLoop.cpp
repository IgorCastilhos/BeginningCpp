//
// Created by igorc on 29/11/2023.
//
#include "iostream"
#include "vector"
#include "iomanip"
using namespace std;

int main()
{
//  int scores [] {10,20,30};
//  for (auto score: scores) {
//    cout << score << '\n';
//  }

//vector<double> temperatures {90.3, 49.3, 59.5, 89.4};
//double average_temp{};
//double total{};
//
//  for (auto temp: temperatures) {
//    total += temp;
//
//    if (!temperatures.empty()) {
//      average_temp = total / temperatures.size();
//    }
//  }
//
//  cout << fixed << setprecision(1);
//  cout << "Average temperature is " << average_temp << '\n';

//  for (auto val:{1,2,3,4,5}) {
//    cout << val << '\n';
//  }

//  for (auto c:"This is a test") {
//    if (c != ' ')
//    cout << c;
//  }

  for (auto c:"This is a test") {
    if (c == ' ')
      cout << '\t';
    else
      cout << c;
  }

  cout << '\n';
  return 0;
}