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
    for(int i=0;i<n;i++)
    {
        for(int j=a[i];j<=k;++j)
        {
            if(j-a[i]>=0)
            {
                dp[j]+=dp[j-a[i]];
                dp[j]%=mod;
            }
            else
            {
                break;
            }
        }
    }
    cout<<dp[k];
}
