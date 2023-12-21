//
// Created by igorc on 29/11/2023.
//
#include "iostream"
#include "vector"

using namespace std;

int main() {
  vector<int> numbers{};
  char selection{};

  do {
    //Display menu
    cout << "\nP - Print numbers" << '\n';
    cout << "A - Add a number" << '\n';
    cout << "M - Display mean of the numbers" << '\n';
    cout << "S - Display the smallest number" << '\n';
    cout << "L - Display the largest number" << '\n';
    cout << "Q - Quit" << '\n';
    cout << "\nEnter your choice: ";
    cin >> selection;

    if (selection == 'P' || selection == 'p') {
      if (numbers.empty())
        cout << "[] - the list is empty" << '\n';
      else {
        cout << "[";
        for (auto num: numbers)
          cout << num << ", ";
        cout << "]" << '\n';
      }
    } else if (selection == 'A' || selection == 'a') {
      int num_to_add {};
      cout << "Enter an integer to add to the list: ";
      cin >> num_to_add;
      numbers.push_back(num_to_add);
      cout << num_to_add << " added" << '\n';
    } else if (selection == 'M' || selection == 'm') {
        if (numbers.empty())
          cout << "Unable to calculate mean - no data" << '\n';
        else {
          int total {};
          for (auto num: numbers)
            total += num;
          cout << "The mean is : " << static_cast<double>(total)/numbers.size() << '\n';
      }
    } else if (selection == 'S' || selection == 's') {
        if (numbers.empty())
          cout << "Unable to determine the smallest - list is empty" << '\n';
        else {
          int smallest = numbers.at(0);
          for (auto num:numbers)
            if (num < smallest)
              smallest = num;
          cout << "The smallest number is: " << smallest << '\n';
      }
    } else if (selection == 'L' || selection == 'l') {
      if (numbers.empty())
        cout << "Unable to determine the largest - list is empty" << '\n';
      else {
        int largest = numbers.at(0);
        for (auto num:numbers)
          if (num > largest)
            largest = num;
        cout << "The largest number is: " << largest << '\n';
      }
    } else if (selection == 'Q' || selection == 'q') {
      cout << "Goodbye" << '\n';
    } else {
      cout << "Unknown selection, please try again" << '\n';
    }



  } while (selection != 'q' && selection != 'Q');

  cout << '\n';
  return 0;
}