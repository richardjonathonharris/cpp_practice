#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

class Token {
    public:
        char kind;
        double value;
        Token(char ch)
            :kind(ch), value(0) {}
        Token(char ch, double val)
            :kind(ch), value(val){}
};

class Token_stream {
    public: 
        Token_stream();
        Token get();
        void putback(Token t);
    private:
        bool full;
        Token buffer;
};

Token_stream::Token_stream()
    :full(false), buffer(0) {}

void Token_stream::putback(Token t) {
    if (full) throw runtime_error("Putback into a full buffer");
    buffer = t;
    full = true;
}

Token Token_stream::get() {
    if (full) {
        full = false;
        return buffer;
    }
    char ch;
    cin >> ch;
    switch (ch) {
        case '=':
        case 'x':
        case '(': case ')':
        case '+': case '-': case '*': case '/':
            return Token(ch);
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9': 
        case '.':
            {
                cin.putback(ch);
                double val;
                cin >> val;
                return Token('8', val);
            }

        default:
            throw runtime_error("Bad Token!");
    }
}

Token get_token(){} 

Token_stream ts;

double expression();
double term();

double primary() {
    Token t = get_token();
    switch (t.kind) {
        case '(': 
            {   double d = expression();
                t = ts.get();
                if (t.kind!=')') throw runtime_error("needed closing parens");
                return d;
            }
        case '8':
            return t.value;
        default:
            throw runtime_error("primary expected");
    }
}

int main()
    try{
        cout << "Welcome to simple calculator." << endl << "Please use floating numbers" << endl;
        double val = 0;
        while (cin) {
            Token t = ts.get();
            if (t.kind == 'x') break;
            if (t.kind == '=') 
                cout << "=" << val << endl;
            else
                ts.putback(t);
            val = expression();
        }
    }
    catch (exception& e) {
        cerr << e.what() << endl;
        keep_window_open();
        return 1;
    }
    catch (...) {
        cerr << "exception \n";
        keep_window_open();
        return 2;
    }


double expression(){
    double left = term();
    Token t = ts.get();
    while (true) {
        switch (t.kind) {
            case '+':
                left += term();
                t = ts.get();
                break;
            case '-':
                left -= term();
                t = ts.get();
                break;
            default:
                ts.putback(t);
                return left;
        }
    }
}

double term(){
    double left = primary();
    Token t = ts.get();
    while (true) {
        switch (t.kind) {
            case '*': 
                left *= primary();
                t = ts.get();
                break;
            case '/': 
            {   double d = primary();
                if (d==0) throw runtime_error("divide by zero");
                left /= d;
                t = ts.get();
                break;
            }
            default:
                ts.putback(t);
                return left;
        }
    }
}


