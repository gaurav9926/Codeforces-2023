#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a, prev = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (i == n - 1)
            {
                ans = max(ans, 2 * (x - a));
            }
            ans = max(ans, (a - prev));

            prev = a;
        }
        cout << ans << "\n";
    }

    return 0;
}
