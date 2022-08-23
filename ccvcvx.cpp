#include <bits/stdc++.h>
#include <string>
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define coord pair<double, double>
#define x first
#define y second
using namespace std;

int main(){
speed
int n;
cin>>n;
coord table[n];
for(int i=0;i<n;i++){
	cin>>table[i].x>>table[i].y;

}

double temp;
bool conv=true;
for(int i=0;i<n;i++){
	if(i!=n-1){
		temp=(table[i].x*table[i+1].y-table[i+1].x*table[i].y);
		cout<<temp<<endl;
	} else {
		temp=(table[i].x*table[0].y-table[0].x*table[i].y);
			cout<<temp<<endl;
	}

}






return 0;
}

