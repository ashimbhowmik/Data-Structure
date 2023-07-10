#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // O(logN)

    // while (n > 0)
    // {
    //     int d = n % 10;
    //     cout << d << endl;
    //     n /= 10;
    // }

    for (int i = 1; i <= n; i = i * 2)
    {
        cout << i << endl;
    }

    return 0;
}