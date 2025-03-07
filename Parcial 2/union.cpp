#include <iostream>
#include <windows.h>

using namespace std;

union dato{
    int entero;
    float decimal;
    char letra;
};

int main(){
    SetConsoleOutputCP(CP_UTF8);

    dato variable;

    variable.entero=10;
    cout << "Entero: " << variable.entero << endl; //\n

    variable.decimal=3.14;
    cout << "Entero: " << variable.entero << endl;

    int x;
    cout << "Dame numero: " << "\n";
    cin >> x;
    cout << "numero guardado: " << x;
    cout << endl << "hola"; 
    return 0;
}