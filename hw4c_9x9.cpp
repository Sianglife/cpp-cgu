// Finished
#include<iostream>
#include<sstream>
#include<string>
#include<array>
using namespace std;

array<string, 19> lines;

string space(string s, int target) {
    string out;
    int left = target - s.size();
    while (left--) {
        out += " ";
    }
    out += s;
    return out;
}

int main() {
    for (int i = 2; i <= 9; i++) {
        for (int k = 1; k <= 9; k++) {
            stringstream ss;
            ss << space(to_string(i), 2) << " * " << space(to_string(k), 2) << " = " << space(to_string(i * k), 2) << "   ";

            if (i < 6) {
                lines[k] += ss.str();
            } else {
                lines[10 + k] += ss.str();
            }
        }
    }

    for(string s: lines) {
        cout << s << endl;
    }
    return 0;
}