#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int n = str.length();
        if (n == 1)
        {
            cout << "1\n";
            continue;
        }
        int zeros = 0;
        int ones = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                zeros++;
            }
            else
            {
                ones++;
            }
        }
        if (ones == zeros)
        {
            cout << "0\n";
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                if (ones == 0)
                {
                    cout << (n - i) << "\n";
                }
                ones--;
            }
            else
            {
                if (zeros == 0)
                {
                    cout << (n - i) << "\n";
                }
                zeros--;
            }
        }
    }
    return 0;
}