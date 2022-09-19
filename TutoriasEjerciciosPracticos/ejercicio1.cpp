#include <iostream>
using namespace std;

struct employee{
    string name;
    string job;
    int age;
    double salary;
};

typedef struct employee Employee; //Buena practica para variable

int main(){

    Employee E04612;
    Employee *dir_employee; 
    E04612.name = "Josse";
    E04612.job = "Sales";
    E04612.salary = 680.2;
    E04612.age = 16;

    dir_employee = &E04612;
    dir_employee -> job = 21;
    


    return 0;
}

