#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define coord pair<double, double>
#define f first
#define s second
using namespace std;
 
int main()
{
	speed
	double findX,findY,x1,x2,y1,y2;
	cin>>findX>>findY>>x1>>y1>>x2>>y2;
	//line
  	coord s1s2,s2P,s1P;
    s1s2.f = x2-x1;
    s1s2.s = y2-y1;

    s2P.f = findX-x2;
    s2P.s = findY-y1;
 
    s1P.f = findX-x1,
    s1P.s = findY-y1;

    // dot prod
    double s1s2_s2P = (s1s2.f * s2P.f + s1s2.s * s2P.s);
    double s1s2_s1P = (s1s2.f * s1P.f + s1s2.s * s1P.s);
 
    double d = 0.0;

    if (s1s2_s1P < 0) {
        double x = findX - x1;
		double y = findY - y1;
        d = sqrt(x * x + y * y);
    } else if (s1s2_s2P > 0) {
        double x = findX - x1;
        double y = findY - y2;
        d = sqrt(x * x + y * y);
    }
    else {
        double s2_s1 = sqrt(s1s2.f * s1s2.f + s1s2.s * s1s2.s);//ed
        cout<<s2_s1<<endl;
        d = abs(s1s2.f * s1P.s - s1s2.s * s1P.f) / s2_s1;
    }
    cout <<fixed<<setprecision(6)<<d;
 
    return 0;
}
