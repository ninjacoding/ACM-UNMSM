#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void show_data(vector <int> myvector){
	cout<<"\nmy vector contains: ";
	for (int i = 0; i < (int)myvector.size(); i++){
		cout<<' '<<myvector[i];
	}
	cout<<endl;
}

int main(){
	vector <int> v; 
	vector <int> a(10); //equal to: int a[tam]
	
	//size
	cout<<v.size()<<endl; // 0
	cout<<a.size()<<endl; // 10
	
	//show elements
	cout<<"\nmy vector 'a' contains: ";
	for (int i = 0; i < (int)a.size(); i++){
		cout<<' '<<a[i];
	}
	
	//entering elements to 'v' vector
	for (int i = 10; i > 0; i--){
		v.push_back(i);
	}
	
	show_data(v);
	
	//sort the elements
	sort(v.begin(), v.end());
	
	show_data(v);
	
}
