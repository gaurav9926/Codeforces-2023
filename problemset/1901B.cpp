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
        vector<int> A(n, 0);
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        ans = A[0] - 1;
        for (int i = 1; i < n; i++)
        {
            if (A[i] > A[i - 1])
            {
                ans += A[i] - A[i - 1];
            }
        }
        cout << ans << "\n";
    }
    return 0;
}