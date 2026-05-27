#include <cstring>
#include <cctype>
#include <iostream>
using namespace std;

int main() {
    char str[100];
    cin.getline(str, 100); // 讀取一行字串
    
    int product_result = 1; // 乘積結果，初始為1
    
    int len = strlen(str); // 計算字串長度
    int cnt_continue = 0; // 連續輸入數字的計數
    char tmp_str[100]; // 暫存數字的字串
    for (int i = 0; i < len; i++) {
        if (isdigit(str[i])) { // 如果是數字，取到數字結束並存入int
            tmp_str[cnt_continue] = str[i]; // 把數字存入暫存字串
            cnt_continue++;
        } else { // 如果不是數字，輸出目前的數字並重置計數
            if (cnt_continue > 0) {
                tmp_str[cnt_continue] = '\0'; // 結束字串
                product_result *= atoi(tmp_str); // 把暫存字串轉成數字並乘到結果上
                cnt_continue = 0; // 重置計數
            }
        }
    }

    cout << product_result << endl; // 輸出乘積結果    
}
