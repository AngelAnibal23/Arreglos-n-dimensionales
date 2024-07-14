/*
Ejercicio 5: 
Buscar el Máximo y Mínimo: Escriba un programa que encuentre el valor máximo y el valor
mínimo en una matriz de 4x4, indicando sus posiciones.
*/ 

#include <iostream>
using namespace std; 
int main(){
	int matrizA[4][4]={
					   {1,2,3,4},
					   {5,6,7,8},
					   {9,1,2,3},
					   {4,5,6,7}}; 
					   
    int max = matrizA[2][2]; 
	int min = matrizA[2][2]; 
	int minfila, mincolumna, maxfila, maxcolumna; 
	
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
 			if(max < matrizA[i][j]){
 				max = matrizA[i][j];  
				maxfila = i; 
				maxcolumna = j;  
 			}
 			else if( min > matrizA[i][j]){
 				min = matrizA[i][j]; 
 				minfila = i; 
 				mincolumna = j; 
 			}
 		}
 	}
    
    cout<<"El elemento mayor es: "<<max<<". Se encuentra ubicado en la posicion: "<<maxfila<<maxcolumna<<endl;  
    cout<<"El elemento menor es: "<<min<<". Se encuentra ubicado en la posicion: "<<minfila<<mincolumna<<endl; 
    
	return 0; 
}
