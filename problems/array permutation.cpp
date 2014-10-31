#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	while(n--){
		int total, index;
		cin>>total;
		vector<int> v;
		for (int i = 0; i < total; i++)
		{
			cin>>index;
			v.push_back(index);
		}
		
		map<int, string> M;
		string value;
		for (int i = 0; i < (int)v.size(); i++)
		{
			cin>>value;
			M[v[i]]=value;
		}
		
		for (int i = 1; i <= (int)M.size(); i++)
		{
			cout<<M[i]<<endl;
		}
		if( n > 0 )
			cout << endl;
	}
}
