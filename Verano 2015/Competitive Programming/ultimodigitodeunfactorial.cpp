#include <iostream>
using namespace std;
int Factorial2(int n) {
  int res = n;
  if(n <= 1) res = 1;
  
  while(n > 1) {
    res *= (n-1);
    n--;
  }
  return res;
} 
int main(){
	long long int a;
	int b;
	cin>>b;
	while(b--){
	cin>>a;
	int result;
	if(a<5)result=Factorial2(a);
	else result=0;
	/*for(int i=1;i<=a;i++){
		result=i*result;
		}*/
	int c;
	c=result%10;
	cout<<c<<endl;}
	return 0;
}