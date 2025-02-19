#include <iostream>
using namespace std;

// Función para implementar el método de ordenamiento burbuja
void bubbleSort(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
    }
}

// Función para imprimir un arreglo
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int N;
    N = 5;
    
    int arr[N] = {8,9,7,2,5};
    
    cout << "Arreglo original: ";
    printArray(arr, N);
    
    bubbleSort(arr, N);
    
    cout << "Arreglo ordenado: ";
    printArray(arr, N);
    
    return 0;
}
