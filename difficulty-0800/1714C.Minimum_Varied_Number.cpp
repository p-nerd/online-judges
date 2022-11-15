#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define lli long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

const int mod = 1e9 + 7;
const int inf = 1e9;

bool solve(int ti = 0)
{
    int n;
    cin >> n;
    str s;
    if (n > 9)
    {
        // 20 - 9, 20 - 9 - 8
        int i = 9;
        while (true)
        {
            if (n <= i)
            {
                s += to_string(n);
                break;
            }
            else
            {
                s += to_string(i);
                n -= i;
                i--;
            }
        }
        reverse(s.begin(), s.end());
        cout << s << ed;
    }
    else
    {
        cout << n << ed;
    }
    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, ti;
    cin >> t;
    for (ti = 0; ti < t; ti++)
    {
        solve(ti);
    }

    return 0;
}
// github.com/shh26b (Shihab Mahamud)
//