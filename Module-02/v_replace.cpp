#include <bits/stdc++.h>
using namespace std;

int main()
{

    // vector<int> v = {1, 2, 3, 4, 5, 2, 3, 6, 7, 2, 1, 2};
    // replace(v.begin(), v.end() - 1, 2, 100);

    // for (int x : v)
    // {
    //     cout << x << " ";
    // }

    vector<int> v = {1, 2, 3, 4, 5, 2, 3, 6, 7, 2, 1, 2};

    auto it = find(v.begin(), v.end(), 200);

    if (it == v.end())
    {
        cout << "Not";
    }
    else
        cout << "Found";

    return 0;
}