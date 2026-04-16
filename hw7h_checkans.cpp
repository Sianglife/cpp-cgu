#include<iostream>
using namespace std;

int main() {
    int ans[5];
    
    for(int i = 0; i < 5; i++) {
        cin >> ans[i];
    }

    int stu_cnt;
    cin >> stu_cnt;
    int stu_ans_current;
    while(stu_cnt--) {
        int score = 0;
        for(int i = 0; i < 5; i++) {
            cin >> stu_ans_current;
            if (stu_ans_current == ans[i]) {
                score += 20;
            }
        }
        cout << score << endl;
    }
}