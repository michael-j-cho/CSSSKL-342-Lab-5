#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

int main() {
  srand(time(NULL));

  vector<int> vect(5);

  for (int i = 0; i < vect.size(); i++) {
    vect[i] = rand() % 100 * 2;
  }

  for (int i = 0; i <= 5; i++) {
    vect.push_back((rand() % 100 * 2) + 3);
  }

  for (int i = 0; i < vect.size(); i++) {
    cout << vect.at(i) << " ";
  }
  cout << endl;

  sort(vect.begin(), vect.end());

  for (int i = 0; i < vect.size(); i++) {
    cout << vect.at(i) << " ";
  }
  cout << endl;

  return 0;
}