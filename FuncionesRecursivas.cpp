#include <iostream>
using namespace std;

int par(int);
int impar(int);

int main()
{
    int number;
    cout<<"Ingrese un numero para evaluar: "<<endl;
    cin>> number;
    
    if (par(number))
    {
        cout << "El numero es par" << endl;
    }
    else
    {
        cout << "El numero es impar" << endl;
    }
}

// Recursividad indirecta:

int par(int n)
{
    if (n == 0)
    {
        return true; // Se puede retornar un false o un true en vez de un numero
    }
    else
    {
        return impar(n - 1);
    }
}

int impar(int n)
{
    if (n == 0)
    {
        return false;
    }
    else
    {
        return par(n - 1);
    }
}