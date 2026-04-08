#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while(T--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int n;
        cin >> n;

        int count = 0;

        for (int i = 0; i < n; i++) {
            int cx, cy, r;
            cin >> cx >> cy >> r;

            int d1 = (x1 - cx) * (x1 - cx) + (y1 - cy) * (y1 - cy);
            int d2 = (x2 - cx) * (x2 - cx) + (y2 - cy) * (y2 - cy);
            int r2 = r * r;

            bool start = d1 < r2;
            bool end = d2 < r2;

            if (start != end) {
                count++;
            }
        }

        cout << count << "\n";
    }

    return 0;
}