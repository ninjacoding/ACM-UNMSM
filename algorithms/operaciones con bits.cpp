#include <iostream>

using namespace std;

int desplazamientoDerecha(int x, int y){
	
	x>>=y;
	//Sea a=5
	//entonces, a=0101 en binario
	//desplazando 1 bit a la derecha
	//quedaria a=0010 en binario
	//entonces a=2 en decimal
	
	//en resumen el desplazamiento por la derecha es simplemente la division entre las potencias de 2
	return x;
}

int desplazamientoIzquierda(int x, int y){
	
	x<<=y;
	//Sea a=5
	//entonces, a=0101 en binario
	//desplazando 1 bit a la izquierda
	//quedaria a=1010 en binario
	//entonces a=10 en decimal
	
	//en resumen el desplazamiento por la izquierda es simplemente la multiplicacion por potencias de 2
	return x;
}

int main(){
	
	cout<<desplazamientoDerecha(5,1)<<endl; //en resumen sería 5 entre 2^1
	cout<<desplazamientoDerecha(5,2)<<endl; //en resumen sería 5 entre 2^2
	
	cout<<desplazamientoIzquierda(5,1)<<endl; //en resumen sería 5 por 2^1
	cout<<desplazamientoIzquierda(5,2)<<endl; //en resumen sería 5 por 2^2
}
