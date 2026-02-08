#include<bits/stdc++.h>
using namespace std;
// #define int long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define vl(v,n) vector<int>v(n);
#define input(v,n) for(i=0;i<n;i++)cin>>v[i];
#define sort(v) sort(v.begin(),v.end());
#define nl cout<<endl;
#define fori(i,x,n) for(i=x;i<n;i++)
 
 
/*-----------------ORDERED_SET------------------------*/
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int, nuint_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
 
 
 
/*------------------------ENDED ORDERED SET----------------*/
int main(int argc, char const *argv[])
{
int t;
// cin>>t;
 
t=1;
while(t--){
int n,i,j;
int x,m;
cin>>n>>m;
int mod =1e9+7;
vl(v,n);
input(v,n);
// int ans=0;/
 
vector<vector<int>>dp(n+1,vector<int>(m+2,0));
 
if(v[0]==0){
 
    for(i=1;i<=m;i++){
        dp[1][i]=1;
    }
}
else{
    dp[1][v[0]]=1;
}
for(i=2;i<=n;i++){
    for(j=1;j<=m;j++){
        if(v[i-1]==0){
            long long x=dp[i-1][j-1];
            x+=dp[i-1][j];
            x+=dp[i-1][j+1];
            // dp[i][j]=dp[i-1][j-1]+dp[i-1][j]+dp[i-1][j+1];
            x%=mod;
            dp[i][j]=x;
        }
        else{
            long long x=dp[i-1][v[i-1]-1];
            x+=dp[i-1][v[i-1]];
            x+=dp[i-1][v[i-1]+1];
            x%=mod;
            dp[i][v[i-1]]=x;
        }
    }
}
long long ans=0;
 
// for(auto it:dp){
//     for(auto jt:it){
//         cout<<jt<<" ";
//     }
//     cout<<endl;
// }
for(i=1;i<=m;i++){
ans+=dp[n][i];
ans%=mod;
}
cout<<ans<<endl;
 
 
}
return 0;
}