#include <bits/stdc++.h>
#include <string>
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define out fixed<<setprecision(6)
using namespace std;
int n,m;


bool notVisited(vector<bool> visited, int n){
	for(int i=0;i<n;i++){
		if(!visited[i]){
			return true;
		}
	}
	return false;
}
int main(){
	speed

	ll sum=0;
	cin>>n>>m;
	int arr[n+2][n+2];
vector<bool> visited;
for(int i=0;i<=n;i++){
	visited.push_back(i);
	for(int j=0;j<=n;j++){
		arr[i][j]=0;
	}
}

	for(int i=0;i<m;i++){
		int u,v,w;
		cin>>u>>v>>w;
		arr[u][v]=w;
	}
	int i=1;
	while(notVisited(visited, n)){
		int minn=100009;
		int index=-1;
		for(int j=1;j<=n;j++){
			if(arr[i][j]<minn && !visited[j]){
				minn=arr[i][j];
				index=j;
			}
		}
		sum+=arr[i][index];
		visited[index]=1;
		i++;
	}
	cout<<sum;
	return 0;
}
