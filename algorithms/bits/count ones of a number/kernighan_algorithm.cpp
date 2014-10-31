#include <iostream>
using namespace std;

int main(){
	int v;
	while(cin>>v){
		int c;
		for (c = 0; v; c++) //c es el contador
			v &= v - 1;
		cout<<c<<endl;
	}
}

