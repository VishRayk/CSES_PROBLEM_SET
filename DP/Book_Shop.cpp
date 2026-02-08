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
int x;
cin>>n>>x;
// int mod =1e9+7;
 
vl(h,n);
input(h,n);
vl(s,n);
input(s,n);
 
vector<vector<int>>dp(n+1,vector<int>(x+1,0));
int maxi=-1;
for(i=1;i<=n;i++){
    for(int j=0;j<=x;j++){
 
        dp[i][j]=dp[i-1][j];
        if(j>=h[i-1]){
 
            dp[i][j]=max(dp[i][j],s[i-1]+dp[i-1][j-h[i-1]]);
        }
 
        maxi=max(dp[i][j],maxi);
    }
}
cout<<maxi<<endl;
}
return 0;
}