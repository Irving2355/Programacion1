#include <iostream>
#include <fstream>
#include <windows.h> 
//lectura renglon por renglon
using namespace std;

int main(){
    fstream leerArch;
    char linea[100];
    leerArch.open("renglones.txt",ios::in);
    if(!leerArch){
        cout << "no abrio";
    }else{
        while (leerArch.getline(linea,100))
        {
            cout << linea << endl;
            Sleep(1000);
        }
    }
    return 0;
}