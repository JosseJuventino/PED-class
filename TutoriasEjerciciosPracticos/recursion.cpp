#include <iostream>
using namespace std;


void PrintTables(int, int);

int main(){

    int x = 10;
    int i = 7;

    PrintTables(i, x);

    return 0;
}


void PrintTables(int x, int i){

    if (i == 0){ //VERIFICAR SI EL CONTADOR HA LLEGADO A 0
        cout << x << "*" << i << "=" << x*i<< endl;
        return;
    }

    //Si no es 0 hacemos la impresion correspondienete
    cout << x << "*" << i << "=" << x*i<< endl;
    PrintTables(x, i-1); //Se lllama la funcion hasta llegar a 0
    return;


}