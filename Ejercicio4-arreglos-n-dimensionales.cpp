/*
4. Intercambio de Filas: Desarrolle un programa que intercambie dos filas específicas de una matriz
de 4x4 y muestre la matriz resultante.
Ejemplo de Entrada
Matriz:
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
Filas a intercambiar:
0
2
Matriz resultante:
9 10 11 12
5 6 7 8
1 2 3 4
13 14 15 16
*/ 

#include <iostream> 
using namespace std; 

int main(){
	int matrizA[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15}};   
	int aux; 
	
	cout<<"Imprimiendo la matriz: "<<endl;
	cout<<"\n"; 
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<matrizA[i][j]; 
		}
		cout<<"\n"; 
	}
	
	for(int i=0; i<4; i++){
		aux=matrizA[0][i]; 
		matrizA[0][i]= matrizA[2][i]; 
		matrizA[2][i]=aux; 
	}
	
	cout<<"\nImprimiendo matriz resultante: \n"<<endl; 
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<matrizA[i][j]; 
		}
		cout<<"\n"; 
	}
	
	
	return 0; 
}
