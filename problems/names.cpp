#include <iostream>
#include <set>

using namespace std;

string minuscula1(string x){
	string y="";
	for(int i=0 ;i<(int)x.size(); i++)
		y+=tolower(x[i]);
	return y;
}

int main(){
	int n;
	string x;
	while(cin>>n){
		set <string> s;
		for(int i=0;i<n;i++){
			cin>>x;
			s.insert(minuscula1(x));
		}
		cout<<s.size()<<endl;
	}
}
