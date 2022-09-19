#include <iostream>
using namespace std;

// Indicar si el numero es par o impar con punteros

int main()
{
    int numero, *dir_numero;
    cout << "Digite un numero: ";
    cin >> numero;
    dir_numero = &numero; // Indicando o guardando la pocision de memoria
    if (*dir_numero % 2 == 0)
    {
        cout << "El numero " << *dir_numero<< " es par"<<endl;
        cout << "La pocision de memoria es: " << dir_numero << endl; 
    }
    else
    {
        cout << "El numero: " << *dir_numero << "es impar" <<  endl;
        cout << "La pocision de memoria es: " << dir_numero << endl; 
    }
}
