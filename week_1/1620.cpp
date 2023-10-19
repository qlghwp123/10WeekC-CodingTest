/*
답 : http://boj.kr/cb68e0961c7e4d8e812bf965943f4b10
*/
#include <bits/stdc++.h>

using namespace std;
// 해당 문제를 vector 만 써서 해결하려 했는데
// 시간 초과가 나서 map, vector 둘의 시간 비교를 했다.
// 그래프 사이트에 y=\log_{2}x, y=x, y=100000 를 각각 보면 엄청난 차이를 알 수 있다.
// link : https://www.desmos.com/calculator?lang=ko

// using namespace chrono;

// void time_check_map(map<int, string> mp, int target)
// {
//     auto start = high_resolution_clock::now();
//     auto it = mp.find(target);
//     auto end = high_resolution_clock::now();

//     auto duration = duration_cast<nanoseconds>(end - start);

//     cout << duration.count() << '\n';
// }

// void time_check_vector(vector<int> v, int target)
// {
//     auto start = high_resolution_clock::now();
//     auto it = find(v.begin(), v.end(), target);
//     auto end = high_resolution_clock::now();

//     auto duration = duration_cast<nanoseconds>(end - start);

//     cout << duration.count() << '\n';
// }

// int main(void)
// {
//     int N = 1000000;
//     int target = 978330;
//     map<int, string> mp;
//     vector<int> v(N);

//     for (int i = 0; i < N; i++)
//         mp.insert({i, to_string(i)});

//     for (int i = 0; i < N; i++)
//         v[i] = i;

//     time_check_map(mp, target);
//     time_check_vector(v, target);

//     return 0;
// }

// 답지 보고 푼 정답
// 자료구조를 잘 활용해야 하는 문제
// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int N, M;

//     cin >> N >> M;

//     map<string, int> book_key;
//     map<int, string> book_value;

//     for (int i = 1; i <= N; i++)
//     {
//         string pokemon;

//         cin >> pokemon;

//         book_key[pokemon] = i;
//         book_value[i] = pokemon;
//     }

//     for (int i = 0; i < M; i++)
//     {
//         string question, answer;

//         cin >> question;

//         answer = (isalpha(question[0])) ? to_string(book_key[question]) : book_value[stoi(question)];

//         cout << answer << '\n';
//     }

//     return 0;
// }

// link : https://www.acmicpc.net/source/60027719
// 속도가 내 코드에 비해 100ms 더 빠르다.
// 아마 unordered_map 을 쓴 부분이 크다고 생각한다.
// 이 사람은 자료구조를 잘 활용한게 위에서 말한 unordered_map 을 사용하여
// 정렬할 필요가 없는 이 문제에 잘 적용했고
// 추가적인 map 을 쓰는게 아니라 간단하게 vector 를 숫자가 입력으로 들어왔을 때 사용하였다.
int main(int argc, const char **argv)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    unordered_map<string, int> name_to_idx;
    vector<string> name(N + 1);

    for (int i = 1; i <= N; i++)
    {
        string s;
        cin >> s;
        name[i] = s;
        name_to_idx[s] = i;
    }
    for (int i = 0; i < M; i++)
    {
        string s;
        cin >> s;
        if ('0' <= s[0] && s[0] <= '9')
        {
            cout << name[stoi(s)] << "\n";
        }
        else
        {
            cout << name_to_idx[s] << "\n";
        }
    }
    return 0;
}