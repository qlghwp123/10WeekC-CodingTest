/*
답 : http://boj.kr/5bf6553f957e4a4586dace497284f319
*/
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    map<char, int> cap;

    string temp;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        cap[temp[0]]++;
    }

    // vector<pair<char, int>> vp(cap.begin(), cap.end());

    string ret = "";
    for(auto i = cap.begin(); i != cap.end(); i++)
        if(i->second >= 5)
            ret += i->first;

    if(ret == "")
        ret = "PREDAJA";
        
    cout << ret << '\n';

    return 0;
}