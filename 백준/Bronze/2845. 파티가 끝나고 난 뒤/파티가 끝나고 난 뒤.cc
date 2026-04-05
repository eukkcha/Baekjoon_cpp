#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int L, P;
    cin >> L >> P;
    
    int ans = L * P;

    for (int i = 0; i < 5; i++ ) {
        int report;
        cin >> report;
        cout << report - ans << " ";
    }

    return 0;
}