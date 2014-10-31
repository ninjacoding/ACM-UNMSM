#include <iostream>
#include <map>

using namespace std;

int main(){
	map<string, int> m;
	m["hola"]=3;
	m["como"]=2;
	m["estas"]=5;
	
	m["estas"]++;
	map<string, int>::iterator it;
	
	for(it=m.begin(); it!=m.end(); it++){
		//cout<<(*it).first<<": "<<(*it).second<<endl;
		cout<<it->first<<" "<<it->second<<endl;
	}
	
}

