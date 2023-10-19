/*
답 : http://boj.kr/7c429b5497b149a3a42c4a2d02b9a4b5
*/
#include <bits/stdc++.h>

using namespace std;

vector<string> split(string input, string delimiter)
{
    vector<string> ret;
    string token = "";
    long long pos = 0;

    while ((pos = input.find(delimiter)) != string::npos)
    {
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimiter.length());
    }

    ret.push_back(input);

    return ret;
}

int main(void)
{

    return 0;
}