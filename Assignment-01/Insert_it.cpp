#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x;

    vector<int> v(x);

    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }

    cin >> y;

    vector<int> v2(y);
    for (int i = 0; i < y; i++)
    {
        cin >> v2[i];
    }

    cin >> z;

    v.insert(v.begin() + z, v2.begin(), v2.end());
    for (int a : v)
    {
        cout << a << " ";
    }

    return 0;
}