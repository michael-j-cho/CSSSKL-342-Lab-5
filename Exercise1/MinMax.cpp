#include <iostream>
#include <limits>

using namespace std;

int main() {
  cout << "int min limit: " << numeric_limits<int>::min() << endl;
  cout << "int max limit: " << numeric_limits<int>::max() << endl << endl;

  cout << "unsigned int min limit: " << numeric_limits<unsigned int>::min()
       << endl;
  cout << "unsigned int max limit: " << numeric_limits<unsigned int>::max()
       << endl
       << endl;

  cout << "long min limit: " << numeric_limits<long>::min() << endl;
  cout << "long max limit: " << numeric_limits<long>::max() << endl << endl;

  cout << "double min limit: " << numeric_limits<double>::min() << endl;
  cout << "double max limit: " << numeric_limits<double>::max() << endl << endl;

  cout << "float min limit: " << numeric_limits<float>::min() << endl;
  cout << "float max limit: " << numeric_limits<float>::max() << endl;

  return 0;
}