#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        if(i % 4 == 0)
        {
            for(int j = 0; j < m; j++) cout << "#";
        }
        else if(i % 4 == 1)
        {
            for(int j = 0; j < m - 1; j++) cout << ".";
            cout << "#";
        }
        else if(i % 4 == 2)
        {
            for(int j = 0; j < m; j++) cout << "#";
        }
        else
        {
            cout << "#";
            for(int j = 1; j < m; j++) cout << ".";
        }
        cout << endl;
    }
    return 0;
}
