#include <bits/stdc++.h>
#include <string>
#define ll long long
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define out fixed<<setprecision(9)
using namespace std;

bool findName(vector<string> done,string name){
 std::vector<string>::iterator it;
    it = find (done.begin(), done.end(), name);
    if (it != done.end())
    {
       return false;
    }
    return true;
//for(int i=0;i<done.size();i++){
//	if(done[i]==name) return false;
//}
//return true;
}

int main(){
	speed
	int n;
	cin>>n;
	
	//cin.ignore();
	deque<string> arr;
	vector<string> done;
	for(int i=0;i<n;i++){
//	string text;
int text;
cin>>text;
if(text==1){
	string name;
	cin>>name;
	if(findName(done, name)) arr.push_front(name);
	
}	else if(text==2) {
	string name;
	cin>>name;
	if(findName(done, name)) arr.push_back(name);
} else if(text==3){
	cout<<arr.front()<<endl;
	done.push_back(arr.front());
	arr.pop_front();
	
} else {
	cout<<arr.back()<<endl;
	done.push_back(arr.back());
	arr.pop_back();
}
//	getline(cin,text);
	}
	return 0;
}

