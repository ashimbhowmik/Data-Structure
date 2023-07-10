#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, q, x;
    cin >> n >> q;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // for (int i = 0; i < q; i++)
    // {
    //     cin >> x;
    // }

    sort(a, a + n);

    while (q--)
    {
        cin >> x;
        int l = 0, flag = 0;
        int r = n - 1;
        while (l <= r)
        {
            int mid_index = (l + r) / 2;
            if (a[mid_index] == x)
            {
                flag = 1;
                break;
            }
            if (a[mid_index] < x)
            {
                l = mid_index + 1;
            }
            else
            {
                r = mid_index - 1;
            }
        }
        if (flag)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}
