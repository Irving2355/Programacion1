#include <iostream>

using namespace std;

int main(){
    int *numeros = (int*)calloc(5,sizeof(int));//llena el vector con 0

    for(int i=0; i<5; i++){
        cout << " " << numeros[i];
    }
    free(numeros);
    return 0;
}