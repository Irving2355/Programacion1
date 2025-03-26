#include <iostream>
#include <fstream>
#include <windows.h> //cambio

using namespace std;

int main(){
    fstream file;
    char c;
    file.open("datos.txt", ios::in);
    file.clear();
    file.seekg(0);
    if(!file)
        cout << "No se abrio";
    else{
        while (file.get(c))
        {
            cout<<c;
            Sleep(250);
        }
        file.close();
    }
    return 0;
}