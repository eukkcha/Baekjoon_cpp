#include <iostream>

using namespace std;

bool is_hansu(int N) {
    if (N < 100) {
        return true;
    }
    else if (N == 1000) {
        return false;
    }
    else {
        int h = N/100;
        int t = (N / 10) % 10;
        int o = N % 10;

        if (h - t == t - o) {
            return true;
        }
        else {
            return false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (is_hansu(i)) {
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}