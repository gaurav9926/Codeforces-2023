#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long m, k, a1, ak;
        cin >> m >> k >> a1 >> ak;
        long Mrem = 0, akrem = 0, ans = 0;
        // give all ak
        if ((m / k) >= ak)
        {
            Mrem = m - (k)*ak;
            ak = 0;
        }
        else
        {
            Mrem = m - (k) * (m / k);
            ak = ak - (m / k);
        }

        // give all a1
        if (Mrem <= a1)
        {
            Mrem = 0;
            a1 = a1 - Mrem;
        }
        else
        {
            Mrem = Mrem - a1;
            a1 = 0;
        }

        // if Mrem != 0 use fancy coins
        if (Mrem > 0)
        {
            if ((Mrem / k) >= ak)
            {
                Mrem = Mrem - (k * ak);
            }
            cout << Mrem << " Mrem\n";
            if ((Mrem / k) > 0)
                ans = (Mrem / k);
            Mrem = Mrem - (k * (Mrem / k));

            // use fancy coins of a1
            Mrem = Mrem - a1;
            ans += Mrem;
        }
        cout << ans << "\n";
    }
    return 0;
}