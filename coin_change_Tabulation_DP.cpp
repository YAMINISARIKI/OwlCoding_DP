//coin change
#include<bits/stdc++.h>
using namespace std;
long long dp[1000001];
int main()
{
    long long n,m;
    cin>>n>>m;
    vector<long long>a(m);
    vector<long long>dp(n+1,INT_MAX);
    dp[0] = 0;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[j]<=i) //here i is nothing but updated n value means updated target value
            {
                dp[i] = min(dp[i-a[j]]+1,dp[i]);
            }
        }
    }
    if(dp[n]==INT_MAX)
    {
        cout<<"-1";
    }
    else
    {
        cout<<dp[n];
    }
}
