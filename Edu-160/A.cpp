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
        int ind = 1;
        while (ind < n && str[ind] == '0')
        {
            ind++;
        }
        // 0..ind-1 -> A
        // ind..n-1 -> B
        if (2 * ind > n)
        {
            cout << "-1\n";
            continue;
        }
        else if (2 * ind == n)
        {
            string A = str.substr(0, ind);
            string B = str.substr(ind, n - ind);

            if (B > A)
            {
                cout << A << " " << B << "\n";
            }
            else
            {
                cout << "-1\n";
            }
        }
        else
        {
            cout << str.substr(0, ind) << " " << str.substr(ind, n - 1) << "\n";
        }
    }
    return 0;
}