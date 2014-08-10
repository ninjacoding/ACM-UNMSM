#include <iostream>
#include <queue>

using namespace std;

int main(){
	queue <int> q; // FIFO
	
	for (int i = 0; i < 5; i++){
		q.push(i);
	}
	
	cout<<"\nmy queue contains: ";
	while(!q.empty()){
		int element = q.front(); //consulting the front element
		cout<<' '<<element;
		q.pop(); //remove top element
	}
}
