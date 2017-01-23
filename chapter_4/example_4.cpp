#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int main() {
    vector<int> v = {5, 6, 7, 8, 9, 10};
    vector<string> philosophers = {"Kant", "Hume", "Plato", "Me!"};
    vector<int> empty_v;
    for (int i=0; i<v.size(); ++i)
        cout << v[i] << '\n';
    for (string x : philosophers)
        cout << x << '\n';
    for (int i=0; i<10; ++i)
        empty_v.push_back(i);
    for (int i : empty_v)
        cout << i << '\n';
}
