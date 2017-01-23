#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int conversions() {
    double d = 2.5;
    int i = 2;
    double d2 = d/i; // would return 1.25 
    int i2 = d/1; // would return 1 i.e., integer division
    int i3{d/i}; // errors out because double -> int conversion may narrow
}

int main(){
    conversions();
    const double pi = 3.14159; // so constexpr doesn't seem to work
    pi = 7; // should fail because you can't change a constant
    cout << pi;
}
