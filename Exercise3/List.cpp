#include <iostream>
#include <list>

using namespace std;

int main() {

  list<int> list;

  list.push_back(1);
  list.push_back(3);
  list.push_back(5);
  list.push_back(7);
  list.push_back(9);

  list.push_front(2);
  list.push_front(4);
  list.push_front(6);
  list.push_front(8);
  list.push_front(10);

  cout << list.front() << " " << list.back() << endl;

  list.remove(3);
  list.sort();

  for (auto const i : list) {
    cout << i << " ";
  }
  cout << endl;

  list.remove_if([](int n) { return n % 2 == 1; });

  for (auto const i : list) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}