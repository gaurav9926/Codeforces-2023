#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> ans(n, 0);
        vector<long long> sum(n, 0);
        vector<pair<long long, long long>> A(n, {0, 0});
        for (int i = 0; i < n; i++)
        {
            cin >> A[i].first;
            A[i].second = i;
        }

        // sort A in increasing order
        sort(A.begin(), A.end());

        // calculate cummlative sum
        sum[0] = A[0].first;
        for (int i = 1; i < n; i++)
        {
            sum[i] = sum[i - 1] + A[i].first;
        }

        // calculate answer
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                ans[A[i].second] = n - 1;
            }
            else
            {
                if (sum[i] < A[i + 1].first)
                {
                    // answer = i
                    ans[A[i].second] = i;
                }
                else
                {
                    int start = i;
                    while (i < n - 1 && sum[i] >= A[i + 1].first)
                    {
                        sum[i] += A[i + 1].first;
                        i++;
                    }
                    for (int ind = start; ind <= i; ind++)
                    {
                        // answer[ind] = i;
                        ans[A[ind].second] = i;
                    }
                }
            }
        }
        // output answer
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}