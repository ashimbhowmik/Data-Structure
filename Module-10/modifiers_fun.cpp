#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> mylist = {1, 2, 3, 4, 5, 6, 7, 8};
    list<int> newList = {100, 200, 300};
    vector<int> v = {60, 70, 80};

    // list<int> mylist;

    // mylist = list1;

    // int pos;
    // cin >> pos;
    // int val;
    // cin >> val;

    // // insert tail
    // mylist.push_back(val);

    // // insert head
    // mylist.push_front(val);

    // // delete tail
    // mylist.pop_back();

    // // delete head
    // mylist.pop_front();

    // suru theke giye postion dekhe value bosay
    // mylist.insert(next(mylist.begin(), 2), 100);

    // mylist.insert(next(mylist.begin(), pos), val);
    // mylist.insert(next(mylist.begin(), pos), newList.begin(), newList.end());
    // mylist.insert(next(mylist.begin(), pos), v.begin(), v.end());

    // delete function
    // mylist.erase(next(mylist.begin(), pos));
    // mylist.erase(next(mylist.begin(), 2), next(mylist.begin(), 5));

    // value replace
    // replace(mylist.begin(), mylist.end(), 3, 100);

    // pointer khuje deya
    auto it = find(mylist.begin(), mylist.end(), 5);
    if (it == mylist.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }
    // cout << *it << endl;

    // for (int v : mylist)
    // {
    //     cout << v << endl;
    // }
    return 0;
}