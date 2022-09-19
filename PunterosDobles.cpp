#include <iostream>
#include <stdlib.h>

using namespace std;


int main(){

    int nFilas, nColumnas, **ptr;
    cout << "Ingrese el numero de filas: ";
    cin >> nFilas;
    
    cout << "Ingrese el numero de columnas: ";
    cin >> nColumnas;

    //Reserva de memoria

    ptr = new int *[nFilas];
    
    for (int i = 0; i < nFilas; i++)
    {
        ptr[i] = new int [nColumnas];
    }
    
    //Captura de datos
    for (int i = 0; i < nFilas; i++)
    {
        for (int j = 0; j < nColumnas; j++)
        {
            cout<< "Ingrese los valores de la matriz";
            cin >> *(*(ptr + i) + j);
        }
        
    }

    //Imprimir datos
     for (int i = 0; i < nFilas; i++)
    {
        for (int j = 0; j < nColumnas; j++)
        {
            
            cout << *(*(ptr + i) + j);
        }

        cout << endl;
        
    }
    
    //Liberando memoria de un arreglo bidimensional
    for (int i = 0; i < nFilas; i++)
    {
        for (int j = 0; j < nColumnas; j++)
        {
            delete[] ptr[i];
            
        }
        
    }
    delete[]ptr;
    


    return 0;
}