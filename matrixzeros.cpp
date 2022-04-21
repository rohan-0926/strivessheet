**Day - 1 Matrix zeroes 
  Link - https://leetcode.com/problems/set-matrix-zeroes/

#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair
const ll mod = 1e9+7, N = 2e6+7, M = 2e6+7, INF = INT_MAX/10;
int dirx[]={-1,-1,0,1,1,1,0,-1};
int diry[]={0,1,1,1,0,-1,-1,-1};
//Brute force approach O(mn)
void solve()
{
   int m,n;cin>>n>>m;
   int arr[101][101];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    vector<pair<int, int>>p;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j] == 0)
            {
               p.push_back({i,j});
            }
        }
        // cout<<"x = "<<x<<" "<<"y = "<<y<<endl;
    }
    // cout<<endl;
    // for(auto it:p)
    // {
    //     cout<<"["<<it.first<<","<<it.second<<"]"<<endl;
    // }
    for(auto it:p)
    {
        for(int i=0;i<n;i++)
        {
            arr[it.first][i]=0;
        }
        for(int j=0;j<m;j++)
        {
            arr[j][it.second]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
signed main(){
    fast;
    // int t;
    // cin >> t;
    // while(t--)
    // {
    //    solve();
    // }
    solve();
    return 0;
}
