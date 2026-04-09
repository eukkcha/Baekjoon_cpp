#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        // 두 점 사이의 거리의 제곱 (루트를 씌우지 않음으로써 오차 방지)
        int distSq = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);

        // 두 반지름의 합의 제곱과 차의 제곱
        int sumSq = (r1 + r2) * (r1 + r2);
        int diffSq = (r1 - r2) * (r1 - r2);

        // 1. 두 원이 완전히 일치하는 경우 (무한대)
        if (distSq == 0 && r1 == r2) {
            cout << -1 << "\n";
        }
        // 2. 한 점에서 만나는 경우 (외접 또는 내접)
        else if (distSq == sumSq || distSq == diffSq) {
            cout << 1 << "\n";
        }
        // 3. 두 점에서 만나는 경우
        else if (diffSq < distSq && distSq < sumSq) {
            cout << 2 << "\n";
        }
        // 4. 만나지 않는 경우
        else {
            cout << 0 << "\n";
        }
    }

    return 0;
}