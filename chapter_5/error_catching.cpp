#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

class Bad_name{};

void check_name(string name) {
    if (name!="Richard") throw Bad_name{};
}


int main() {
    try{
        cout << "Insert something dummy!\n";
        string my_string;
        cin >> my_string;
        check_name(my_string);
    }
    catch(Bad_name){
        cout << "You should have said Richard silly!\n";
    }
}
