#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

void print_square(int v) {
    cout << v << '\t' << v*v << '\n';
}

int main () {
    for (int i = 0; i<100; ++i) print_square(i);
}

