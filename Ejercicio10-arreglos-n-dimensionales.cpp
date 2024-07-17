/*
Ejercicio 10:
Generador de Tablero de Buscaminas: Desarrolla un programa que genere un tablero inicial para el 
juego de Buscaminas en una cuadrícula de 10x10. El programa debe:
a) Crear aleatoriamente un tablero donde cada celda puede contener una mina (1) o estar vacía (0).
b) Para cada celda, calcular y mostrar el número de minas en las ocho celdas adyacentes (no se cuenta la celda misma).
c) Mostrar el tablero original con las minas y el tablero con los números lado a lado.
Nota: Recuerda que en Buscaminas, el número en una celda indica cuántas minas hay alrededor, no incluyendo la propia celda.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int N = 10;
const double PROB_MINA = 0.2; 

void generarTablero(int tablero[N][N]) {
    srand(time(0));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if ((double) rand() / RAND_MAX < PROB_MINA) {
                tablero[i][j] = 1;
            } else {
                tablero[i][j] = 0;
            }
        }
    }
}

void calcularNumeros(int tablero[N][N], int numeros[N][N]) {
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (tablero[i][j] == 1) {
                numeros[i][j] = -1; 
            } else {
                int cuenta = 0;
                for (int k = 0; k < 8; ++k) {
                    int ni = i + dx[k];
                    int nj = j + dy[k];
                    if (ni >= 0 && ni < N && nj >= 0 && nj < N && tablero[ni][nj] == 1) {
                        cuenta++;
                    }
                }
                numeros[i][j] = cuenta;
            }
        }
    }
}

void mostrarTablero(int tablero[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (tablero[i][j] == 1) {
                cout << "* ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
}

void mostrarNumeros(int numeros[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (numeros[i][j] == -1) {
                cout << "* ";
            } else {
                cout << numeros[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int tablero[N][N];
    int numeros[N][N];

    generarTablero(tablero);
    calcularNumeros(tablero, numeros);

    cout << "Tablero con minas:" << endl;
    mostrarTablero(tablero);

    cout << endl << "Tablero con numeros:" << endl;
    mostrarNumeros(numeros);

    return 0;
}

