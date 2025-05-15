#include <iostream>
#include <iomanip> 

using namespace std;

int **crearEspacio(int r, int c){
    int **aux;

    aux = new int *[r]; // vector de apuntadores
    for(int i=0; i<r; i++)
        aux[i] = new int[c];
    
    return aux;
}

void imprimirMatriz(int **m, int r, int c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << setw(5) << *(*(m+i)+j);
        }
        cout << endl;
    }
}

void llenar(int **matriz, int r, int c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            matriz[i][j] = (i+1) * (j+1);
        }
    }
}

int main() {
    int **tabla = crearEspacio(10,10);
    imprimirMatriz(tabla,10,10);
    cout << "\n\n";
    llenar(tabla,10,10);
    imprimirMatriz(tabla,10,10);
    return 0;
}