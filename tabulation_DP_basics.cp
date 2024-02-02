#include<bits/stdc++.h>
using namespace std;
int dp[1000];
// int fun(int n)
// {
//     if(n==1)return 0;
//     if(dp[n]!=-1)return dp[n];
//     int a = INT_MAX,b = INT_MAX,c = INT_MAX;
//     if(n%3==0)
//     {
//         a = fun(n/3);
//     }
//     if(n%2==0)
//     {
//         b = fun(n/2);
//     }
//     c = fun(n-1);
//     return dp[n] = min(a,min(b,c))+1;
// }
int main()
{
    int n;
    cin>>n;
    memset(dp,0,sizeof(dp));
    // cout<<fun(n);
    for(int i=2;i<=n;i++)
    {
        int a = INT_MAX, b = INT_MAX, c = INT_MAX;
        if(i%3==0)
        {
            a = dp[i/3];
        }
        if(i%2==0)
        {
            b = dp[i/2];
        }
        c = dp[i-1];
        dp[i] = min(a,min(b,c))+1;
    }
    cout<<dp[n];
}
