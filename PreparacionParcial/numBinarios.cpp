#include <iostream>
#include <string.h>
using namespace std;

void binarioNumero(int);
string number = "";

int main()
{

    int num;
    cout << "Ingrese un numero: " << endl;
    cin >> num;
    binarioNumero(num);
    return 0;
}

void binarioNumero(int num)
{

    if (num != 1)
    {
        if (num % 2 == 0)
        {
            number += "0";
            binarioNumero(num / 2);
        }
        else
        {
            number += "1";
            binarioNumero(num / 2);
        }
    }
    else
    {
        cout << "El numero en binario es: " << number;
        
    }
}