#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ans = INT_MIN;
        vector<int> a(n, 0);
        vector<int> b(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        for (int i = 1; i < n; i++)
        {
            a[i] = a[i - 1] + a[i];
            b[i] = max(b[i - 1], b[i]);
        }

        for (int i = 0; i < min(k, n); i++)
        {
            int temp = a[i] + (k - i - 1) * b[i];
            if (temp > ans)
                ans = temp;
        }
        cout << ans << "\n";
    }
    return 0;
}