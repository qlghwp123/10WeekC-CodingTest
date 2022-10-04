/*
답 : http://boj.kr/1a1898996c8542889b32b4c1b2498dd0
*/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string S;
    int ret[26] = {
        0,
    };

    cin >> S;

    for (auto i : S)
        ret[i - 'a']++;

    for (auto i : ret)
        cout << i << ' ';

    return 0;
}