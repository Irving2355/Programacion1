#include <iostream>
#include <fstream>
#include <windows.h> 
#include <string>
//escritura renglon por renglon
using namespace std;

int main(){
    fstream file;
    string linea;

    file.open("renglones.txt",ios::out|ios::app);
    if(!file)
        cout << "No jalo";
    else{
        cout << "Escribe lineas para guardar en el archvio (escribe FIN para salir):\n";
        while(true){
            getline(cin,linea);

            if(linea == "FIN"){
                break;
            }
            file << linea << endl;
        }
        file.close();
    }
    return 0;
}