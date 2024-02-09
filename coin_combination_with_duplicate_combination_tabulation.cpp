#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
int main()
{
    long long n,k;
    cin>>n>>k;
    long long a[n];
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int>dp(k+1,0);
    dp[0]=1;
    for(int i=1;i<=k;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i-a[j]>=0)
            {
                dp[i]+=dp[i-a[j]];
                dp[i]%=mod;
            }
        }
    }
    cout<<dp[k];
}
