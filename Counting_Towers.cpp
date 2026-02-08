#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
cin>>t;
vector<vector<ll>>dp(1e6+1,vector<ll>(2,0));
 
 
dp[0][0]=1;
dp[0][1]=1;
ll mod =1e9+7;
for(int i=1;i<1000000;i++){
 
    dp[i][0]=(dp[i-1][1]+2*dp[i-1][0])%mod;
    dp[i][1]=(4*dp[i-1][1]+dp[i-1][0])%mod;
 
 
}
 
// t=1;
while(t--){
int n,i,j;
int x,m;
cin>>n;
 
// vl(v,n);
// input(v,n);
// int ans=0;/
 
cout<< (dp[n-1][0]+dp[n-1][1])%mod<<endl;
 
 
 
}
return 0;
}