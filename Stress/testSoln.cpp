#include <bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define en '\n'
#define f(i, x, y) for(ll i = x; i < y; i++)
#define fr(i, x, y) for(ll i = x; i > y; i--) 
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
typedef long long ll;
using namespace std;

void solve(){
	ll a,b,c,k;
	cin>>a>>b>>c>>k;
	ll ans=1;
	ll arr[]={a,b,c};
	vector<ll> ar(3);
	sort(arr,arr+3);
	for(ll i=arr[0];i>0;i--){
		if(k%i==0){
			ar[0]=i;
			k/=i;
			break;
		}
	}
	for(ll i=arr[1];i>0;i--){
		if(k%i==0){
			ar[1]=i;
			k/=i;
			break;
		}
	}
	for(ll i=arr[2];i>0;i--){
		if(k%i==0){
			ar[2]=i;
			k/=i;
			break;
		}
	}
	ll in,mx=0;
	if(k!=1) cout<<0<<en;
	else 
	{
		sort(ar.begin(),ar.end());
		for(ll i=0;i<3;i++){
			ans*=arr[i]-ar[i]+1;
		}
		cout<<ans<<en;
	}
	





}

int main()
{
	fastio();
	int t=1;
	cin>>t;
	while(t--){
	solve();
	}
	return 0;
}