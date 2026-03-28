#include <iostream>
#include <string>

using namespace std;

// 1. 재귀를 이용한 이동 경로 출력 함수
void hanoi(int n, int from, int tmp, int to) {
    if (n == 1) {
        cout << from << " " << to << "\n";
        return;
    }
    hanoi(n - 1, from, to, tmp);
    cout << from << " " << to << "\n";
    hanoi(n - 1, tmp, from, to);
}

// 2. 2^n - 1을 계산하기 위한 큰 수 처리 함수
string bigIntPow(int n) {
    string res = "1";
    for (int i = 0; i< n; i++) {
        int carry = 0;
        for (int j = res.length() - 1; j >= 0; j--) {
            int num = (res[j] - '0') * 2 + carry;
            res[j] = (num % 10) + '0';
            carry = num / 10;
        }
        if (carry) res = to_string(carry) + res;
    }
    res[res.length() - 1] = (res[res.length() - 1] - '0' - 1)  + '0'; // 2^n - 1
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    cout << bigIntPow(n) << "\n";

    if (n <= 20) {
        hanoi(n, 1, 2, 3);
    }

    return 0;
}