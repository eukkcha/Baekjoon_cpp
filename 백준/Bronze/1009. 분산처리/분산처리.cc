#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int a, b;
        cin >> a >> b;

        int base = a % 10;

        // 어떤 수든 거듭제곱을 하면 일의 자리가 최대 4번을 주기로 반복됩니다.
        int exp = b % 4;
        if (exp == 0) exp = 4;

        int result = 1;
        for (int i = 0; i < exp; i++) {
            result = (result * base) % 10;
        }

        if (result == 0) {
            cout << 10 << "\n";
        } else {
            cout << result << "\n";
        }
    }

    return 0;
}