#include <iostream>

using namespace std;
	  
void multiplicarMatrices(int matrizA[3][3], int matrizB[3][3], int matrizC[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matrizC[i][j] = 0;
            for (int k = 0; k < 3; ++k) {
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
}

int main() {
    int matrizA[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrizB[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int matrizC[3][3];

    multiplicarMatrices(matrizA, matrizB, matrizC);

   	cout << "Matriz A:     Matriz B:    Resultado:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrizA[i][j] << " ";
        }
        cout << "    ";
        for (int j = 0; j < 3; ++j) {
            cout << matrizB[i][j] << " ";
        }
        cout << "    ";
        cout<<"\t"; 
        for (int j = 0; j < 3; ++j) {
            cout << matrizC[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

