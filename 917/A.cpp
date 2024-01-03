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
        int neg = 0, zero = -1;
        int tmp;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            if (tmp < 0)
            {
                neg++;
            }
            else if (tmp == 0)
            {
                zero = 1;
            }
        }
        // if neg -> even
        if (neg % 2 == 0)
        {
            if (zero == -1)
            {
                // ans = 1
                cout << "1\n"
                     << "1  0"
                     << "\n";
            }
            else
            {
                cout << "0\n";
            }
        }
        else
        {
            cout << "0\n";
        }
    }
    return 0;
}