#include <bits/stdc++.h>
using namespace std;

bool isPossible(int k, vector<long> &l, vector<long> &r)
{
    // check if valid config possible using value of k
    long lprev = 0, rprev = 0;
    int n = l.size();

    for (int i = 0; i < n; i++)
    {
        // check overlap
        lprev = lprev - k;
        rprev = rprev + k;
        if (lprev >= l[i] && lprev <= r[i] ||
            rprev >= l[i] && rprev <= r[i] ||
            lprev <= l[i] && rprev >= r[i])
        {
            lprev = max (lprev , l[i]);
            rprev = min (rprev , r[i]);
        }
        else {
            return false;
        }
    }
    return true;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int i = 0;
        vector<long> l(n, 0);
        vector<long> r(n, 0);
        while (i < n)
        {
            cin >> l[i] >> r[i];
            i++;
        }
        // binary search on answer
        long start = 0 , mid = 0 , end = 0, answer = 0;
        end = pow(10,9);
        while (start <= end) {
            mid = start + (end-start) / 2;
            if (isPossible(mid,l,r)) {
                // reduce value of mid
                answer = mid;
                end = mid - 1;
            }
            else {
                // increase value of mid
                start = mid + 1;
            }
        }
        cout << answer << "\n";
    }

    return 0;
}