#include <bits/stdc++.h>
#include <string>
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define out fixed<<setprecision(6)
int n;
int arr[27][27];
using namespace std;
int main(){
	speed;
	cin>>n;
	arr[1][0]=1;
	for(int i=1;i<=n+1;i++){
		for(int j=i;j<=n+1;j++){
			arr[i][j]=arr[i-1][j]+arr[i][j-1];
		}
	}
	cout<<arr[n+1][n+1];
	
	return 0;
}
