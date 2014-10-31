#include <iostream>
using namespace std;

int main(){
    int n;
	while(cin>>n){
        cout<<__builtin_popcount(n)<<endl;
	}
}
