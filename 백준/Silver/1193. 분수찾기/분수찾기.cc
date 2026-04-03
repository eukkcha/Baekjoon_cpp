#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X;
    cin >> X;

    int k = 1;
    while(X > k) {
        X -= k;
        k++;
    }

    if (k % 2 == 1) {
        cout << k - X + 1 << "/" << X << "\n";
    } else {
        cout << X << "/" << k - X + 1 << "\n";
    }

    return 0;
}