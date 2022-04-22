
*** Day - 2 sort an rearrange an array of 0's 1's and 2's n O(n)
   link - https://www.codingninjas.com/codestudio/problems/631055?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website


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
   int z=0,o=0,t=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			z++;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]==1)
		{
			o++;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]==2)
		{
			t++;
		}
	}
	vector<int>v;
    for(int i=0;i<z;i++)
    {
        v.push_back(0);
    }
    for(int i=0;i<o;i++)
    {
        v.push_back(1);
    }
    for(int i=0;i<t;i++)
    {
        v.push_back(2);
    }
    for(int i=0;i<n;i++)
    {
        // cout<<arr[i]<<" ";
        arr[i]=v[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        // arr[i]=v[i];
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
