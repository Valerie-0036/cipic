#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long

int main(){

ll n,m;
cin>>n>>m;
string s;
vector<string> arr;
set <ll> arrNum;

for(int j=0;j<n;j++){
	ll sum=0;
	cin>>s;
	arr.push_back(s);
for(int i=0;i<s.length();i++){
	sum+=(s[i]-65)*pow(26,i);
}
sum=sum%m;
arrNum.insert(sum);
}

if(arrNum.size()!=arr.size()){
	cout<<"YA";
} else {
	cout<<"TIDAK";
}


}

