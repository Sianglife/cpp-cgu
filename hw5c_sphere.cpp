// Finished Big5
#include<iostream>
#include<cmath>
using namespace std;

const double pi = 2 * asin(1.0);

double sphere(double radius) {
    cout << "半徑為" << radius << "的球體，體積為";
    cout << (4.0 / 3.0 * pi * pow(radius, 3));
    cout << "，表面積為";
    return (4.0 * pi * pow(radius, 2));
}

void circle(double radius) {
    cout << "半徑為" << radius << "的圓，圓周為";
    cout << 2 * pi * radius;
    cout << "，面積為" << (pi * pow(radius, 2));
}

int main() {
    double r;
    cin >> r;
    cout << sphere(r) << endl;
    
    circle(r);

    return 0;
}