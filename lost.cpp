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
double findX,findY;
cin>>findX>>findY;

double temp, dist=0;
bool in=true;
for(int i=0;i<n;i++){
		double xL=findX-table[i].x;
		double yL=findX-table[i].y;
		double xxL,yyL;
	if(i!=n-1){
	
		 xxL=findX-table[i+1].x;
		 yyL=findY-table[i+1].y;
	} else {
		 xxL=findX-table[0].x;
		 yyL=findY-table[0].y;
	}
		double p=(xL*yyL-xxL*yL);
		if(p>0){
			in=false;
			break;
		} else if(p==0){
			dist=0.0;
			break;
		}
		
		xL=table[i].x-findX;
		yL=table[i].y-findY;
		if(i==n-1){
			xxL=table[0].x-findX;
			yyL=table[0].y-findY;
		} else {
			xxL=table[i+1].x-findX;
			yyL=table[i+1].y-findY;	
		}
		double s1s2=sqrt(((xxL-xL)*(xxL-xL))+((yyL-yL)*(yyL-yL)));
		p=(xL*yyL-xxL*yL)/s1s2;
	//	cout<<p<<endl;
		dist=min(dist,p);

}

if(in){
	cout<<fixed<<setprecision(6)<<abs(dist);
} else {
	cout<<-1;
}





return 0;
}

