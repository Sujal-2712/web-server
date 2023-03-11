#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool sortcol(vector<int> &a, vector<int> &b)
{
    if (a[0] == b[0])
    {
        if (a[1] == b[1])
        {
            return a[2] < b[2];
        }
        return a[1] > b[1];
    }
    return a[0] < b[0];
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    vector<vector<int>> a1;
        
        for (int i = 0; i < t; i++)
        {
            vector<int> a;
            for (int j = 0; j < 3; j++)
            {
                int temp;
                cin >> temp;
                a.push_back(temp);
            }
            a1.push_back(a);
        }
        sort(a1.begin(), a1.end(), sortcol);


     for(int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            cout << a1[i][j] << " ";

        }
        cout << endl;
    }
    
}

