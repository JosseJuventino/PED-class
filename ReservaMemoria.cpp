#include <iostream>
#include <stdlib.h>
using namespace std;


int main()
{
    /************Usando new y delete con verificacion de memoria***********/
    int var = 1;
    int *dir_var;

    dir_var= &var;//Pasar direccion al puntero

    dir_var = new int; //reserva de memoria
    
    if (dir_var == NULL)
    {
        cout << "Error de asignacion de memoria";
        exit(1);

    }else{
        cout << "La direccion de memoria asignada fue: "<<dir_var;
    }

    delete dir_var; //Liberacion de memoria

    

    //**************Para arreglos************//
   /* int numElementos;
    int *dir_array;
    dir_array = new int[numElementos];
    delete[] dir_array;*/

    //**********Usando Malloc, free y prueba de memoria***********//
   /* int *ptr;
    ptr = (int*)malloc(100*sizeof(int)); //Using malloc for 100 int's 
    
    if (ptr == NULL)
    {
        cout << "Error de asignacion de memoria";
        exit(1);

    }else{
        cout << "La direccion de memoria asignada fue: "<<ptr;
    }
    

    free(ptr);// Liberando memoria
*/




    return 0;
}