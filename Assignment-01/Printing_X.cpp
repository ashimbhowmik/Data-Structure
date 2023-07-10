#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i == n / 2)
        {
            for (int l = 0; l < n / 2; l++)
            {
                cout << " ";
            }
            cout << "X";
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (j == i)
                {
                    cout << "\\";
                }
                else if (j == n - 1 - i)
                {
                    cout << "/";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
