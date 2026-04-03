// Finished
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double r, v, a;
    const double pi = 2.0 * asin(1.0);
    cin >> r;
    
    // 體積
    v = (4.0 / 3.0) * pi * pow(r, 3);
    
    // 表面積
    a = 4.0 * pi * pow(r, 2);
    
    
    cout << v << " " << a;
    
}