#include <iostream>
#include <map>
#include <vector>
#include <cstdio>

using namespace std;

int main(){
	int n;
	string cad;
	while(scanf("%d",&n)!=0){
		map<char, int> m;
		map<char, int>:: iterator it;
		getline(cin,cad);
		while(n--){
			getline(cin,cad);
			for(int i=0;i<cad.size();i++){
				if((cad[i]>='A' && cad[i]<='Z') || (cad[i]>='a' && cad[i]<='z')){
					if(cad[i]>='A' && cad[i]<='Z'){
						cad[i]=char(cad[i]+32);
					}
					m[cad[i]]++;
				}
			}
		}
		vector<char> v1;
		vector<int> v2;
		for(it=m.begin();it!=m.end();++it){
			v1.push_back(it->first);
			v2.push_back(it->second);
		}
		char c;
		int x;
		for(int i=0;i<v1.size();i++){
			for(int j=i+1;j<v1.size();j++){
				if(v2[i]==v2[j]){
					if(v1[i]>v1[j]){
						c=v1[i];
						v1[i]=v1[j];
						v1[j]=c;
						x=v2[i];
						v2[i]=v2[j];
						v2[j]=x;
					}
				} else if(v2[i]<v2[j]){
					c=v1[i];
					v1[i]=v1[j];
					v1[j]=c;
					x=v2[i];
					v2[i]=v2[j];
					v2[j]=x;
				}
			}
		}
		for(int i=0;i<v1.size();i++){
			cout<<char(v1[i]-32)<<" "<<v2[i]<<endl;
		}
	}
	return 0;
}
