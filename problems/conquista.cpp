#include <iostream>
#include <map>
#include <cstdio>
#include <set>
using namespace std;

int main(){
	int n;
	string cad,s;
		scanf("%d",&n);
		getline(cin,s);
		map <string, set<string> > m;
		map <string,set<string> >::iterator it;
		while(n--){
			cin>>cad;
			getline(cin,s);
			m[cad].insert(s);
		}
		for(it=m.begin();it!=m.end();++it)
			cout<<(it->first)<<" "<<(it->second).size()<<endl;
		m.clear();
	
	return 0;
}
