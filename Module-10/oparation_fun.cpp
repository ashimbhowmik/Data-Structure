#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> myList = {10, 50, 40, 20, 10, 80, 10, 14};

    // all 10 remove
    // myList.remove(10);

    // sort normal
    // myList.sort();

    // sort boro theke choto
    // myList.sort(greater<int>());

    // unique sort (duplicat gula remove kore sort)
    // myList.unique();

    // reverse fun
    myList.reverse();

    for (int v : myList)
    {
        cout << v << endl;
    }

    return 0;
}