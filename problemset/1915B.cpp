#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<vector<char>> A(3, vector<char>(3));
        vector<int> arr(3, 0);
        char temp;
        int ind = -1;
        // vector<char>(3)
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {

                cin >> temp;
                A[i][j] = temp;
                if (temp == '?')
                {
                    ind = i;
                }
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if (A[ind][i] != '?')
            {
                arr[A[ind][i] - 'A'] = 1;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if (arr[i] == 0)
            {
                cout << (char) (65 + i) << "\n";
                break;
            }
        }
    }
    return 0;
}