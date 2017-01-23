#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int main(){
    const double pi = 3.14159; // so constexpr doesn't seem to work
    pi = 7; // should fail because you can't change a constant
    cout << pi;
}
