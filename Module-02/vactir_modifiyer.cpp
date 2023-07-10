#include <bits/stdc++.h>
using namespace std;

int main()
{

    // size same thake O(1)
    // size same na thakle O(n)
    vector<int> x = {10, 20, 30, 40};
    vector<int> v = {1, 2, 3};

    v = x;
    v.pop_back();
    v.pop_back();

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}