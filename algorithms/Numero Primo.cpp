#include<iostream>

using namespace std;

bool esPrimo(int x){
   if(x<2)return false;
   if(x == 2)return true;
   if(!x&1)return false;
   for(int  i = 3; i*i<=x;i=i+2){
      if(x%i == 0)return false;      
   }
   return true;
}

int main(){
   int x;
   while(cin>>x){
      if(esPrimo(x))cout<<"Es Primo"<<endl;
      else cout<<"No es Primo"<<endl;   
   }      
}
