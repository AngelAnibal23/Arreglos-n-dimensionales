/*
Ejercicio 7:

Rotación de una Imagen Representada por una Matriz: Escriba un programa que rote una matriz de 4x4, representando una imagen, 
90 grados en sentido horario.

		 Matriz:
		 1 2 3 4
		 5 6 7 8
		 9 1 2 3
		 4 5 6 7
		 
Matriz rotada 90 grados en sentido horario:

	   4 9 5 1
	   5 1 6 2
	   6 2 7 3
  	   7 3 8 4
*/

#include <iostream>
using namespace std; 
int main(){
	int matrizA[4][4] = {{1,2,3,4},
 						{5,6,7,8},
 						{9,1,2,3},
 						{4,5,6,7}}; 
 						
 						
	int matrizB[4][4]; 
	
	
	cout<<"Imprimiendo la matriz: \n";
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<matrizA[i][j]; 
		}
		cout<<"\n"; 
	} 
	cout<<"\n"; 
	
	
	for(int i=0; i<4; i++){
	    for(int j=0; j<4; j++){
	    	matrizB[j][4-i-1]=matrizA[i][j]; 
	    }
	}
	
	
	cout<<"Matriz rotada 90 grados en sentido horario: \n"; 
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<matrizB[i][j]; 
		}
		cout<<"\n"; 
	} 
	cout<<"\n"; 
	
	
	
		
	return 0; 
}
