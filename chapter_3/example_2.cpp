#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int main()
{
    cout << "Please enter your first name and age\n";
    string first_name = "???";
    double age_in_years = 0.0;
    cin >> first_name;
    cin >> age_in_years;
    int age_in_months = age_in_years * 12;
    cout << "Hello " << first_name << " (age in months " << age_in_months << ")\n";
    return 0;
}
