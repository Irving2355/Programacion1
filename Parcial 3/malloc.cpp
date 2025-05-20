/*  Casteos
float f = 3.7;
int i = (int)f;  // Resultado: i = 3 (se trunca la parte decimal)

float f1 = 3.9;
int i1 = static_cast<int>(f1);  // i1 = 3

float f2 = -3.9;
int i2 = static_cast<int>(f2);  // i2 = -3
*/
#include <iostream>

using namespace std;

int main(){
    int *numeros; // = new int[5]; 
    numeros = (int*)malloc(5*sizeof(int));
    if(numeros == NULL){
        cout << "Fallo la creacion";
        return 1;
    }

    for(int i=0; i<5; i++){
        numeros[i] = i + 1;
    }

    for(int i=0; i<5; i++){
        cout << " " << numeros[i];
    }

    free(numeros);
    return 0;
}