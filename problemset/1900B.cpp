#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int x = 0, y = 0, z = 0;
        if (abs(b - c) % 2 == 0)
            x = 1;
        if (abs(a - c) % 2 == 0)
            y = 1;
        if (abs(b - a) % 2 == 0)
            z = 1;

        cout << x << " " << y << " " << z << "\n";
    }
    return 0;
}