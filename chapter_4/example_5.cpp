#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int main(){
    vector<double> temps;
    for (double temp; cin>>temp; )
        temps.push_back(temp);

    double sum = 0;
    for (double x : temps) sum += x;
    cout << "Average temperature: " << sum/temps.size() << "\n";

    sort(temps.begin(), temps.end());
    cout << "Median temperature: " << temps[temps.size()/2] << "\n";
}
