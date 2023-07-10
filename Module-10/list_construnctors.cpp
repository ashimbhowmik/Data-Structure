#include <bits/stdc++.h>
using namespace std;

int main()
{

    // onno ekta list theke copy kore
    // list<int> list2 = {1, 2, 3, 4, 5};
    // list<int> myList(list2);

    // onno ekta array theke copy kore
    // int a[5] = {1, 2, 3, 4, 5};
    // list<int> myList(a, a + 5);

    // list er vitor 10 size er 10 ta 5 rakha
    // list<int> myList;
    // list<int> myList(10, 5);
    // cout << myList.front();

    // vector theke copy kore
    vector<int> v = {1, 2, 3, 4, 5};
    list<int> myList(v.begin(), v.end());

    cout << endl;

    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    for (int val : myList)
    {
        cout << val << endl;
    }

    return 0;
}