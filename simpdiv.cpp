#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define coord pair<double, double>
#define x first
#define y second
#define out fixed<<setprecision(9)
using namespace std;

ll fpb(ll a,ll b){
if(b==0) return a;
else return fpb(b, a%b);
}

int main(){
	speed
ll a,b;
cin>>a>>b;

for(int i=a;i<=b;i++){
	ll count=0;
	if(i>a) cout<<endl;
for(int j=0;j<i;j++){
	if(j%2==0 && i%2==0) continue;
	ll div = fpb(j,i);
	//cout<<div<<" ";
	if(div==1){
		count++;
	}
}
//cout<<endl;
cout<<count;
}
	
}
