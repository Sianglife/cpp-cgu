#include<iostream>
using namespace std;

double det3(double x11, double x12, double x13,
    double x21, double x22, double x23,
    double x31, double x32, double x33) {
    double R;
    R = (x11 * x22 * x33) + (x12 * x23 * x31) + (x21 * x32 * x13) - (x31 * x22 * x13) - (x32 * x23 * x11) - (x12 * x21 * x33);
    return R;
}

void outer(double x1, double y1, double x2, double y2,
 double x3, double y3, double& cx, double& cy) {
    double det;
    det = 0.5 * det3(x1, y1, 1, x2, y2, 1, x3, y3, 1);
    
    cx = det3(x1 * x1 + y1 * y1, y1, 1, x2 * x2 + y2 * y2, y2, 1, x3 * x3 + y3 * y3, y3, 1) / (4.0 * det);
    cy = det3(x1, x1 * x1 + y1 * y1, 1, x2, x2 * x2 + y2 * y2, 1, x3, x3 * x3 + y3 * y3, 1) / (4.0 * det);
    return;
}

int main() {
    double x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double area = 0.5 * det3(x1, y1, 1, x2, y2, 1, x3, y3, 1);
    
    if (area <= 1.e-6) {
        cout << "不能輸出三角形";
    } else {
        double cx, cy;
        outer(x1, y1, x2, y2, x3, y3, cx, cy);
        cout << "x: " << cx << ", y: " << cy ;
    }
    return 0;   
}