#include<iostream>

using namespace std;

int mcd(int a, int b){
   return (b==0)? a : mcd(b,a%b);
}

int mcm (int a, int b){
   return (a*b)/mcd(a,b);
}

int main()
{
   int a,b;
   while(cin>>a>>b){
      cout<<"MCD = "<<mcd(a,b)<<endl;   
      cout<<"MCM = "<<mcm(a,b)<<endl;
   }
   return 0;
}
