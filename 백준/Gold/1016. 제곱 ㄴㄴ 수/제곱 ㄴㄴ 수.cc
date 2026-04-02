#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long min, max;
    cin >> min >> max;

    vector<bool> squarenono(max - min + 1, false);

    for (long long i = 2; i * i <= max; i++) {
        long long square = i * i;

        long long start = min / square;
        if (min % square != 0) {
            start++;
        }

        for (long long j = start; j * square <= max; j++) {
            squarenono[j * square - min] = true;
        }
    }

    int count = 0;
    for (int i = 0; i <= max - min; i++) {
        if (!squarenono[i]) {
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}