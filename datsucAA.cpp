#include <bits/stdc++.h>
#include <string>
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define out fixed<<setprecision(6)
using namespace std;
int n,m;
int arr[100005];

int search(int x){
	if(arr[x]==x) return x;
	return arr[x] = search(arr[x]);
}

void merge(int a, int b){
	a=search(a);
	b=search(b);
	
	arr[b]=a;
}
int main(){
	speed
	cin>>n>>m;
	for(int i=1;i<=n;i++) arr[i]=i;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		if(search(x)==search(y)){
			cout<<i+1;
			return 0;
		}
		merge(x,y);
	}
	cout<<-1;
	return 0;	
}
