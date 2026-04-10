#include <iostream>
#include <vector> // vector
#include <algorithm> // sort

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int count;
    cin >> count;

    vector<int> divisors(count);
    
    for (int i = 0; i < count; i++) {
        cin >> divisors[i];
    }

    sort(divisors.begin(), divisors.end());
    long long N = (long long)divisors.front() * divisors.back();

    cout << N << "\n";

    return 0;
}