/*
답 : http://boj.kr/5cbef80aaad4484a8c3ea73bebf2c0ab
*/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a[9];
    int temp;

    for (int i = 0; i < 9; i++)
        cin >> a[i];

    sort(a, a + 9);

    do
    {
        int sum = 0;
        for (int i = 0; i < 7; i++)
            sum += a[i];

        if (sum == 100)
            break;

    } while (next_permutation(a, a + 9));

    for (int i = 0; i < 7; i++)
        cout << a[i] << '\n';

    return 0;
}