#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int n = a.length();

        if (a == b)
        {
            cout << "YES\n";
        }
        else
        {
            int chk = -1;
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i] == '0' && a[i] == b[i])
                {
                    // check if next is also same
                    if (a[i + 1] == '1' && a[i + 1] == b[i + 1])
                    {
                        chk = 1;
                        cout << "YES\n";
                        break;
                    }
                }
            }
            if (chk == -1)
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}