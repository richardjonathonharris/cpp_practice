#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int main () {
    int i = 0;
    while (i<100) {
        cout << i << '\t' << i*i << '\n';
        ++i;
    }
}

