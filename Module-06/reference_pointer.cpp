#include <bits/stdc++.h>
using namespace std;

// ekhane perameter p er vitor (&) diye ptr er reference diye rakhche,,mean ptr r p er address same
void fun(int *&p)
{
    // *p = 20;
    // p = NULL;
    cout << &p << endl;
}

int main()
{
    int val = 10;
    int *ptr = &val;
    fun(ptr);

    // cout << *ptr << endl;
    cout << &ptr << endl;
    return 0;
}