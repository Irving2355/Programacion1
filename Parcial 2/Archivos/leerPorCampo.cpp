/*  LEER EN UN ARCHIVO DE TEXTO CAMPO X CAMPO*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    fstream file;

    int cuenta;
    string nombre;
    float monto;

    file.open("clientes.txt",ios::in);
    //las siguientes lineas son para comenzar la lectura del archvio desde la primer linea o registro
    file.clear();
    file.seekg(0);
    if(!file)
        cout <<  "No se abrio";
    else{
        cout << "\n\n Imprimiendo la informacion";

        while (file >> cuenta >> nombre >> monto)
        {
            cout << endl;
            cout << "cuenta: " << cuenta;
            cout << "\nnombre: " << nombre;
            cout << "\nmonto: " << monto << endl;
        }
        file.close();
    }
    return 0;
}
