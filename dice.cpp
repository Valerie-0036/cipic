#include <bits/stdc++.h>
#include <string>
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define out fixed<<setprecision(9)

using namespace std;
int main(){
	speed
	
	ll m,n;
	cin>>m>>n;
	
	double prob=1.0/m;
	double end=0;
	for(int i=1;i<=n;i++){
		end+=prob*(double)i;
	}
	cout<<out<<end;
	return 0;
	}
