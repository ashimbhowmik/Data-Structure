#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int x, l = 0, flag = 0;
    cin >> x;
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
            // dane jao
            l = mid_index + 1;
        }
        else
        {
            // bame jao
            r = mid_index - 1;
        }
    }

    cout << l << " " << r << endl;

    if (flag)
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    return 0;
}