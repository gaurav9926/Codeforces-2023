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
        vector<vector<int>> arr(3, vector<int>(n, 0));
        vector<vector<int>> maxarr(3, vector<int>(0));
        for (int j = 0; j < 3; j++)
        {
            for (int i = 0; i < n; i++)
            {
                cin >> arr[j][i];
            }
        }

        // find three max indices for the three arrays
        for (int j = 0; j < 3; j++)
        {
            for (int t = 0; t < 3; t++)
            {
                int maxval = INT_MIN;
                int maxind = -1;
                int chk = 1;
                for (int i = 0; i < n; i++)
                {
                    chk = 1;
                    for (int x = 0; x < maxarr[j].size(); x++)
                    {
                        if (maxarr[j][x] == i)
                        {
                            chk = -1;
                            break;
                        }
                    }
                    if (chk == 1)
                    {
                        if (arr[j][i] > maxval)
                        {
                            maxval = arr[j][i];
                            maxind = i;
                        }
                    }
                }
                maxarr[j].push_back(maxind);
            }
        }
        int a, b, c;
        int ans = INT_MIN;
        for (int x = 0; x < 3; x++)
        {
            a = maxarr[0][x];
            for (int y = 0; y < 3; y++)
            {
                b = maxarr[1][y];
                if (a == b)
                    continue;
                for (int z = 0; z < 3; z++)
                {
                    c = maxarr[2][z];
                    if (c == a || c == b)
                        continue;
                    int sum = arr[0][a] + arr[1][b] + arr[2][c];
                    if (sum > ans)
                    {
                        ans = sum;
                    }
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}