#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int N;
	while(cin>>N){
		for (int i = 2; i <= N / i; i++) {
			while (N % i == 0) {
					cout<<i<<endl;
					N = N/i;
				}
		}
		if (N > 1)
			cout<<N<<endl;
		
	}
}

