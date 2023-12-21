//
// Created by igorc on 02/12/2023.
//
#include "iostream"
#include "vector"

using namespace std;

int main()
{
  int *int_ptr {nullptr};
  int_ptr = new int;           // allocate an integer on the heap
  cout << int_ptr << '\n';     // 0x2848f92
  delete int_ptr;         // frees the allocated storage

  size_t size {0};
  double *temp_ptr {nullptr};

  cout << "How many temps?";
  cin >> size;

  temp_ptr = new double[size];

  cout << temp_ptr << '\n';

  delete [] temp_ptr;

  cout << '\n';
  return 0;
}