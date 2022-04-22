*** Day-2 Best time to buy and sell 
    link 1 - https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
    link 2 - https://www.codingninjas.com/codestudio/problems/893405?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0


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
   int n;cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++)
   {
       cin>>v[i];
   }
  int mini=INT_MAX;
        int pos=0;
        vector<int>res;
        for(int i=0;i<v.size();i++)
        {
            mini=min(mini,v[i]);
            int l=abs(mini-v[i]);
            res.push_back(l);
        }
        sort(res.begin(),res.end(),greater<int>());
        cout<<res[0]<<endl;
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
