/*
Ejercicio 12:
Juego de la Vida de Conway: Desarrolla un programa que simule el "Juego de la Vida" de Conway en un tablero de 10x10. El programa debe:
a) Crear aleatoriamente un tablero inicial donde cada celda puede estar viva (1) o muerta (0).
b) Calcular el estado del tablero en la segunda generaci�n.
c) Mostrar el tablero inicial y el tablero de la segunda generaci�n lado a lado.
En el "Juego de la Vida", el estado de cada celda en la pr�xima generaci�n se determina por el n�mero de celdas vivas adyacentes:
1.Una c�lula viva con menos de dos vecinos vivos muere (subpoblaci�n).
2.Una c�lula viva con dos o tres vecinos vivos sigue viva.
3.Una c�lula viva con m�s de tres vecinos vivos muere (sobrepoblaci�n).
4.Una c�lula muerta con exactamente tres vecinos vivos se convierte en una c�lula viva (reproducci�n).
*/


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int FILAS = 10;
const int COLUMNAS = 10;

void inicializarTablero(int tablero[FILAS][COLUMNAS]) {
    srand(time(0)); 
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            tablero[i][j] = rand() % 2;
        }
    }
}

void imprimirTablero(const int tablero[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            cout << (tablero[i][j] ? "1 " : "0 ");
        }
        cout << endl;
    }
}

int contarVecinosVivos(const int tablero[FILAS][COLUMNAS], int x, int y) {
    int cuenta = 0;
    for (int i = -1; i <= 1; ++i) {
        for (int j = -1; j <= 1; ++j) {
            if (i == 0 && j == 0) continue;
            int nx = x + i;
            int ny = y + j;
            if (nx >= 0 && nx < FILAS && ny >= 0 && ny < COLUMNAS) {
                cuenta += tablero[nx][ny];
            }
        }
    }
    return cuenta;
}

void siguienteGeneracion(const int actual[FILAS][COLUMNAS], int siguiente[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            int vecinosVivos = contarVecinosVivos(actual, i, j);
            if (actual[i][j] == 1) {
                siguiente[i][j] = (vecinosVivos == 2 || vecinosVivos == 3) ? 1 : 0;
            } else {
                siguiente[i][j] = (vecinosVivos == 3) ? 1 : 0;
            }
        }
    }
}

int main() {
    int tablero[FILAS][COLUMNAS];
    int siguienteTablero[FILAS][COLUMNAS];

    inicializarTablero(tablero);

    cout << "Tablero inicial:" << endl;
    imprimirTablero(tablero);

    siguienteGeneracion(tablero, siguienteTablero);

    cout << "\nTablero en la segunda generacion:" << endl;
    imprimirTablero(siguienteTablero);

    return 0;
}

