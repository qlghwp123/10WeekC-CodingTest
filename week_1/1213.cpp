/*
답 : http://boj.kr/316bc219aa424428a8bc5ae767894d88
*/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 1. next_permutation() 으로 순열을 구현하여 푸는 방법
    // 결과 : 시간초과남
    // string input;

    // cin >> input;
    // sort(input.begin(), input.end());

    // string front, back;
    // bool flag = false;

    // do
    // {
    //     front = input.substr(0, input.length() / 2);
    //     int left = input.length() - front.length();
    //     // input.length() % 2 길이가 홀짝에 따라서 back 시작 위치도 달라짐.
    //     back = input.substr(input.length() / 2 + input.length() % 2, left);

    //     reverse(back.begin(), back.end());

    //     if(front == back)
    //     {
    //         flag = true;
    //         break;
    //     }
    //     // cout << input << '\n';
    // } while (next_permutation(input.begin(), input.end()));

    // if(!flag)
    //     cout << "I'm Sorry Hansoo" << '\n';
    // else
    //     cout << input << '\n';

    // 2. 알파벳 카운트 횟수가 홀수/짝수 검사
    // 핵심 개념은 카운트 중 홀수가 2개라면 진행이 불가능하다.
    // 단순히 AB, ABABAB 만 봐도 불가능함을 알 수 있다.
    string input, ret;

    int cnt[200] = {0};

    cin >> input;

    // 입력 값에 대해 각 알파벳에 대한 카운트를 기록한다.
    for (auto i : input)
        cnt[i]++;

    // 카운팅 중 홀수 개수를 기록한다.
    int flag = 0;

    // 가운데 글자
    // 0 으로 계속 되어있으면 홀수 카운트가 없다는 의미이다.
    char mid = 0;

    // 사전 순으로 먼저 와야하니까 가장 큰 값이 가운데에 들어간다.
    // 가운데부터 채울 것이므로 Z 부터 시작한다.
    for (int i = 'Z'; i >= 'A'; i--)
        // 카운팅 된 값에 대해서만 시작한다.
        if (cnt[i])
        {
            // 홀수는 2n + 1 이므로 2진수로 표기한 값에서
            // 반드시 2^0 부분이 활성화 되어있다.
            if (cnt[i] & 1)
            {
                // Z부터 시작하므로 큰 값이 가운데에 온다.
                // 카운트를 차감하고 홀수 카운팅(flag)을 증가시킨다.
                mid = char(i);
                cnt[i]--;
                flag++;
            }
            // 카운팅된 것이 2개 일 경우, 진행 불가
            if (flag == 2)
                break;
            // 카운팅 된 알파벳 중 Z 으로부터 내려오므로
            // 해당 카운트의 절반만큼 반복한다.(2개를 붙이니까)
            for (int j = 0; j < cnt[i] / 2; j++)
            {
                // 양 옆으로 더한다.
                ret = char(i) + ret;
                ret += char(i);
            }
        }

    // 홀수인 녀석이 1개일 때, 가운데에 배치를 한다.
    if (mid)
        ret.insert(ret.begin() + ret.length() / 2, mid);
    if (flag == 2)
        cout << "I'm Sorry Hansoo\n";
    else
        cout << ret << '\n';

    return 0;
}