#include <iostream>
#include <fstream>

using namespace std;

int main(){
    fstream file;
    char c;
    file.open("datos.txt", ios::out|ios::app);
    if(!file)
        cout << "No se abrio";
    else{
        cout << "\n\n Tecle las lineas y temninacon un * y enter\n";
        for(;;){
            c=cin.get();
            if(c=='*')
                break;
            else
                file.put(c);
        }
        file.close();
    }
    return 0;
}