/*
Ejercicio 9:
Programa que imprime un cuadrado latino de orden N. Un cuadrado latino de orden N es una matriz cuadrada 
en la que la primera fila contiene los N primeros números naturales y cada una de las 
siguientes N-1 filas contiene la rotación de la fila anterior un lugar a la derecha. 
Ejemplo: Cuadrado latino de orden 4.
1 2 3 4
4 1 2 3
3 4 1 2
2 3 4 1
*/

#include <iostream>
using namespace std;

void generarCuadradoLatino(int n) {
    
    int cuadradoLatino[n][n];

    for (int i = 0; i < n; ++i) {
        cuadradoLatino[0][i] = i + 1;
    }
    
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cuadradoLatino[i][j] = cuadradoLatino[i-1][(j+1) % n];
        }
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << cuadradoLatino[i][j] << " ";
        }
        cout<<"\n";
    }
}

int main() {
    int n;
    cout << "Ingrese el orden del cuadrado latino: ";
    cin >> n;
    
    generarCuadradoLatino(n);
    
    return 0;
}

