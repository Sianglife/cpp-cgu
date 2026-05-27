#include<iostream>
using namespace std;

int A[3][3]={1, 2, 3, 4, 5, 6, 7, 8, 9};

void flip() { // 翻轉
    int tmp;
    for (int i = 0; i < 3; i++) {
        // A[0][i] <-> A[2][i] 上列與下列交換
        tmp = A[0][i];
        A[0][i] = A[2][i];
        A[2][i] = tmp;
    }
}

void rotate() { // 旋轉
    int tmp[3][3];

    // A[0][0] -> tmp[0][2]
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tmp[i][j] = A[2-j][i];
        }
    }

    // 複製tmp回A
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            A[i][j] = tmp[i][j];
        }
    }
}

int main() {
    int action[5];
    for (int i = 0; i < 5; i++) {
        // 把動作輸入到陣列中，0代表翻轉，1代表旋轉
        cin >> action[i];
    }

    for (int i = 0; i < 5; i++) {
        // 根據輸入的動作執行對應的函式
        if (action[i] == 0) {
            flip();
        } else if (action[i] == 1) {
            rotate();
        }
    }    

    // 輸出最終的矩陣
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}