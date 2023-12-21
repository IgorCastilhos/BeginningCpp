//
// Created by igorc on 02/12/2023.
//
#include "iostream"
#include "vector"

using namespace std;

int main()
{
  int score {100};
  int *score_ptr{&score};

  cout << *score_ptr << endl;  // 100
  cout << score_ptr << endl;   // 0x40111ffd08
  cout << &score_ptr << endl;  // 0x40111ffd08

  cout << endl;

  *score_ptr = 200;
  cout << *score_ptr << '\n';  // 200
  cout << score << '\n';       // 200

  cout << endl;
  //**************************************
  double high_temp {100.7};
  double low_temp {37.4};
  double *temp_ptr {&high_temp};

  cout << *temp_ptr << '\n'; // 100.7

  temp_ptr = &low_temp;

  cout << *temp_ptr << '\n'; // 37.4

  cout << endl;
  //**************************************
  string name {"Igor"};
  string *string_ptr {&name};

  cout << *string_ptr << '\n'; // Igor

  name = "Golias";
  cout << *string_ptr << '\n'; // Golias

  cout << endl;
  //**************************************
  vector<string> stooges {"Larry", "Moe", "Curly"};
  vector<string> *vector_ptr {nullptr};

  vector_ptr = &stooges;

  cout << "First stooge: " << (*vector_ptr).at(0) << '\n';

  cout << "Stooges: ";
  for (const auto& stooge: *vector_ptr)
    cout << stooge << " ";
  cout << endl;

  cout << endl;
  return 0;
}