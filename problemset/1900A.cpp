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
        string str;
        cin >> str;
        int check = 0, empty = 0;
        char temp;
        int totalcnt = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            temp = str[i];
            if (temp == '.')
            {
                totalcnt++;
                cnt++;
                if (cnt == 3)
                {
                    check = 1;
                }
            }
            else
            {
                cnt = 0;
            }
        }
        if (check == 1)
        {
            cout << "2\n";
        }
        else
        {
            cout << totalcnt << "\n";
        }
    }
    return 0;
}