#include<iostream>
using namespace std;

int main() {
    int max_score = -1, max_id = -1, min_score = 101, min_id = -1;
    int rank[5] {0};
    int pass_sum = 0, pass_cnt = 0;

    int n, tmp;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> tmp;
        if (tmp <= 59) {
            rank[0]++;
        } else if (tmp <= 69) {
            rank[1]++;
        } else if (tmp <= 79) {
            rank[2]++;
        } else if (tmp <= 89) {
            rank[3]++;
        } else {
            rank[4]++;
        }

        if (tmp > max_score) {
            max_score = tmp;
            max_id = i;
        }
        if (tmp < min_score) {
            min_score = tmp;
            min_id = i;
        }

        if (tmp >= 60) {
            pass_sum += tmp;
            pass_cnt++;
        }
    }

    cout << "90~100分 " << rank[4] << "人，\n";
    cout << "80~89分 " << rank[3] << "人，\n";
    cout << "70~79分 " << rank[2] << "人，\n";
    cout << "60~69分 " << rank[1] << "人，\n";
    cout << "0~59分 " << rank[0] << "人，\n\n";

    cout << "最高分 " << max_id << "號 " << max_score << "分\n";
    cout << "最低分 " << min_id << "號 " << min_score << "分\n";
    cout << "及格平均分數為 " << ((double)pass_sum/ pass_cnt) << " 分";
    
    return 0;
}
