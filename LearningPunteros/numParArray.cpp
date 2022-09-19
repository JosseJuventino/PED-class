#include <iostream>
using namespace std;

int main(){
    int array [] = {1,2,3,4,5,6,7,8,9,10};
    int *dir_array;
    dir_array = array;

    for (int i = 0; i < 10; i++)
    { 
        if (*dir_array%2 == 0)
        {
            cout << "El numero " << *dir_array << " es par " << endl;
            cout << "La direccion de memoria del numero es: " << dir_array << endl;
            cout << "********************************"<<endl;
        }

        dir_array++; //Siempre al final se incrementa el valor de memoria 
        
    }
    
    return 0;

}