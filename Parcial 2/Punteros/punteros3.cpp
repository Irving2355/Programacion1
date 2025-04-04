#include <iostream> 

using namespace std; 

int main() {
    int a=10, b=8, c=6, d=4;
    float t= 3.4;
    char letra = 'e';

    // delacracion de dinamicos
    int *ptrint= new int;
    float *ptrfloat= new float;
    char *ptrchar= new char;

    // asignacion de valores
    *ptrint = 20;
    *ptrfloat = t;
    *ptrchar = '#';

    int *ptr = ptrint; // ptr apunta a ptrint
    float *ptr2 = &t; // ptr2 apunta a t
    char *ap = &letra; // ap apunta a letra
    cout << "Inicia el programa" << endl;
    cout << "Valores iniciales: " << endl;
    cout << "a: " << a << endl;
    cout << "t: " << t << endl;
    cout << "*ptrint: " << *ptrint << endl;

    cout << "\nDirecciones de los punteros: " << endl;
    cout << "ptrint: " << ptrint << endl;
    cout << "&ptrint: " << &ptrint << endl;

    cout << "\nPost-incremento de *ptrfloat" << endl;
    cout << "(*ptrfloat)++: " << (*ptrfloat)++ << endl; // post-incremento
    cout << "Nuevo *ptrfloat: " << *ptrfloat << endl; // nuevo valor de ptrfloat
    cout << "t: " << t << endl; // t no cambia

    int k = *ptrint + *ptr * 2; 
    cout << "\n k: " << k << endl; // suma de punteros
    
    return 0; 
}