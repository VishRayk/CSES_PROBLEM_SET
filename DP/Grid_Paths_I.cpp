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
ll n,i,x,j;
 
cin>>n;
vector<vector<char>>v(n,vector<char>(n));
ll mod =1e9+7;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        cin>>v[i][j];
    }
}
vector<vector<ll>>dp(n,vector<ll>(n,0));
if(v[0][0]=='.'){
    dp[0][0]=1;
}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(v[i][j]=='.'){
            if(i>0){
                dp[i][j]+=dp[i-1][j];
            }
            if(j>0)dp[i][j]+=dp[i][j-1];
 
            dp[i][j]%=mod;
        }
    }
}
cout<<dp[n-1][n-1];
}
return 0;
}