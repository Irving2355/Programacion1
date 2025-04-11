/*
Funciones que retornar un puntero
*/
#include <iostream> 

char *captura1();
char *captura2();

using namespace std;

int main(){
    char *nombre;

    nombre = captura1();
    cout << "hola " << nombre << endl;
    nombre = captura2();
    cout << "Hola: " << nombre;
    return 0;
}

char *captura1(){
    char *nom;
    int n=40;
    nom = new char[n];
    cout << "\nDame nombre: ";
    cin.getline(nom,n);
    return nom;
}

char *captura2(){
    int n=40;
    char nom[40];
    cout << "\nDame nombre: ";
    cin.getline(nom,n);
    return nom;
}