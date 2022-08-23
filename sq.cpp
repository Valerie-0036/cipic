#include <bits/stdc++.h>
#include <string>
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define out fixed<<setprecision(9)
	ll arr[105][105];
using namespace std;
int main(){
	speed
	
	int n,c;
	cin>>n>>c;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=c;j++){
			cin>>arr[i][j];
			arr[i][j]+=arr[i][j-1];
		}
	}
	ll maxx=-1e9;
	for(int i=1;i<=c;i++){
		for(int j=i;j<=c;j++){
			ll z=0;
			for(int k=1;k<=n;k++){
				z=max(arr[k][j]-arr[k][i-1],z+arr[k][j]-arr[k][i-1]);
				maxx=max(z,maxx);
			}
		}
	}
	cout<<maxx;
	
	return 0;
}
