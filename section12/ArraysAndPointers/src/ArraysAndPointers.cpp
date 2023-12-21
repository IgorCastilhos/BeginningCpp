//
// Created by igorc on 02/12/2023.
//
#include "iostream"

using namespace std;

int main()
{
  int scores[] {100, 98, 89};

  cout << "Value of scores: " << scores << '\n';

  int *scores_ptr(scores);
  cout << "Value of score_ptr: " << scores_ptr << '\n';

  cout << "\nArray subscript notation --------------------------" << '\n';
  cout << scores[0] << '\n';
  cout << scores[1] << '\n';
  cout << scores[2] << '\n';

  cout << "\nArray offset notation --------------------------" << '\n';
  cout << *scores << '\n';
  cout << *(scores + 1) << '\n';
  cout << *(scores + 2)<< '\n';

  cout << "\nPointer subscript notation --------------------------" << '\n';
  cout << scores_ptr[0] << '\n';
  cout << scores_ptr[1] << '\n';
  cout << scores_ptr[2] << '\n';

  cout << "\nPointer offset notation --------------------------" << '\n';
  cout << *scores_ptr << '\n';
  cout << *(scores_ptr + 1) << '\n';
  cout << *(scores_ptr + 2) << '\n';

  cout << '\n';
  return 0;
}