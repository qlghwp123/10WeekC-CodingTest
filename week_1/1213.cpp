/*
답 : http://boj.kr/316bc219aa424428a8bc5ae767894d88
*/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;

    cin >> input;
    sort(input.begin(), input.end());

    string front, back;
    bool flag = false;

    do
    {
        front = input.substr(0, input.length() / 2);
        int left = input.length() - front.length();
        // input.length() % 2 길이가 홀짝에 따라서 back 시작 위치도 달라짐.
        back = input.substr(input.length() / 2 + input.length() % 2, left);

        reverse(back.begin(), back.end());

        if(front == back)
        {
            flag = true;
            break;
        }
        // cout << input << '\n';
    } while (next_permutation(input.begin(), input.end()));
    
    if(!flag)
        cout << "I'm Sorry Hansoo" << '\n';
    else
        cout << input << '\n';

    return 0;
}