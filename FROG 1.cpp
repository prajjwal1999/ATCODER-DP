#include<bits/stdc++.h>
using namespace std;
#define ll long long int


  void c_p_c()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
    #endif
}
bool is_valid(int i,int j,int n,int m)
{
  if(i<0 || i>=n || j<0 || j>=m)
    return false;
  return true;
}
int a[100005];
int dp[100005];int n;
int path(int ind)
{
  if(ind==n-1)
    return 0;
  if(ind>=n)
    return INT_MAX;
  if(dp[ind]!=-1)
    return dp[ind];

  int left=abs(a[ind]-a[ind+1])+path(ind+1);
  int right=INT_MAX;
  if(ind+2<n)
  {
    right=abs(a[ind]-a[ind+2])+path(ind+2);
  }
  return dp[ind]=min(left,right);
}
void solve()
{
  cin>>n;
  for(int i=0;i<n;i++)cin>>a[i];

    memset(dp,-1,sizeof(dp));

  cout<<path(0);



}


int main()
{
c_p_c();
  int t=1;
  while(t--)
  {
    solve();
  }
  


  return 0;

} 