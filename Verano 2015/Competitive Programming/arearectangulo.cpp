#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	int a;
	while(cin>>a){
	vector<int>mv;
	int b;
	mv.push_back(a);
	for(int i= 0; i < 3; i++){
		cin>>b;
		mv.push_back(b);
	}
	if(mv[0]>mv[2] or mv[1]>mv[3]) break;
	int base, altura, area;
	base= abs(mv[0]-mv[2]);
	altura= abs(mv[1]-mv[3]);
	area= base*altura;
	cout<<area<<"\n";
	}

	return 0;

}