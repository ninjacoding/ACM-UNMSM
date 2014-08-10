#include <iostream>
#include <stack>
using namespace std;

bool balanced(string cadena){
	stack<char> pila;
	
	for (int i = 0; i < (int)cadena.size(); i++){
		if (cadena[i]=='(') pila.push(cadena[i]);
		else{
			if (pila.empty()) return false;
			if (cadena[i]==')' and pila.top()=='(') pila.pop();
			else return false;
		}
	}
	return pila.size()==0;
}

int main(){
	int T;
	cin>>T;
	while(T--){
		string cadena;
		cin>>cadena;
		if (balanced(cadena)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	
}

