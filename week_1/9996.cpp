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
    int N;
    cin >> N;

    string pattern;
    cin >> pattern;

    vector<string> splited_pattern = split(pattern, string("*"));
    string front = splited_pattern[0];
    string back = splited_pattern[1];

    for (int i = 0; i < N; i++)
    {
        string filename;
        cin >> filename;

        string file_front = filename.substr(0, front.length());
        string file_back = filename.substr(filename.length() - back.length(), back.length());

        if (file_front != front || file_back != back)
        {
            cout << "NE" << '\n';
            continue;
        }
        else
            cout << "DA" << '\n';
    }

    return 0;
}