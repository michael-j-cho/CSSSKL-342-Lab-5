#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {

    map<int, string> cities;

    cities.insert({{1, "Seattle"}, {2, "Chicago"}, {3, "Boston"}, {4, "Atlanta"}, {5, "Miami"}});

    for (const auto& c : cities) {
        cout << c.first << ": " << c.second << endl;
    }
    cout << endl;

    cities.insert({2, "San Francisco"});

    for (const auto& c : cities) {
        cout << c.first << ": " << c.second << endl;
    }
    cout << endl;

    cities.insert({6, "San Francisco"});

    for (const auto& c : cities) {
        cout << c.first << ": " << c.second << endl;
    }
    cout << endl;

    // no runtime errors
    cities[3] = "Phoenix";
    cities[7] = "Phoenix";

    for (const auto& c : cities) {
        cout << c.first << ": " << c.second << endl;
    }
    cout << endl;

    return 0;
}