#include<iostream>

using namespace std;

int main(){
   /*
	  char c;
      for(int  i = 1; i<255; ++i){
      c = i; //convierte el número decimal a su símbolo
      cout<<i<<" = "<<c<<endl;
      
   }*/
   
   //si se desea convertir el valor decimal a su símbolo
   int i=65;
   cout<<i<<" = "<<char(i)<<endl;
   
   //si se desea convertir un simbolo a su valor decimal
   char A='A';
   cout<<A<<" = "<<int(A)<<endl;
}
