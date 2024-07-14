/*
Ejercicio 6:
Reflejar una Imagen: Implemente un programa que refleje horizontalmente una imagen representada por una matriz de 6x6. El programa debe intercambiar los elementos de cada fila para obtener la imagen reflejada.
Matriz:

1 2 3 4 5
6 7 8 9 1
2 3 4 5 6
7 8 9 1 2
3 4 5 6 7

Ejemplo de Salida
Matriz reflejada horizontalmente

5 4 3 2 1
1 9 8 7 6
6 5 4 3 2
2 1 9 8 7
7 6 5 4 3

*/

#include <iostream>
using namespace std; 
int main(){
	int matrizA[6][6]={{1,2,3,4,5,6},{7,8,9,1,2,3},{4,5,6,7,8,9},{1,2,3,4,5,6},{7,8,9,1,2,3},{4,5,6,7,8,9}}; 
	int matrizB[6][6]; 
		
	cout<<"Imprimiendo la matriz: \n";
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			cout<<matrizA[i][j]; 
		}
		cout<<"\n"; 
	} 
	cout<<"\n"; 
	
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			matrizB[i][j]=matrizA[i][5-j]; 
		}
	}
	
	cout<<"\nMatriz reflejada horizontalmente: \n";
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			cout<<matrizB[i][j]; 
		}
		cout<<"\n"; 
	} 
	cout<<"\n"; 
	
	return 0; 
}
