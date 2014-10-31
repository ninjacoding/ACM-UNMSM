#include <iostream>
#include <set>

using namespace std;

string minuscula1(string x){
	string y="";
	for(int i=0 ;i<(int)x.size(); i++)
		y+=tolower(x[i]);
	return y;
}

string minuscula2(string x){
	for(int i=0 ;i<(int)x.size(); i++)
		if(!(x[i]&32)) x[i]+=32;
	return x;
}

int main(){
	int n;
	string x;
	while(cin>>n){
		set <string> s;
		for(int i=0;i<n;i++){
			cin>>x;
			s.insert(minuscula2(x));
		}
		cout<<s.size()<<endl;
	}
}
