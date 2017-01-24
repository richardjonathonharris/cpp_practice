#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int main(){
    try {
        vector<int> v;
        for (int x; cin>>x;)
            v.push_back(x);
        for (int i = 0; i<=v.size(); ++i) // <= is the error here
            cout << "v[" << i << "] == " << v[i] << "\n";
    }
    catch (out_of_range) {
        cerr << "Oops out of range error\n";
        return 1;
    }
    catch (...) {
        cerr << "Exception something went terribly wrong be very sad now plz\n";
        return 2;
    }
}

