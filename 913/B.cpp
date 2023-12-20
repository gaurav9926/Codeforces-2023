#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str, ans;
        cin >> str;
        ans = "";
        int n = str.length();
        stack<int> lower;
        stack<int> upper;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'b')
            {
                // remove lower
                str[i] = '0';
                if (!lower.empty())
                {
                    // remove 
                    int ind = lower.top();
                    lower.pop();
                    str[ind] = '0';
                }
            }
            else if (str[i] == 'B')
            {

                // remove upper
                str[i] = '0';
                if (!upper.empty())
                {
                    // remove 
                    int ind = upper.top();
                    upper.pop();
                    str[ind] = '0';
                }
            }
            else {
                if (str[i]-NULL >= 97)
                {
                    // lower case
                    lower.push(i);
                }
                else {
                    upper.push(i);
                }
            }
        }
        for (int i=0 ; i<n ; i++) {
            if(str[i] != '0') {
                ans.append(1, str[i]);
            }
        }
        cout << ans << "\n";
    }
    return 0;
};