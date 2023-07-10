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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count += a[i];
    }
    cout << count << endl;

    // time complixicity
    // o(n+n) = o(2n) == o(n);

    return 0;
}