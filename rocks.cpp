#include <bits/stdc++.h>
#include <string>
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define out fixed<<setprecision(9)

using namespace std;
bool comp(pair<ll,ll> a,pair<ll,ll> b){
	if(a.first!=b.first) return a.first>b.first;
	else return a.second<b.second;
	
}
int main(){
	
	speed
	ll n,m;
	cin>>n>>m;
	
	ll weight[n];
	ll price[n];
	
	vector<pair<ll,ll> >arr;
	for(int i=0;i<n;i++){
		cin>>weight[i];
	}
	
	for(int i=0;i<n;i++){
		ll pr;
		cin>>pr;
		price[pr]=min(price[pr],pr);
		cin>>price[i];
	}
	for(int i=0;i<n;i++){
		pair<ll,ll> pairs;
		pairs=make_pair(price[i],weight[i]);
		arr.push_back(pairs);
	}
	
	sort(arr.begin(),arr.end(),comp);
	ll count=0;
	ll index=0;
	while(m>0&&index<n){
	//	cout<<m<<" "<<count<<endl; 
		if((m-arr[index].second)>=0){
			count+=arr[index].first;
			m-=arr[index].second;
		}
		index++;
	}
	cout<<count;
	return 0;
	
}
