#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    // a = 97 / A = 65
    // z = 122 / Z = 90
    // 32차이

    for(int i = 0; i < str.length(); i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] += 32;
        }
        else if (str[i] >= 97 && str[i] <= 122) {
            str[i] -= 32;
        }
    }

    cout << str << '\n';

    return 0;
}