/*
Ejercicio 8:
8.
Espiral de Matriz: Escribe un programa que recorra los elementos de una matriz cuadrada de 5x5 en orden espiral.
El recorrido debe comenzar en la esquina superior izquierda de la matriz y avanzar en sentido horario, 
imprimiendo los elementos en el orden en que se encuentran siguiendo un camino espiral.

Matriz:
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
Ejemplo de salida:
Recorrido en espiral:
1 2 3 4 5 10 15 20 25 24 23 22 21 16 11 6 7 8 9 14 19 18 17 12 13

*/

#include <iostream>
using namespace std; 
int main(){
	int matrizA[5][5]={{1,2,3,4,5},
                       {6,7,8,9,10},
					   {11,12,13,14,15},
					   {16,17,18,19,20},
					   {21,22,23,24,25}}; 
					   
     int filainicial = 0; 
     int ultimafila = 4; 
     int columinicial = 0; 
     int ultimacolum = 4; 
				   
     cout<<"Imprimiendo la matriz: \n"; 
     for(int i=0; i<5; i++){
     	for(int j=0; j<5; j++){
     		cout<<matrizA[i][j];
     	}
     	cout<<"\n"; 
     }
	
	 cout<<"\nRecorrido en espiral: \n";
	  
	 while(filainicial <= ultimafila || columinicial <= ultimacolum){
	 	
	 	for(int columna = columinicial; columna<= ultimacolum; columna++){
	 		cout<<matrizA[filainicial][columna]<<" "; 
	 	}
	 	
	 	for(int fila = filainicial+1; fila <= ultimafila; fila++){
	 		cout<<matrizA[fila][ultimacolum]<<" "; 
	 	}
	 	
	 	for(int columna = ultimacolum - 1; columna >= columinicial; columna--){
	 		cout<<matrizA[ultimafila][columna]<<" "; 
	 	}
	 	
	 	for(int fila = ultimafila - 1; fila >= filainicial +1; fila--){
	 		cout<<matrizA[fila][columinicial]<<" "; 
	 	}
	 	
	 	filainicial++; 
     	ultimafila--; 
     	columinicial++; 
     	ultimacolum--;
	 	
	}
	
	
	return 0; 
}
