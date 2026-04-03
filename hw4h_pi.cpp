// Finished
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    double sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += pow(-1, i + 1) / (2 * i - 1); 
    }
    double pi = 4 * sum;
    cout << pi;
}