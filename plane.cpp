#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
speed

int n,m;
cin>>n>>m;
pair<ll,ll> arr[n];

for(int i=0;i<n;i++){
	cin>>arr[i].first>>arr[i].second;
}

sort(arr,arr+n);
cout<<endl;
//a=cr b=pvr c=cl=a.first
ll a=0,ans=0,b=0;
for(int i=0;i<n;i++){
	cout<<a<<" "<<b<<endl;
//	cout<<arr[i].first<<" "<<arr[i].second<<endl;
	if(arr[i].first<=b+1){
		
		a=max(a,arr[i].second);
		continue;
	}
	if(a>b){
		b=a;
		ans++;
	}
	a=0;
	if(arr[i].first>b+1){
		break;
	}
	a=max(a,arr[i].second);
	
	
	
}

if(a>b){
	b=a;
	ans++;
}
if(b<m){
	ans=-1;
}
cout<<ans;
return 0;
}

