#include <iostream>
#include <sstream>

using namespace std;
void conversion_datos(){
	stringstream ss;
	
	string cad = "123.156";
	float x;
	
	ss<<cad;
	ss>>x; //ahora x tiene el valor 123.156 como real
	
	cout<<x+1<<endl;
}

void distribucion_datos(){
	stringstream io;
	
	string cad = "resultado 50 a 31";
	int x, y;
	string a, b;
	
	io<<cad;
	
	io>>a>>x>>b>>y;
	
	cout<<a<<endl<<x<<endl<<b<<endl<<y<<endl;
}
int main(){
	conversion_datos();
	cout<<"==============="<<endl;
	distribucion_datos();
}
