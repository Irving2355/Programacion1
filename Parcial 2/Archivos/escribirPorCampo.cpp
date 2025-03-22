//escribir en un archivo de texto
//campo x campo
#include <iostream>
#include <string>
#include <fstream> //para manejo de archivos

using namespace std;

int main(){
    fstream file;
    char nomarch[30]="clientes.txt";
    int cuenta;
    string nombre;
    float monto;
    char resp='s';

    //abre archvio de tipo escritura
    file.open(nomarch, ios::out|ios::app);
    if(!file)
        cout << "no se abrio";
    else{
        while (resp == 's')
        {
            cout << "\n Dame numero de cuenta: ";
            cin >> cuenta;
            cout << "\n Dame nombre: ";
            fflush(stdin);
            getline(cin,nombre);
            cout << "\n Dame el monto: ";
            cin >> monto;

            //escribe o guarda dentro del archivo
            file << cuenta << " " << nombre << " " << monto << endl;

            cout << "\n Otro mas s/n";
            fflush(stdin);
            cin.get(resp);
        }
        file.close();
    }
    return 0;
}