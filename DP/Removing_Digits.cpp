#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define vl(v,n) vector<ll>v(n);
#define input(v,n) for(i=0;i<n;i++)cin>>v[i];
#define sort(v) sort(v.begin(),v.end());
#define nl cout<<endl;
#define fori(i,x,n) for(i=x;i<n;i++)
 
 
/*-----------------ORDERED_SET------------------------*/
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
 
 
 
/*------------------------ENDED ORDERED SET----------------*/
int main(int argc, char const *argv[])
{
ll t;
// cin>>t;
 
t=1;
while(t--){
ll n,i,x;
 
cin>>n;
ll ans=0;
vector<ll>dp(n+1,1e18);
dp[n]=0;
 
for(i=n;i>=0;i--){
        ll a=i;
        while(a!=0){
            ll r=a%10;
            a=a/10;
            dp[i-r]=min(dp[i]+1,dp[i-r]);
        }
    
}
cout<<dp[0]<<endl;
 
}
return 0;
}