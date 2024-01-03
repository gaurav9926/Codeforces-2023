#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        set<string> s;
        string temp = "";
        temp.append(1, str[n - 1]);
        s.insert(temp);
        for (int i = n - 2; i >= 0; i--)
        {
            vector<string> temparr;
            for (auto itr : s)
            {
                temparr.push_back(itr);
            }
            for (auto itr : temparr)
            {
                string temp = str[i] + itr;
                // cout << temp << " temp\n";
                s.insert(temp);
            }
            s.insert({str[i]});
        }
        cout << s.size() << "\n";
    }
    return 0;
}