#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int main(){
    try{
        double d = 0;
        cin >> d;
        if (!cin) throw runtime_error("Could not read a double here");
        cout << "Very good that was a double!\n";
        return 0;
    }
    catch (runtime_error& e) {
        cout << "runtime error: " << e.what() << "\n";
        keep_window_open();
        return 1;
    }
}

