#include <iostream>
#include <string> // <string>은 C++ 표준 라이브러리에서 문자열을 다루기 위한 헤더입니다. 이 헤더를 포함하면 std::string 클래스를 사용할 수 있습니다.

using namespace std;

void solve()
{
    int p;
    cin >> p;

    int maxprice = 0;
    string maxname;
    for (int i = 0; i < p; i++)
    {
        int price;
        string name;
        cin >> price >> name;

        if (price >= maxprice)
        {
            maxprice = price;
            maxname = name;
        }
    }
    cout << maxname << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while (n--)
    {
        solve();
    }

    return 0;
}