/*
Ejercicio 2:
Buscar un Valor en una Matriz: Escriba un programa que busque un valor específico en una matriz de 3x3 y devuelva todas las posiciones donde se encuentra, indicando la fila y la columna de cada ocurrencia.
Ejemplo de entrada
Matriz:
1 2 3
4 2 6
7 2 9
Valor a buscar: 2
Ejemplo Salida
El valor 2 se encuentra en:
Fila 0, Columna 1
Fila 1, Columna 1
Fila 2, Columna 1 
*/

#include <iostream>
using namespace std; 
int main(){
	int numero; 
	int matrizA[3][3]={{1,2,3},
                       {4,2,6},
                       {7,2,9}
					   }; 
	
	cout<<"Imprimiendo la matriz: \n"; 
	
	for(int i=0; i<3; i++){
	    for(int j=0; j<3; j++){
            cout<<matrizA[i][j];  
		}
		cout<<"\n"; 
	}
	
	
	
	cout<<"\nDigite el numero que quiere encontrar en la matriz: ";
	cin>>numero; 
	
	cout<<"\n"; 
	
	cout<<"El valor "<<numero<<" se encuentra en: "<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(numero==matrizA[i][j]){
				cout<<"Fila: "<<i<<" ,Columna: "<<j<<endl; 	 
			}
			else{
				i=3; 
				cout<<"\nEl valor ingresado no se encuenta en la matriz. "; 
				break; 
			}
		}
	}
	
	return 0; 
}
