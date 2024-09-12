#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(vector<int> arr){
    for( auto val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
}

int findContentChildren(vector<int>& g, vector<int>& s) {

    sort(g.begin(),g.end());
    sort(s.begin(),s.end());

    int ans = 0;

    print(g);
    print(s);

    int i=0,j=0;
    int n = g.size();
    int m = s.size();

    while( i<n && j<m){
        if( s[j] >= g[i] ){
            ans++;
            i++;
        }
        j++;
    }

    return ans;
    
}

int main(){

    vector<int> g {10,9,8,7};
    vector<int> s {5,6,7,8};

    int ans = findContentChildren(g,s);
    cout<<"max assignment = "<<ans<<endl;

    return 0;
}