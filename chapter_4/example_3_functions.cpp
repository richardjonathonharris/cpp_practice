#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int square(int x) {
    return x * x;
}

int main () {
    for (int i = 0; i<100; ++i)
        cout << i << '\t' << square(i) << '\n';
}

