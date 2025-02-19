#include <iostream>
using namespace std;

string invertir_cadena(string cadena) {
    string cadena_invertida = "";
    for (int i = cadena.length() - 1; i >= 0; i--) {  
        cadena_invertida += cadena[i];  
    }
    return cadena_invertida;
}

int main() {
    string cadena;
    cadena = "abcdeef";
    cout << cadena << endl;
    cout << "Cadena invertida: " << invertir_cadena(cadena) << endl;
    return 0;
}
