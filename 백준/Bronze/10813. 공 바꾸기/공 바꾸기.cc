#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<int> basket(N + 1);
    for (int i = 1; i <= N; i++)
    {
        basket[i] = i;
    }

    for (int k = 0; k < M; ++k)
    {
        int i, j;
        cin >> i >> j;

        swap(basket[i], basket[j]);
    }

    for (int i = 1; i <= N; i++)
    {
        cout << basket[i] << " ";
    }

    cout << "\n";

    return 0;
}