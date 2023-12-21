// section 9
// Created by igorc on 27/11/2023.
// switchEnum

#include "iostream"
using namespace std;

int main()
{
  enum Direction
  {
    lefty, righty, up, down
  };

  Direction heading {lefty};

  switch(heading) {
    case lefty:
      cout << "Going left" << endl;
      break;
    case righty:
      cout << "Going right" << endl;
      break;
    case up:
      cout << "Going up" << endl;
      break;
    case down:
      cout << "Going down" << endl;
      break;
  }

  cout << endl;
  return 0;
}