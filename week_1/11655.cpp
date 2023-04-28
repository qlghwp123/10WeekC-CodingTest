/*
답 : http://boj.kr/a7e74bfb990641249d917c73a9246796
*/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string input;
    getline(cin, input);

    string result = "";
    int upper = 65;
    int lower = 97;
    int alpha = 26;

    for (char it : input)
    {
        if (isalpha(it))
            if (isupper(it))
                it = (it - upper + 13) % alpha + upper;
            else
                it = (it - lower + 13) % alpha + lower;

        result += it;
    }

    cout << result << '\n';

    return 0;
}