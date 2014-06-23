#include<iostream>
#include<vector>
using namespace std;

int main(){
   vector<bool> v(100000,true);
   for(int i = 2; i<100000; ++i){
      if(v[i]){
         //marcamos los demas numeros.
         for(int j = i*2;j<100000;j += i){
            v[j] = false;   
         }   
      }   
   }
   int x;
   while(cin>>x){
      if(v[x])cout<<"esPrimo"<<endl;
      else cout<<"No es Primo"<<endl;   
   }
   
}
