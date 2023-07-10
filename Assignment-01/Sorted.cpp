#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, flag = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, flag = 1;
        cin >> x;

        vector<int> v(x);

        for (int i = 0; i < x; i++)
        {
            cin >> v[i];
        }
        for (int i = 1; i < x; i++)
        {
            if (v[i] < v[i - 1])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}