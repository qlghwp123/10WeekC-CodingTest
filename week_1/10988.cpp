/*
답 : http://boj.kr/c7b230ec84bf4153a125b858a5ef77e2
*/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string input;
    cin >> input;

    string reversed_string = input;

    reverse(reversed_string.begin(), reversed_string.end());

    if (input == reversed_string)
        cout << "1" << '\n';
    else
        cout << "0" << '\n';

    return 0;
}