                /*     ------>ALL THE BEST Nishu<-----         */    
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define nishUwU ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);                                             
#define TC int hurr;cin >> hurr;while (hurr--)
#define sz(v) (int)v.size()
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
#define lcd(a,b) a*(b/__gcd(a,b))


#ifdef NISHPC  
#include "nishu.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define deb(x...)
#endif
const int mod = 1e9+7;
bool predate(ll h,vector<ll> &dmg,vector<ll> &tme,ll mid){
ll damage = 0;
for(ll i = 0; i < sz(dmg) ; i++){
    damage += ((mid/tme[i]) * dmg[i]);
}
return (damage>=h) ;
}


void nishsolveshere(){
ll heal,n;
cin>>heal>>n;
vector<ll> damg(n);
vector<ll> tme(n);
ll sum = 0;
for(auto &i : damg){
    cin>>i;
    sum+=i;
}
heal -= sum;
deb(sum);
ll mx_time = -2;
for(ll i=0;i<n;i++){
    cin>>tme[i];
    ll time = ((heal+damg[i]-1)/damg[i])*tme[i];
    mx_time = max(mx_time,time);
}
if(heal<=0){
    cout<<1<<"\n";
    return;
}


ll hi = mx_time, lo = 1;
while(hi-lo>1){
    ll mid  = (hi+lo)/2;
    if(predate(heal,damg,tme,mid)){
        hi= mid;
    }else{
        lo = mid+1;
    }
}
if(predate(heal,damg,tme,lo)){
    cout<<lo+1<<'\n';
}else{
    cout<<hi+1<<'\n';
}






}




int main() {
clock_t time_req = clock();
nishUwU


#ifdef NISHPC 
freopen("error.txt", "w", stderr); 
#endif



nishsolveshere();





#ifdef NISHPC
    cerr << "Time : " << fixed << setprecision(6) << ((double)(clock() - time_req)) / CLOCKS_PER_SEC << endl;
#endif

    return 0;
}           