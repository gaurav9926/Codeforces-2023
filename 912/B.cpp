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
        vector<vector<int>> M(n, vector<int>(n, 0));
        vector<int> A(n, (1 << 30) - 1);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> M[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    continue;

                A[i] &= M[i][j];
                A[j] &= M[i][j];
            }
        }
        int chk = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    continue;

                if ((A[i] | A[j]) != M[i][j])
                {
                    cout << "NO\n";
                    chk = -1;
                    break;
                }
            }
            if (chk == -1)
                break;
        }

        if (chk == 1)
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
            {
                cout << A[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}