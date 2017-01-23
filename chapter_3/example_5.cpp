#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int main() {
    int number_of_words = 0;
    string previous = " ";
    string current;
    while (cin>>current) { // While looops
        ++number_of_words;
        if (previous == current)
            cout << "word number " << number_of_words 
                << " repeated word: " << current << "\n";
        previous = current;
    }
}

