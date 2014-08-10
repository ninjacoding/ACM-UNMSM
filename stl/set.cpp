#include <iostream>
#include <set>

using namespace std;

void show_data(set <int> s){
	set <int>::iterator it;
	cout<<"set elements are: ";
	for (it=s.begin(); it!=s.end(); it++){
		cout<<' '<<*it;
	}
	
}

int main(){
	set <int> s;
	
	for (int i = 0; i < 5; i++){
		s.insert(i);
	}
	
	show_data(s);
	
	s.insert(3);
	
	cout<<endl;
	show_data(s);
	
	
	
}

