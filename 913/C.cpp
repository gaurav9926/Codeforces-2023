#include <bits/stdc++.h>
using namespace std;

int main () 
{
    int t; cin >> t;

    while (t --) {
        int n; cin >> n;
        string str; cin >> str;
        vector<int> count(26, 0);
        for (auto ch : str) {
            count[ch-'a'] ++;
        }
        int maxcount = 0;
        for (int i=0 ; i<26 ; i++) {
            maxcount = max (maxcount , count[i]);
        }
        cout << max (n%2 , 2*maxcount - n) << "\n";
    }

    return 0;
}