#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M, N; // M과 N은 10000(=100^2)이하의 자연수, M은 N보다 같거나 작다.
    cin >> M >> N;

    vector<int> perfectSquares;
    int sum = 0;

    // 1부터 100까지 제곱해서 범위 안에 드는지 체크
    for (int i = 1; i <= 100; i++)
    {
        int n = i * i;
        if (n >= M && n <= N)
        {
            perfectSquares.push_back(n); // push_back()는 벡터의 맨 뒤에 요소를 추가하는 함수.
            sum += n;
        }
    }

    // M이상 N이하의 자연수 중 완전제곱수가 없을 경우는 첫째 줄에 -1을 출력한다.
    if (perfectSquares.empty()) // empty()는 벡터가 비어있는지 확인하는 함수.
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << sum << "\n";
        cout << perfectSquares[0] << "\n";
    }

    return 0;
}