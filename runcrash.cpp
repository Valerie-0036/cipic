#include <bits/stdc++.h>
#include <string>
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define coord pair<double, double>
#define x first
#define y second
#define out fixed<<setprecision(9)
//https://stackoverflow.com/questions/563198/how-do-you-detect-where-two-line-segments-intersect/565282#565282
using namespace std;
double cross(coord Bl, coord Br){
	return Bl.x*Br.y-Br.x*Bl.y;
}

bool intersect(double a, double b){
	if(a>0.0){
		if(b<0.0){
			return false;
		} else return true;
	}
	else {
		if(b>0.0){
			return false;
		} else return true;
	}
}

int main(){
	speed
	double x1,x2,x3,x4,y1,y2,y3,y4;
	cin>>x1>>y1>>x2>>y2;
	cin>>x3>>y3>>x4>>y4;
	
	coord Bl=make_pair(x3-x1,y3-y1);
	coord Br=make_pair(x3-y2,x3-y2);
	
	double threeCP=cross(Bl,Br);
//	cout<<out<<threeCP<<endl;
	coord Dl=make_pair(x4-x1,y4-y1);
	coord Dr=make_pair(x4-y2,x4-y2);
	double fourCP=cross(Dl,Dr);
//	cout<<out<<fourCP<<endl;
	
	if(intersect(threeCP,fourCP)){
		cout<<-1<<" "<<-1;
	} else {
		coord pairA=make_pair(x2-x1,y2-y1);
		coord pairB=make_pair(x4-x3,y4-y3);
		double distA=cross(pairA,pairB);
		double distB=cross(pairB,pairA);
		coord pairQP=make_pair(x3-x1,y3-y1);
		double t=cross(pairQP,pairB)/distA;
		coord pairPQ=make_pair(x1-x3,y1-y3);
		double u=cross(pairPQ,pairA)/distB;
		
		double xEnd=x1+t*pairA.x;
		double yEnd=y1+t*pairA.y;
		
		cout<<out<<xEnd<<" "<<yEnd;
		
	}
	return 0;
}
