#include<iostream>
#include<cmath>
using namespace std;

double f(int x, int n) {
    double term = (2.0 / (2 * n - 1)) * pow(x - 1 / x + 1, 2 * n - 1);
    return term;
}

int main() {
    double x, sum = 0;
    int i;
    cin >> x;
    for (i = 1; i<100000; i++) {
        sum += f(x, i);
        if (abs(((log(x) - sum) / log(x)) < 0.0001)) break;
    }
    cout << i << " " << sum; 
    return 0;
} 