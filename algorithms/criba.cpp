#include <iostream>
#include <cstdio>
#define N 20000000

using namespace std;

bool v[N];

//CRIBA DE ERATOSTENES PARA LOS NUMEROS PRIMOS
void criba (){
    memset (v, true, sizeof (v));
    v [0] = v [1] = false;
 
    for ( int i = 4; i < N; i += 2 )
        v [i] = false;
 
    for ( int i = 3; i * i <= N; i++ ) {
        if ( v [i] ) {
            for ( int j = i * i; j < N; j += 2 * i )
                v [j] = false;
        }
    }
}

int main(){
   int x;
   
   criba();
   
   while(cin>>x){
      if(v[x]) printf("esPrimo\n");
      else printf("No es Primo\n");   
   }
   return 0;
}
