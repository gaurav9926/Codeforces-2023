#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> str;
        // char = str[0]
        char ch = str[0];
        int num = str[1] - '0';
        string s = "";
        for (int i = 0; i < 8; i++)
        {
            //
            s = "";
            if (i + 1 == num)
                continue;
            s.append(1, ch);
            s.append(1, i + '1');
            cout << s << "\n";
        }

        for (int i = 0; i < 8; i++)
        {
            s = "";
            char temp = (char)'a' + i;
            if (temp == ch)
                continue;
            s.append(1, temp);
            s.append(1, '0' + num);
            cout << s << "\n";
        }
    }

    return 0;
};