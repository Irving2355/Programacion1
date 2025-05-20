#include <iostream>

using namespace std;

int main(){
    int *numeros = (int*)malloc(3*sizeof(int));
    for(int i=0; i<3; i++){
        numeros[i] = i + 1;
    }

    for( int i=0; i<3; i++){
        cout << " " << numeros[i];
    }

    cout << "Redimension\n";
    //redimensiona a 6 enteros
    numeros = (int*) realloc(numeros, 6*sizeof(int));
    for( int i=3; i<6; i++){
        numeros[i] = i + 1;
    }

    for( int i=0; i<6; i++){
        cout << " " << numeros[i];
    }
    free(numeros);
    return 0;
}