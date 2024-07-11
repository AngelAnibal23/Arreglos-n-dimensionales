/*
Ejercicio 3:
Suma de Diagonales: Desarrolle un programa que sume los elementos de las dos diagonales de una
matriz de 4x4 y muestre el resultado.
*/

#include <iostream>
using namespace std; 

int main(){
	int matrizA[4][4]={{1,2,3,4},{5,6,7,8},{9,1,2,3},{4,5,6,7}}; 	
	int sumaDIprincipal=0;
	int sumaDIsecundaria=0;  
	
	cout<<"Imprimiendo la matriz: "<<endl;
	cout<<"\n"; 
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<matrizA[i][j]; 
		}
		cout<<"\n"; 
	}
	
	
	for(int i=0; i<4; i++){
		sumaDIprincipal+=matrizA[i][i]; 
	 	sumaDIsecundaria+= matrizA[i][3 - i];
	}
	
	cout<<"\nLa suma de las diagonales es: "<<sumaDIprincipal+sumaDIsecundaria<<endl;
	
	return 0; 
}
