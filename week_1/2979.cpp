/*
답 : http://boj.kr/4e97e76bb0dd438fba134d0aada1c531
*/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    vector<vector<int>> d;
    int a, b, c;

    cin >> a >> b >> c;

    for (int i = 0; i < 3; i++)
    {
        int s, e;

        cin >> s >> e;

        vector<int> v(e - s + 1);
        iota(begin(v), end(v), s);

        for (auto i : v)
            cout << i << ' ';

        cout << '\n';
    }
    return 0;
}