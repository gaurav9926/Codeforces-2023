#include <bits/stdc++.h>
using namespace std;

bool isSorted(string str)
{
    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] > str[i + 1])
        {

            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str, prevstr;
        cin >> str;
        prevstr = str;
        // check if str sorted
        if (isSorted(str))
        {
            cout << "0\n";
            continue;
        }
        // find lexicographically largest subsequence & sort it
        vector<int> sub(1, n - 1);
        int prev = n - 1;

        for (int i = n - 2; i >= 0; i--)
        {
            if (str[prev] <= str[i])
            {
                // pick
                sub.push_back(i);
                prev = i;
            }
        }
        // reverse sub and add it to str
        reverse(sub.begin(), sub.end());
        
        int st = 0, en = sub.size() - 1;
        while (st < en)
        {
            // swap
            char tmp = str[sub[st]];
            str[sub[st]] = str[sub[en]];
            str[sub[en]] = tmp;
            st++;
            en--;
        }
        // check if sorted
        if (isSorted(str))
        {
            // check for how many characters in prefix are equal
            int ans = sub.size() - 1;
            for (int i = 0; i < sub.size() - 1; i++)
            {
                if (prevstr[sub[i]] == prevstr[sub[i + 1]])
                {
                    ans--;
                }
                else
                {
                    break;
                }
            }
            cout << ans << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}