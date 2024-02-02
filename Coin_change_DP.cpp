//coin change
#include<bits/stdc++.h>
using namespace std;
int dp[1000001];
int fun(int n,vector<int>&a,int m)
{
    if(n==0)return 0;
    if(dp[n]!=-1)return dp[n];
    int mini = INT_MAX;
    for(int i=0;i<m;i++)
    {
        if(a[i]<=n)
        {
            mini = min(mini,1+fun(n-a[i],a,m));
        }
    }
    return dp[n] = mini;
}
int main()
{
    int n,m;
    cin>>n>>m;
    memset(dp,-1,sizeof(dp));
    vector<int>a(m);
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    cout<<fun(n,a,m);
}
