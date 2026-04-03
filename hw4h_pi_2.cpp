// Finished
#include<iostream>
#include<cmath>
using namespace std;

const double pi = 2 * asin(1.0);

int main() {
    double ep;
    cin >> ep;
    double sum = 0;
    
    int i;
    for(i = 1; ; i++) {
        sum += 4 * (pow(-1, i + 1) / (2 * i - 1));
        // cout << abs((pi - sum) / pi);
        if (abs((pi - sum) / pi) < ep) {
            break;
        }
    }
    cout << "N: " << i << endl;
    cout << "f(N): " << sum << endl;
    return 0;
}