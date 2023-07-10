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
    for (int i = 0; i < q; i++)
    {
        int flag = 0;
        cin >> x;
        for (int i = 0; i < n; i++)
        {

            if (x == a[i])
            {
                flag = 1;
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