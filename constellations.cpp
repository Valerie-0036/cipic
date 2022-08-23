#include <bits/stdc++.h>
#include <string>
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define out fixed<<setprecision(6)
#define coord pair<double, double>
#define x first
#define y second
using namespace std;

int orientation(coord A, coord B, coord C){
double cross=(B.y-A.y)*(C.x-B.x)-(B.x-A.x)*(C.y-B.y);
if(cross==0) return 0; //collinear
else if(cross>0) return 1; //cw
else return -1; //ccw
}

void evaluate(coord A, coord B, coord C){
	int cross=orientation(A,B,C);
	if(cross==0){
		cout<<"ular\n";
	} else if(cross>0){
		cout<<"anjing\n";
	} else {
		cout<<"kucing\n";
	}
}

int main(){
	speed
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		coord A,B,C;
		cin>>A.x>>A.y>>B.x>>B.y>>C.x>>C.y;
		cout<<"Case #"<<i<<": rasi ";
		evaluate(A,B,C);
	}
	return 0;
}
