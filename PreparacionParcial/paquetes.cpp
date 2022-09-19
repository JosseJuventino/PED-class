#include <iostream>
#include <stdlib.h>
using namespace std;

/*

John Doe es el jefe de una empresa estadounidense de gestión de paquetes, llamada
DeFex. John está buscando realizar un nuevo programa para tener un mejor registro de los
paquetes en cada bodega, por lo que le solicita escribir un programa de prueba que tenga
una lista de todos los paquetes en el almacén (10).
Cada paquete tiene:
    - ID (Número del 1 al 100 generado aleatoriamente)
    - Es frágil (Sí/ No)
    - Peso en Kg
    - Tamaño del paquete ( Pequeño / Mediano / Grande )
El programa debe permitir, listar todos los paquetes ( ID ), ver información detallada de cada
paquete (Ingresar ID y mostrar toda la información), y modificar cualquiera de los registros

*/

struct paquete
{

    int id;
    string fragilidad;
    float peso;
    string tam;

} paquetes[3];

int ArrayLength = sizeof(paquetes) / sizeof(struct paquete);

void listarPaquetes();
void listarPorId();
void modificarPorId();

int main()
{

    paquetes[0].id = (rand() % 100);
    paquetes[0].fragilidad = "Si";
    paquetes[0].peso = 20;
    paquetes[0].tam = "mediano";

    paquetes[1].id = (rand() % 100);
    paquetes[1].fragilidad = "No";
    paquetes[1].peso = 30;
    paquetes[1].tam = "pequeno";

    paquetes[2].id = (rand() % 100);
    paquetes[2].fragilidad = "Si";
    paquetes[2].peso = 40;
    paquetes[2].tam = "grande";

    int op;
    while (op != 4)
    {
        cout << "Ingrese una operacion: " << endl
             << endl
             << "1. Listar todos los paquetes " << endl
             << "2. Listar por id " << endl
             << "3. Modificar por id " << endl
             << "4. Salir " << endl;
        cin >> op;

        switch (op)
        {
        case 1:
            listarPaquetes();
            break;
        case 2:
            listarPorId();
            break;
        case 3:
            modificarPorId();
            break;
        default:
            break;
        }
    }

    return 0;
}

void modificarPorId()
{
    int valId;
    cout << "Ingrese el ID del paquete: " << endl;
    cin >> valId;

    for (int i = 0; i < ArrayLength; i++)
    {
        if (paquetes[i].id == valId)
        {

            cout << "*********** Paquete numero " << paquetes[i].id << " *************" << endl;
            cout << "¿El paquete es fragil?" << endl;
            cin >> paquetes[i].fragilidad;

            cout << "¿Cual es el peso del paquete (kg)?" << endl;
            cin >> paquetes[i].peso;

            cout << "¿Cual es el tamano del paquete (pequeno/mediano/grande)?" << endl;
            cin >> paquetes[i].tam;
        }
    }
}

void listarPorId()
{
    int valId;
    cout << "Ingrese el ID del paquete: " << endl;
    cin >> valId;

    for (int i = 0; i < ArrayLength; i++)
    {
        if (paquetes[i].id == valId)
        {
            cout << "*********** Paquete numero " << paquetes[i].id << " *************" << endl;
            cout << "Fragilidad: " << paquetes[i].fragilidad << endl;
            cout << "Peso: " << paquetes[i].peso << "kg" << endl;
            cout << "Tamano: " << paquetes[i].tam << endl
                 << endl;
        }
    }
}

void listarPaquetes()
{

    for (int i = 0; i < ArrayLength; i++)
    {
        cout << "*********** Paquete numero " << paquetes[i].id << " *************" << endl;
        cout << "Fragilidad: " << paquetes[i].fragilidad << endl;
        cout << "Peso: " << paquetes[i].peso << "kg" << endl;
        cout << "Tamano: " << paquetes[i].tam << endl
             << endl;
    }
}