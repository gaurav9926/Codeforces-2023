#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // do something
        int a, b;
        int x1, y1;
        int x2, y2;
        long answer = 0;
        cin >> a >> b;
        cin >> x1 >> y1;
        cin >> x2 >> y2;

        vector<int> dx = {-a, -a, a, a, -b, -b, b, b};
        vector<int> dy = {b, -b, b, -b, -a, a, -a, a};

        set<pair<int, int>> s;
        for (int i = 0; i < 8; i++)
        {
            s.insert({dx[i], dy[i]});
        }
        dx.clear();
        dy.clear();
        for (auto p : s)
        {
            dx.push_back(p.first);
            dy.push_back(p.second);
        }

        for (int i = 0; i < dx.size(); i++)
        {
            // find (x,y) where you can reach (x1,y1)
            int x = x1 + dx[i];
            int y = y1 + dy[i];

            for (int j = 0; j < dx.size(); j++)
            {
                if (x + dx[j] == x2 && y + dy[j] == y2)
                    answer++;
            }
        }
        cout << answer << "\n";
    }
    return 0;
}