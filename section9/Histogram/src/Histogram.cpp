//
// Created by igorc on 29/11/2023.
//
#include "iostream"
#include "vector"
using namespace std;

int main()
{
  int num_items{};

  cout << "How many data items do you have? ";
  cin >> num_items;

  vector<int>data{};

  for (int i{1}; i <=num_items ; ++i) {
    int data_item{};
    cout << "Enter data item " << i << ": ";
    cin >> data_item;
    data.push_back(data_item);
  }

  cout << "\nDisplaying Histogram" << '\n';
  for (auto val:data) {
    for (int i{1}; i <=val; ++i) {
      if (i % 5 == 0)
        cout << "*";
      else
        cout << "-";
    }
    cout << '\n';
  }

  cout << '\n';
  return 0;
}