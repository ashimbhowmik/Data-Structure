#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    while (q--)
    {
        int l, r, sum = 0;
        cin >> l >> r;
        l--;
        r--;
        for (int i = l; i <= r; i++)
        {
            sum += a[i];
        }
        cout << sum << endl;
    }

    return 0;
}
