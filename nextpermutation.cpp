** Day -2 Next Permutation
    link 1 - https://leetcode.com/problems/next-permutation/   (leetcode)
    link 2 - https://www.codingninjas.com/codestudio/problems/893046?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website (code studio)
    


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
   vector<int>arr(n);
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   next_permutation(arr.begin(),arr.end());
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
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
