#include <bits/stdc++.h>
#include <string>
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define out fixed<<setprecision(6)
using namespace std;

typedef double coord_t;
typedef double coord2_t;  

struct Point {
	coord_t x, y;
	bool operator <(const Point &p) const {
		return x < p.x || (x == p.x && y < p.y);
	}
};

double sqr(coord_t x){
	return x*x;
}

double distance(Point v, Point w){
	return sqr(v.x - w.x) + sqr(v.y - w.y);
}

coord2_t cross(const Point &O, const Point &A, const Point &B)
{
	return (A.x - O.x) * (B.y - O.y) - (A.y - O.y) * (B.x - O.x);
}

// convex hull ccw
vector<Point> convex_hull(vector<Point> P)
{
	size_t n = P.size(), k = 0;
	if (n <= 3) return P;
	vector<Point> H(2*n);

	sort(P.begin(), P.end());

	// lower hull
	for (size_t i = 0; i < n; ++i) {
		while (k >= 2 && cross(H[k-2], H[k-1], P[i]) <= 0) k--;
		H[k++] = P[i];
	}

	// upper hull
	for (size_t i = n-1, t = k+1; i > 0; --i) {
		while (k >= t && cross(H[k-2], H[k-1], P[i-1]) <= 0) k--;
		H[k++] = P[i-1];
	}

	H.resize(k-1);
	return H;
}
int main(){
	speed;
	int n;
	cin>>n;
	coord_t in,an;
	vector<Point> P;
	for(int i=0;i<n;i++){
		Point A;
		cin>>in>>an;
		A.x=in;
		A.y=an;
		P.push_back(A);
	}
	P=convex_hull(P);
//	double sum=0.0;
	for(int i=0;i<P.size();i++){
		cout<<P[i].x<<" "<<P[i].y<<endl;
//		if(i!=P.size()-1){
//			sum+=sqrt(distance(P[i],P[i+1]));
//		} else sum+=sqrt(distance(P[i],P[0]));
	}
//	cout<<out<<sum;
	
	return 0;
}
