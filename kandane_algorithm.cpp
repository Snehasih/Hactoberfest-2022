#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
signed main()
{
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n)
            cin >>
        a[i];
    int curr = 0, maxTill_now = 0, start = 0, end = 0, s = 0;
    rep(i, 0, n)
    {
        curr += a[i];
        if (curr > maxTill_now)
        {
            maxTill_now = curr;
            start = s;
            end = i;
        }
        if (curr < 0)
        {
            curr = 0;
            s=i+1;
        }
    }
    cout << maxTill_now<<endl;
    cout<<"start index:"<<start<<endl;
    cout<<"end_index:"<<end<<endl;
    rep(i, start, end+1)
            cout<< a[i]<<" ";
    return 0;
}