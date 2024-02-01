#include<bits/stdc++.h>
using namespace std;
int dp[1000];
int fun(int idx,int A[],int n){
    if(idx==n-1)
    {
        return 0;
    }
    if(dp[idx]!=-1)return dp[idx];
    //one step
    int left = abs(A[idx]-A[idx+1])+fun(idx+1,A,n);
    //two steps
    int right = INT_MAX;
    if(idx+2<=n-1)
    {
        right = abs(A[idx]-A[idx+2])+fun(idx+2,A,n);
    }
    return dp[idx] = min(left,right);
}
int main()
{
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<fun(0,a,n);
}
