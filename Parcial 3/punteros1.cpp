#include <iostream> 

using namespace std;

int main(){
    //char *cadena2 = "Hola mundo";
    char cadena[] = "Hola mundo";

    //primera fomra recorrer la cadena 
    cout << "\n Primera forma";
    for (int i=0; cadena[i] != '\0'; i++)
        cout << cadena[i] << " ";
    cout << endl;
    //segunda forma
    cout << "\n\n Segunda forma \n";
    for (int i=0; *(cadena+i) != '\0'; i++)
        cout << *(cadena+i) << " ";
    cout << endl;
    //Tercera forma
    cout << "\n\n Tercera forma \n";
    for (; *cadena != '\0';)
        cout << *cadena++ << " ";
        
    return 0;
}