#include <iostream>
using namespace std;

int main() {
    int filas, columnas;

    filas = 3;
    columnas = 3;

    int matriz[filas][columnas] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int transpuesta[columnas][filas];


    // Calcular la traspuesta
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    cout << "\nMatriz original:\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatriz traspuesta:\n";
    for (int i = 0; i < columnas; i++) {
        for (int j = 0; j < filas; j++) {
            cout << transpuesta[i][j] << " ";
        }
        
        cout << endl;
    }

    return 0;
}
