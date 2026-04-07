#include <iostream>
#include <vector>

using namespace std;

struct Count
{
    long long zero;
    long long one;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    Count dp[41];

    dp[0] = {1, 0};
    dp[1] = {0, 1};

    for (int i = 2; i < 41; i++)
    {
        dp[i].zero = dp[i - 1].zero + dp[i - 2].zero;
        dp[i].one = dp[i - 1].one + dp[i - 2].one;
    }

    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N; // 0 <= N <= 40
        cout << dp[N].zero << " " << dp[N].one << "\n";
    }

    return 0;
}