// Finished
#include<iostream>
#include<array>
using namespace std;

int main() {
    int n;
    int units[] {50, 10, 5, 1};
    array<int, 4> cnts = {0};
    int amount;
    cin >> amount;

    int index = 0;
    while(amount > 0) {
        while(units[index] <= amount) {
            amount -= units[index];
            cnts[index]++;
        }
        index++;
    }

    for(int i = 0; i < 4; i++) {
        cout << cnts[i];
        if (i == 3) {
            cout << endl;
        } else {
            cout << " ";
        }
    }
    return 0;
}