// Finished Big5
#include<iostream>
using namespace std;

const string a_char[] {"??", "?A", "??", "?B", "??", "?v", "??", "??", "??", "??"}; // TODO
const string b_char[] {"?l", "??", "?G", "?f", "??", "??", "??", "??", "??", "??", "??", "??"}; // TODO

string b(int year) {
    // total 12
    int index = (year % 12) - 4;
    if (index < 0) index += 12;
    return b_char[index];
}

string a(int year) {
    // total 10
    int index = (year % 10) - 4;
    if (index < 0) index += 10;
    return a_char[index];
}

string c(int year) {
    // ?|?~?@?|?A??~???|?A?|??~?A?|
    if ((year % 4) == 0) {
        if((year % 100) == 0) {
            if ((year % 400) == 0) {
                return "?|";
            }
            return "??";
        }
        return "?|";
    }
    return "??";
}

int main() {
    int year;
    cin >> year;
    cout << a(year) << b(year) << "?~?@" << c(year) << "?~";
    return 0;
}