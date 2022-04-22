*** Day - 2 Maximum Subarray Sum
   link 1 - https://leetcode.com/problems/maximum-subarray/
   link 2 - https://www.codingninjas.com/codestudio/problems/630526?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0


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
  long long maxi=INT_MIN;
	long long sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		if(sum<0)
		{
			sum=0;
		}
		maxi=max(maxi,sum);
	}
   cout<<maxi<<endl;
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
