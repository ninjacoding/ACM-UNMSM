#include <iostream>
#include <stack>

using namespace std;

int main(){
	stack <int> p; // LIFO o FILO
	
	for (int i = 0; i < 5; i++){
		p.push(i);
	}
	
	cout<<"\nmy stack contains: ";
	while(!p.empty()){
		int element = p.top(); //consulting the last element, top element
		cout<<' '<<element;
		p.pop(); //remove top element
	}
}
