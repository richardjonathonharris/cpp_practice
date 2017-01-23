#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int main() {
    cout << "Please enter your first and second names:\n";
    string first;
    string second;
    cin >> first >> second;
    string name = first + ' ' + second;
    cout << "Hello, " << name << "\n";
    if (first == second) cout << "That is the same name!\n"; // ah ha so that's how they do comparisons
    if (first < second) 
        cout << first << " comes before " << second << "\n"; // oh and you can compare strings alphabetically!
    if (first > second)
        cout << first << " comes after " << second << "\n";
    }

