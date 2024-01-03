#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int n = str.length();
        vector<vector<int>> A = {{1, 3, 7, 9}, {3, 9}, {1, 7}, {1, 3, 7}, {3, 9}, {1, 7}, {1, 3, 9}, {3, 9}, {7}};
        int check = -1;
        for (int i = 0; i < n; i++)
        {
            int num = str[i] - '0';
            // cout << str[i] << " str[i] nmum " << num << "\n";
            for (int j = i + 1; j < n; j++)
            {
                for (int x = 0; x < A[num - 1].size(); x++)
                {
                    if (str[j] - '0' == A[num - 1][x])
                    {
                        // found answ
                        check = 1;
                        cout << str[i] << str[j] << "\n";
                        break;
                    }
                }
                if (check == 1)
                    break;
            }
            if (check == 1)
                break;
        }
        if (check == -1)
        {
            cout << "-1\n";
        }
    }
    return 0;
}