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
        vector<long long int> arr(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = n - 2; i >= 0; i--)
        {
            arr[i] += arr[i + 1];
        } // suffix sum array
        long long ans = arr[0]; 

        for (int i = 1; i < n; i++)
        {
            if (arr[i] > 0)
            {
                ans += arr[i];
            }
        }

        cout << ans << "\n";
    }
    return 0;
}