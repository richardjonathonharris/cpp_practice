#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int main(){
    cout << "Please enter expression (can handle +, -, *, and /)\n";
    cout << "add an x to end expression (like 1+2*3x): ";
    int lval=0;
    int rval;
    cin>>lval;
    if (!cin) runtime_error("no first operand");
    for (char op; cin>>op;) {
        if (op!='x') cin >> rval;
        if (!cin) runtime_error("no second operand");
        switch(op) {
            case '+':
                lval += rval;
                break;
            case '-':
                lval -= rval;
                break;
            case '*':
                lval *= rval;
                break;
            case '/':
                lval /= rval;
                break;
            default:
                cout << "Result: " << lval << "\n";
                keep_window_open();
                return 0;
        }
    }
    runtime_error("Bad expression");
}
