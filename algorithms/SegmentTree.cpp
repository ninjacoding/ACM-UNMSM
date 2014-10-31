#include <cstdio>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;

long long v[50005];
long long st[200020];


long long getProductoUtil(int ss, int se, int qs, int qe, int index){
    if (qs <= ss && qe >= se)
        return st[index];
    if (se < qs || ss > qe)
        return 1;
    int mid = (se+ss)>>1;//Saca la mitad
    //Utilizamos la propiedad (a*b)%m=((a%m)*(b%m))%m
    return ((getProductoUtil( ss, mid, qs, qe, 2*index+1)%1000000007)*
           (getProductoUtil( mid+1, se, qs, qe, 2*index+2)%1000000007))%1000000007;
}

void updateValue(int index,int init, int final,int i, int new_val){
 
    if(init==final) st[index]=new_val;
    else{
        int mid= (init+final)>>1;
        if(i<=mid) updateValue(2*index+1,init,mid,i,new_val);
        else updateValue(2*index+2,mid+1,final,i,new_val);

        st[index]= (st[2*index+1]*st[2*index+2])%1000000007;
    }
}
 
 
long long constructSTUtil(int ss, int se, int si){
    if (ss == se){
        st[si] = v[ss];
        return v[ss];
    }
    int mid = (se+ss)>>1;
    st[si] =  ((constructSTUtil(ss, mid,si*2+1)%1000000007)*
              (constructSTUtil(mid+1, se,si*2+2)%1000000007))%1000000007;

    return st[si];
}
  
void ini(){
    for (int i = 0; i < 50005; ++i){
        v[i]=0;
    }
    for (int i = 0; i < 50005*4; ++i){
        st[i]=0;
    }

}

int main(){
 
	int cases,n,q;
	scanf("%d",&cases);
	for (int i = 0; i < cases; i++){
        ini();
		scanf("%d",&n);
		for (int j = 0; j < n; j++){
			scanf("%lld",&v[j]);
		}
        //Construimos el arbol		
		constructSTUtil(0, n-1,0);
		
        //Leemos la cantidad de consultas
        scanf("%d",&q);
		int a,b,c;
		for (int k = 0; k < q; k++){
			scanf("%d%d%d",&a,&b,&c);
            //Si es cero el valor de a , imprimimos el valor
            //del producto del arreglo desde el indice b hasta el indice c
			if(a==0){
				printf("%lld\n",getProductoUtil(0,n-1,b-1,c-1,0));
			}else{//Si el valor no es cero Actualizamos el vector y ala vez el ST(SegmentTree)
				updateValue(0,0,n-1,b-1,c);
                
			}
		}
	}
 
	return 0;
}