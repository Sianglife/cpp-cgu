// Finished
#include<iostream>
#include<algorithm>
using namespace std;

int sum_from_to(int a, int b) {
    int sum = 0;
    for(int i = min(a, b); i <= max(a, b); i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int m;
    cin >> m;

    while(m--) {
        int first, last;
        cin >> first >> last;
        cout << sum_from_to(first, last) << endl;
    }

}