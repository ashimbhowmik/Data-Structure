#include <bits/stdc++.h>
using namespace std;

int main()
{

    // vector<int> v; t1
    // vector<int> v(5); t2

    // 5 ta array er value 10 set kora
    // vector<int> v(5, 10);

    // v2 theke v te copy hocche
    // ekhane size 5 r proti ghore vale 100
    // vector<int> v2(5, 100); t4
    // vector<int> v(v2);

    // int a[6] = {1, 2, 3, 4, 5, 6};
    // vector<int> v(a, a + 6);

    vector<int> v = {1, 2, 3};

    cout << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}