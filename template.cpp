#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;
// a^b
ll binMultiply(ll a,ll b)
{
ll ans=0;
while(b){
if(b&1){
ans=(ans+a)%mod;
}
a=(a+a)%mod;
b=b>>1;
}
return ans;
}

ll power(ll a,ll b)
{
ll ans=1;
while(b){
if(b&1){
ans=binMultiply(ans,a);
}
a=binMultiply(a,a);
b=b>>1; 
}
return ans;
}
ll multiInverse(ll a,ll m)
{
ll ans=power(a,m-2);
return ans;
}
/*f to l is range */
ll binary_sqrt(ll x,ll f,ll l)
{
ll mid=f+(l-f)/2;
if(f<=l)
{
if(mid*mid==x)
return mid;
else if(mid*mid<x)
{
 return binary_sqrt(x,mid+1,l);
}
else
return binary_sqrt(x,f,mid-1);
}
else
return l;
}

// pbds

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;


typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;

// to store duplicates as well
// order_of_key(x): returns no of elements less than x (includes duplicates (that are less than x) in case of ordered_multiset)
// find_by_order(i): returns iterator to the ith smallest elements (counting from 0)

//auto it=find_by_order(i); *(it)=> value at ith indexin pbds(starting from 0)

// priority_queue<int>maxHeap;
// priority_queue<int,vector<int>,greater<int>>minHeap;

int main(){
    
}