#include <bits/stdc++.h>
using namespace std;

long long solve(vector<int> &bt)
{

    sort(bt.begin(), bt.end());
    int n = bt.size();

    long long ans = 0;
    long long t = 0;

    for (int i = 0; i < n; i++)
    {
        ans += t;
        t += bt[i];
    }

    return ans / n;
}

int main()
{
    vector<int> arr {4,3,7,1,2};
    cout <<"average time : " <<solve(arr) << endl;
    arr = {1,2,3,4};
    cout <<"average time : " <<solve(arr) << endl;
    return 0;
}