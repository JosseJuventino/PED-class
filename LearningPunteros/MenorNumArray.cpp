/*Ejercicio 4: Rellenar un arreglo con n numeros, posteriormente utilizando punteros
determinar el menor elemento del vector.*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int nElementos,*dir_numeros,menor=999999;
    int numeros[] = {0};
	
	cout<<"Digite el numero de elementos del arreglo: ";
	cin>>nElementos;
	
	for(int i=0;i<nElementos;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>numeros[i]; //Guardamos los elementos en el arreglo
	}
	
	dir_numeros = numeros;
	
	for(int i=0;i<nElementos;i++){//Determinamos el menor elemento en cada
		if(*dir_numeros < menor){//iteracion del bucle
			menor = *dir_numeros;
		}
		dir_numeros++;
	}
	
	cout<<"\nEl menor elemento es: "<<menor<<endl;
	

	return 0;
}
