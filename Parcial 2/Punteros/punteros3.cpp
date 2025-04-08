#include <iostream> 

using namespace std; 

int funcion(int *x,int *y,int *t, int w){
    cout << "\n Funcion ************\n\n";
    int i=4;
    int v[5]= {1,2,3,4,5};

    cout << "*x: " << *x << " *y: "<< *y << " *t: " << *t << " w: " << w << endl;

    int z = *x;
    cout << "Pase el valor de 'a' a la variable z que es local z= "<<z << endl;

    *x=*y;
    *y=z; //swap

    w--;
    cout << "Decrementas w: " <<w << endl;

    *t = *x + w + v[i];
    cout << "\n *t: " << *t << endl;

    y = t; //y & t apuntan a lo mismo

    return *y;
}

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

    cout << "\nValores en el main antes de la funcion\n";
    cout << "a: " << a << " b: "<< b << " c: " << c << " d: " << d << endl;
    int res = funcion(&a, &b, &c, d);
    cout << "\nValores en el main despues de la funcion\n";
    cout << "a: " << a << " b: "<< b << " c: " << c << " d: " << d << "res: " << res << endl;
    return 0; 
}