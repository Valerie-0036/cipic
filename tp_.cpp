#include <bits/stdc++.h>
#include <string>
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define coord pair<double, double>
#define x first
#define y second
using namespace std;

double sqr(double x){
	return x*x;
}

double distance(coord v, coord w){
	return sqr(v.x - w.x) + sqr(v.y - w.y);
}
double minimum_distance(coord v, coord w, coord p) {
   double l2 = distance(v, w); 
  if (l2 == 0.0) return distance(p, v); 
   double t = ((p.x - v.x) * (w.x - v.x) + (p.y - v.y) * (w.y - v.y)) / l2;
   t = max(0.0, min(1.0, t));
   coord projection=make_pair(v.x + t * (w.x - v.x),v.y + t * (w.y - v.y));
  return sqrt(distance(p, projection));
}

int main(){
speed
double x,y,x1,y1,x2,y2;
cin>>x>>y>>x1>>y1>>x2>>y2;

double a,b;
a=abs(x1-x)+abs(y1-y);
b=abs(x2-x)+abs(y2-y);
double dist;
if(a>b){
	//b
dist=(double)sqrt(pow((x2-x),2)+pow((y2-y),2));
} else {
dist=(double)sqrt(pow((x1-x),2)+pow((y1-y),2));
}

coord A=make_pair(x1,y1);
coord B=make_pair(x2,y2);
coord P=make_pair(x,y);

dist=min(dist,minimum_distance(A,B,P));
cout<<fixed<<setprecision(6)<<dist;

}


